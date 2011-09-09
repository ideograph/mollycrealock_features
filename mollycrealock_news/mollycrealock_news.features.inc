<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mollycrealock_news_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function mollycrealock_news_imagecache_default_presets() {
  $items = array(
    'node_rounded' => array(
      'presetname' => 'node_rounded',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '760',
            'height' => '550',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_roundedcorners',
          'data' => array(
            'radius' => '12',
            'independent_corners_set' => array(
              'independent_corners' => 0,
              'radii' => array(
                'tl' => '',
                'tr' => '',
                'bl' => '',
                'br' => '',
              ),
            ),
            'antialias' => TRUE,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_coloractions',
          'action' => 'imagecache_convert',
          'data' => array(
            'format' => 'image/png',
          ),
        ),
      ),
    ),
    'thumb_news' => array(
      'presetname' => 'thumb_news',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecrop',
          'action' => 'imagecrop_javascript',
          'data' => array(
            'width' => '180',
            'height' => '180',
            'xoffset' => 'center',
            'yoffset' => 'center',
            'resizable' => 1,
            'aspect' => 'CROP',
            'disable_if_no_data' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale_and_crop',
          'data' => array(
            'width' => '180',
            'height' => '180',
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function mollycrealock_news_node_info() {
  $items = array(
    'news' => array(
      'name' => t('News'),
      'module' => 'features',
      'description' => t('a news item appears in the news listings and is archived and searchable.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function mollycrealock_news_views_api() {
  return array(
    'api' => '2',
  );
}

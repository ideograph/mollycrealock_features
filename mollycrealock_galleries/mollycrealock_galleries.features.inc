<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mollycrealock_galleries_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mollycrealock_galleries_node_info() {
  $items = array(
    'gallery' => array(
      'name' => t('gallery'),
      'module' => 'features',
      'description' => t('A gallery contains a title and description. You attach multiple images to the gallery and they will be displayed all fancy-like.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Description'),
      'min_word_count' => '0',
      'help' => t('New Galleries by default will be invisible to the public and clients.
You will need to visit the GRANT tab to set these options.
Display on the <a href="/gallery">portfolio</a> page is controlled by selecting the <em>Display in Gallery index</em> checkbox under <em>Publishing options</em>.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function mollycrealock_galleries_views_api() {
  return array(
    'api' => '2',
  );
}

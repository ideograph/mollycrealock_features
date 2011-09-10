<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function mollycrealock_frontpage_slideshow_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function mollycrealock_frontpage_slideshow_node_info() {
  $items = array(
    'homepage' => array(
      'name' => t('homepage slideshow'),
      'module' => 'features',
      'description' => t('Images attached to this content type get displayed as a slideshow on the homepage.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => t('Images attached to this content type get displayed as a slideshow on the homepage. Multiple homepages\' images will be combined in the slideshow. Uncheck the "Promoted to front page" checkbox under "Publishing options" too keep images from appearing in the slideshow, but retaining the content in the system. This allows you to set up a slideshow in advance, and switch out what is active on the home page by setting different homepages\' status. The content should be set to Unpublished by default. We are just using this content type as a repository for the images.'),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function mollycrealock_frontpage_slideshow_views_api() {
  return array(
    'api' => '2',
  );
}

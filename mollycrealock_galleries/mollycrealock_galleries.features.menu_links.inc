<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function mollycrealock_galleries_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:client-galleries
  $menu_links['primary-links:client-galleries'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'client-galleries',
    'router_path' => 'client-galleries',
    'link_title' => 'Client Work',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '-49',
  );
  // Exported menu link: primary-links:gallery
  $menu_links['primary-links:gallery'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'gallery',
    'router_path' => 'gallery',
    'link_title' => 'portfolio',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'system',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Client Work');
  t('portfolio');


  return $menu_links;
}

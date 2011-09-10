<?php

/**
 * Implementation of hook_views_default_views().
 */
function mollycrealock_frontpage_slideshow_views_default_views() {
  $views = array();

  // Exported view: homepage_slideshow
  $view = new view;
  $view->name = 'homepage_slideshow';
  $view->description = 'slideshow for the homepage displays 10 random images';
  $view->tag = '';
  $view->view_php = '';
  $view->base_table = 'node';
  $view->is_cacheable = FALSE;
  $view->api_version = 2;
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */
  $handler = $view->new_display('default', 'Defaults', 'default');
  $handler->override_option('fields', array(
    'field_images_list_fid' => array(
      'label' => '',
      'alter' => array(
        'alter_text' => 0,
        'text' => '',
        'make_link' => 0,
        'path' => '',
        'link_class' => '',
        'alt' => '',
        'prefix' => '',
        'suffix' => '',
        'target' => '',
        'help' => '',
        'trim' => 0,
        'max_length' => '',
        'word_boundary' => 1,
        'ellipsis' => 1,
        'html' => 0,
        'strip_tags' => 0,
      ),
      'empty' => '',
      'hide_empty' => 0,
      'empty_zero' => 0,
      'link_to_node' => 0,
      'label_type' => 'none',
      'format' => 'node_rounded_default',
      'multiple' => array(
        'group' => 0,
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_reversed' => 0,
      ),
      'exclude' => 0,
      'id' => 'field_images_list_fid',
      'table' => 'node_data_field_images_list',
      'field' => 'field_images_list_fid',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('filters', array(
    'type' => array(
      'operator' => 'in',
      'value' => array(
        'homepage' => 'homepage',
      ),
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'type',
      'table' => 'node',
      'field' => 'type',
      'relationship' => 'none',
    ),
    'promote' => array(
      'operator' => '=',
      'value' => '1',
      'group' => '0',
      'exposed' => FALSE,
      'expose' => array(
        'operator' => FALSE,
        'label' => '',
      ),
      'id' => 'promote',
      'table' => 'node',
      'field' => 'promote',
      'relationship' => 'none',
    ),
  ));
  $handler->override_option('access', array(
    'type' => 'none',
  ));
  $handler->override_option('cache', array(
    'type' => 'time',
    'results_lifespan' => '3600',
    'output_lifespan' => '3600',
  ));
  $handler->override_option('use_ajax', TRUE);
  $handler->override_option('distinct', 0);
  $handler->override_option('style_plugin', 'slideshow');
  $handler->override_option('style_options', array(
    'grouping' => '',
    'type' => 'ul',
    'mode' => 'singleframe',
    'singleframe' => array(
      'timeout' => '3500',
      'delay' => '2000',
      'speed' => '300',
      'random' => '1',
      'pause' => '1',
      'pause_on_click' => '0',
      'controls' => '0',
      'pager' => '0',
      'pager_type' => 'Thumbnails',
      'pager_hover' => '1',
      'image_count' => '0',
      'effect' => 'fade',
      'sync' => '1',
      'advanced' => '',
      'ie' => array(
        'cleartype' => 'true',
        'cleartypenobg' => 'false',
      ),
    ),
    'thumbnailhover' => array(
      'main_fields' => array(
        'field_images_list_fid' => 0,
      ),
      'breakout_fields' => array(
        'field_images_list_fid' => 0,
      ),
      'teasers_last' => 1,
      'timeout' => '5000',
      'delay' => '0',
      'speed' => '300',
      'random' => '0',
      'pause' => '1',
      'pager_event' => 'mouseover',
      'controls' => '0',
      'image_count' => '0',
      'effect' => 'fade',
      'sync' => '1',
      'advanced' => '',
      'ie' => array(
        'cleartype' => 'true',
        'cleartypenobg' => 'false',
      ),
    ),
  ));
  $handler = $view->new_display('page', 'Page', 'page_1');
  $handler->override_option('path', 'node');
  $handler->override_option('menu', array(
    'type' => 'none',
    'title' => 'home',
    'description' => '',
    'weight' => '',
    'name' => 'primary-links',
  ));
  $handler->override_option('tab_options', array(
    'type' => 'none',
    'title' => '',
    'description' => '',
    'weight' => 0,
    'name' => 'navigation',
  ));

  $views[$view->name] = $view;

  return $views;
}

<?php

/**
 * Implementation of hook_strongarm().
 */
function mollycrealock_frontpage_slideshow_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_homepage';
  $strongarm->value = 0;

  $export['comment_anonymous_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_homepage';
  $strongarm->value = '3';

  $export['comment_controls_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_homepage';
  $strongarm->value = '4';

  $export['comment_default_mode_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_homepage';
  $strongarm->value = '1';

  $export['comment_default_order_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_homepage';
  $strongarm->value = '50';

  $export['comment_default_per_page_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_homepage';
  $strongarm->value = '0';

  $export['comment_form_location_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_homepage';
  $strongarm->value = '0';

  $export['comment_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_homepage';
  $strongarm->value = '1';

  $export['comment_preview_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_homepage';
  $strongarm->value = '1';

  $export['comment_subject_field_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_homepage';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '-4',
    'revision_information' => '-1',
    'comment_settings' => '0',
    'menu' => '-2',
    'path' => '1',
  );

  $export['content_extra_weights_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ffp_homepage_field_images_list';
  $strongarm->value = 0;

  $export['ffp_homepage_field_images_list'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'galleria_homepage';
  $strongarm->value = '0';

  $export['galleria_homepage'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_homepage_pattern';
  $strongarm->value = 'slideshow/[title-raw]';

  $export['pathauto_node_homepage_pattern'] = $strongarm;
  return $export;
}

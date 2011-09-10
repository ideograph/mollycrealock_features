<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function mollycrealock_galleries_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_gallery_privacy
  $groups['gallery-group_gallery_privacy'] = array(
    'group_type' => 'standard',
    'type_name' => 'gallery',
    'group_name' => 'group_gallery_privacy',
    'label' => 'Gallery Privacy',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => 'These options determine where the gallery gets shown. Is it public or is it a client gallery?',
      ),
      'display' => array(
        'weight' => '-4',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'full' => array(
          'format' => 'hidden',
          'exclude' => 1,
        ),
        'description' => '',
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '-4',
    'fields' => array(
      '0' => 'field_gallery_index',
      '1' => 'field_clients',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Gallery Privacy');

  return $groups;
}

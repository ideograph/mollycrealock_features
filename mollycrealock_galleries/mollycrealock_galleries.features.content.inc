<?php

/**
 * Implementation of hook_content_default_fields().
 */
function mollycrealock_galleries_content_default_fields() {
  $fields = array();

  // Exported field: field_clients
  $fields['gallery-field_clients'] = array(
    'field_name' => 'field_clients',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '2',
      'parent' => 'group_gallery_privacy',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '5' => 5,
      '2' => 0,
      '4' => 0,
      '3' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '',
    'advanced_view_args' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'reverse_link' => 1,
      'default_value' => array(
        '0' => array(
          'uid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Gallery restricted to',
      'weight' => '2',
      'description' => 'Check off all the users you want to restrict the gallery to. As the owner, you will always have access. You can grant access to ALL users with the role CLIENT, by selecting that role in the GRANT tab, and deselecting anonymous users to block their access.',
      'type' => 'userreference_buttons',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_gallery_index
  $fields['gallery-field_gallery_index'] = array(
    'field_name' => 'field_gallery_index',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '1',
      'parent' => 'group_gallery_privacy',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => 'off|no, this is off the grid.
on|Display on the Galley index page',
    'allowed_values_php' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'value' => NULL,
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Display in the Gallery index',
      'weight' => '1',
      'description' => '<p>Checking this box will display the gallery title and thumbnail on the <a href="/gallery">portfolio</a> page.</p>
<p>Restricting the gallery to specific users will override this setting.</p>',
      'type' => 'optionwidgets_onoff',
      'module' => 'optionwidgets',
    ),
  );

  // Exported field: field_images
  $fields['gallery-field_images'] = array(
    'field_name' => 'field_images',
    'type_name' => 'gallery',
    'display_settings' => array(
      'weight' => '-7',
      'parent' => '',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'imagefield_galleria',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '1',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '1',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '1600x1600',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'fupload_mode' => 'multiple',
      'fupload_previewlist_img_attributes' => '',
      'fupload_title_replacements' => '_;{;};-',
      'fupload_previewlist_field_settings' => array(
        'imagefield_title' => 'imagefield_title',
        'imagefield_alt' => 'imagefield_alt',
        'imagefield_description' => 'imagefield_description',
        'node_title' => 0,
        'node_description' => 0,
      ),
      'fupload_previewlist_redirecturl' => '',
      'label' => 'images',
      'weight' => '-7',
      'description' => '',
      'type' => 'image_fupload_imagefield_widget',
      'module' => 'image_fupload_imagefield',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display in the Gallery index');
  t('Gallery restricted to');
  t('images');

  return $fields;
}

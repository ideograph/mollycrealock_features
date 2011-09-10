<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function mollycrealock_galleries_user_default_permissions() {
  $permissions = array();

  // Exported permission: assign client role
  $permissions['assign client role'] = array(
    'name' => 'assign client role',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: delete any gallery content
  $permissions['delete any gallery content'] = array(
    'name' => 'delete any gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own gallery content
  $permissions['delete own gallery content'] = array(
    'name' => 'delete own gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any gallery content
  $permissions['edit any gallery content'] = array(
    'name' => 'edit any gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit captions
  $permissions['edit captions'] = array(
    'name' => 'edit captions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: edit own gallery content
  $permissions['edit own gallery content'] = array(
    'name' => 'edit own gallery content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: grant editable node permissions
  $permissions['grant editable node permissions'] = array(
    'name' => 'grant editable node permissions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: grant node permissions
  $permissions['grant node permissions'] = array(
    'name' => 'grant node permissions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: grant own node permissions
  $permissions['grant own node permissions'] = array(
    'name' => 'grant own node permissions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: mass upload images
  $permissions['mass upload images'] = array(
    'name' => 'mass upload images',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: view imagecache thumb_gallery
  $permissions['view imagecache thumb_gallery'] = array(
    'name' => 'view imagecache thumb_gallery',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'anonymous user',
      '2' => 'authenticated user',
    ),
  );

  return $permissions;
}

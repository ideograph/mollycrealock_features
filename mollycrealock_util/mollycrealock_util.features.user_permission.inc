<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function mollycrealock_util_user_default_permissions() {
  $permissions = array();

  // Exported permission: access administration menu
  $permissions['access administration menu'] = array(
    'name' => 'access administration menu',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: access administration pages
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: administer nodes
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: administer primary-links menu items
  $permissions['administer primary-links menu items'] = array(
    'name' => 'administer primary-links menu items',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: administer themes
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: administer users
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: create url aliases
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: crop images with toolbox
  $permissions['crop images with toolbox'] = array(
    'name' => 'crop images with toolbox',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: display site building menu
  $permissions['display site building menu'] = array(
    'name' => 'display site building menu',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: display site configuration menu
  $permissions['display site configuration menu'] = array(
    'name' => 'display site configuration menu',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: notify of path changes
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: revert revisions
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  // Exported permission: view revisions
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'owner',
    ),
  );

  return $permissions;
}

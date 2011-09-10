<?php

/**
 * Implementation of hook_user_default_roles().
 */
function mollycrealock_galleries_user_default_roles() {
  $roles = array();

  // Exported role: client
  $roles['client'] = array(
    'name' => 'client',
  );

  return $roles;
}

<?php

/**
 * Implementation of hook_user_default_roles().
 */
function mollycrealock_util_user_default_roles() {
  $roles = array();

  // Exported role: owner
  $roles['owner'] = array(
    'name' => 'owner',
  );

  return $roles;
}

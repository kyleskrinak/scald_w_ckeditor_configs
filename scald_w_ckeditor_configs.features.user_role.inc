<?php
/**
 * @file
 * scald_w_ckeditor_configs.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function scald_w_ckeditor_configs_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 3,
  );

  // Exported role: example scald editor.
  $roles['example scald editor'] = array(
    'name' => 'example scald editor',
    'weight' => 2,
  );

  return $roles;
}

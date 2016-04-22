<?php
/**
 * @file
 * scald_w_ckeditor_configs.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function scald_w_ckeditor_configs_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access scald dnd library'.
  $permissions['access scald dnd library'] = array(
    'name' => 'access scald dnd library',
    'roles' => array(
      'content editor' => 'content editor',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald_dnd_library',
  );

  // Exported permission: 'add terms in scald_tags'.
  $permissions['add terms in scald_tags'] = array(
    'name' => 'add terms in scald_tags',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer scald'.
  $permissions['administer scald'] = array(
    'name' => 'administer scald',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scald atoms'.
  $permissions['administer scald atoms'] = array(
    'name' => 'administer scald atoms',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'bypass atom access restrictions'.
  $permissions['bypass atom access restrictions'] = array(
    'name' => 'bypass atom access restrictions',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of any type'.
  $permissions['create atom of any type'] = array(
    'name' => 'create atom of any type',
    'roles' => array(
      'content editor' => 'content editor',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of file type'.
  $permissions['create atom of file type'] = array(
    'name' => 'create atom of file type',
    'roles' => array(),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of image type'.
  $permissions['create atom of image type'] = array(
    'name' => 'create atom of image type',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of video type'.
  $permissions['create atom of video type'] = array(
    'name' => 'create atom of video type',
    'roles' => array(
      'content editor' => 'content editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete any atom'.
  $permissions['delete any atom'] = array(
    'name' => 'delete any atom',
    'roles' => array(
      'site administrator' => 'site administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete own atom'.
  $permissions['delete own atom'] = array(
    'name' => 'delete own atom',
    'roles' => array(
      'content manager' => 'content manager',
      'site administrator' => 'site administrator',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete terms in scald_tags'.
  $permissions['delete terms in scald_tags'] = array(
    'name' => 'delete terms in scald_tags',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any atom'.
  $permissions['edit any atom'] = array(
    'name' => 'edit any atom',
    'roles' => array(
      'content manager' => 'content manager',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit own atom'.
  $permissions['edit own atom'] = array(
    'name' => 'edit own atom',
    'roles' => array(
      'content editor' => 'content editor',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit terms in scald_tags'.
  $permissions['edit terms in scald_tags'] = array(
    'name' => 'edit terms in scald_tags',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'fetch any atom'.
  $permissions['fetch any atom'] = array(
    'name' => 'fetch any atom',
    'roles' => array(
      'content editor' => 'content editor',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'fetch own atom'.
  $permissions['fetch own atom'] = array(
    'name' => 'fetch own atom',
    'roles' => array(
      'content editor' => 'content editor',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'restrict atom access'.
  $permissions['restrict atom access'] = array(
    'name' => 'restrict atom access',
    'roles' => array(
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(
      'content manager' => 'content manager',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view own atom'.
  $permissions['view own atom'] = array(
    'name' => 'view own atom',
    'roles' => array(
      'content editor' => 'content editor',
      'super administrator' => 'super administrator',
    ),
    'module' => 'scald',
  );

  return $permissions;
}

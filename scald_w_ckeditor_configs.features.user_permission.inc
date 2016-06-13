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
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald_dnd_library',
  );

  // Exported permission: 'add terms in scald_authors'.
  $permissions['add terms in scald_authors'] = array(
    'name' => 'add terms in scald_authors',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in scald_tags'.
  $permissions['add terms in scald_tags'] = array(
    'name' => 'add terms in scald_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in tags'.
  $permissions['add terms in tags'] = array(
    'name' => 'add terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer ckeditor'.
  $permissions['administer ckeditor'] = array(
    'name' => 'administer ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'administer dnd'.
  $permissions['administer dnd'] = array(
    'name' => 'administer dnd',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dnd',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer imce'.
  $permissions['administer imce'] = array(
    'name' => 'administer imce',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'imce',
  );

  // Exported permission: 'administer scald'.
  $permissions['administer scald'] = array(
    'name' => 'administer scald',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer scald atoms'.
  $permissions['administer scald atoms'] = array(
    'name' => 'administer scald atoms',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'bypass atom access restrictions'.
  $permissions['bypass atom access restrictions'] = array(
    'name' => 'bypass atom access restrictions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of any type'.
  $permissions['create atom of any type'] = array(
    'name' => 'create atom of any type',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of file type'.
  $permissions['create atom of file type'] = array(
    'name' => 'create atom of file type',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of image type'.
  $permissions['create atom of image type'] = array(
    'name' => 'create atom of image type',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create atom of video type'.
  $permissions['create atom of video type'] = array(
    'name' => 'create atom of video type',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'create page content'.
  $permissions['create page content'] = array(
    'name' => 'create page content',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize ckeditor'.
  $permissions['customize ckeditor'] = array(
    'name' => 'customize ckeditor',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'ckeditor',
  );

  // Exported permission: 'delete any atom'.
  $permissions['delete any atom'] = array(
    'name' => 'delete any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete any page content'.
  $permissions['delete any page content'] = array(
    'name' => 'delete any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own atom'.
  $permissions['delete own atom'] = array(
    'name' => 'delete own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'delete own page content'.
  $permissions['delete own page content'] = array(
    'name' => 'delete own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in scald_authors'.
  $permissions['delete terms in scald_authors'] = array(
    'name' => 'delete terms in scald_authors',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in scald_tags'.
  $permissions['delete terms in scald_tags'] = array(
    'name' => 'delete terms in scald_tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in tags'.
  $permissions['delete terms in tags'] = array(
    'name' => 'delete terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any atom'.
  $permissions['edit any atom'] = array(
    'name' => 'edit any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit any page content'.
  $permissions['edit any page content'] = array(
    'name' => 'edit any page content',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own atom'.
  $permissions['edit own atom'] = array(
    'name' => 'edit own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'edit own page content'.
  $permissions['edit own page content'] = array(
    'name' => 'edit own page content',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in scald_authors'.
  $permissions['edit terms in scald_authors'] = array(
    'name' => 'edit terms in scald_authors',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in scald_tags'.
  $permissions['edit terms in scald_tags'] = array(
    'name' => 'edit terms in scald_tags',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in tags'.
  $permissions['edit terms in tags'] = array(
    'name' => 'edit terms in tags',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'fetch any atom'.
  $permissions['fetch any atom'] = array(
    'name' => 'fetch any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'fetch own atom'.
  $permissions['fetch own atom'] = array(
    'name' => 'fetch own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'restrict atom access'.
  $permissions['restrict atom access'] = array(
    'name' => 'restrict atom access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'use text format filtered_html'.
  $permissions['use text format filtered_html'] = array(
    'name' => 'use text format filtered_html',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'use text format full_html'.
  $permissions['use text format full_html'] = array(
    'name' => 'use text format full_html',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'view any atom'.
  $permissions['view any atom'] = array(
    'name' => 'view any atom',
    'roles' => array(
      'administrator' => 'administrator',
      'anonymous user' => 'anonymous user',
      'authenticated user' => 'authenticated user',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  // Exported permission: 'view own atom'.
  $permissions['view own atom'] = array(
    'name' => 'view own atom',
    'roles' => array(
      'administrator' => 'administrator',
      'example scald editor' => 'example scald editor',
    ),
    'module' => 'scald',
  );

  return $permissions;
}

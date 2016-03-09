<?php
/**
 * @file
 * static_page_content_type.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function static_page_content_type_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create static_page content'.
  $permissions['create static_page content'] = array(
    'name' => 'create static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any static_page content'.
  $permissions['delete any static_page content'] = array(
    'name' => 'delete any static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own static_page content'.
  $permissions['delete own static_page content'] = array(
    'name' => 'delete own static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any static_page content'.
  $permissions['edit any static_page content'] = array(
    'name' => 'edit any static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own static_page content'.
  $permissions['edit own static_page content'] = array(
    'name' => 'edit own static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'node',
  );

  // Exported permission: 'publish any static_page content'.
  $permissions['publish any static_page content'] = array(
    'name' => 'publish any static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish editable static_page content'.
  $permissions['publish editable static_page content'] = array(
    'name' => 'publish editable static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'publish own static_page content'.
  $permissions['publish own static_page content'] = array(
    'name' => 'publish own static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish any static_page content'.
  $permissions['unpublish any static_page content'] = array(
    'name' => 'unpublish any static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish editable static_page content'.
  $permissions['unpublish editable static_page content'] = array(
    'name' => 'unpublish editable static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'publishcontent',
  );

  // Exported permission: 'unpublish own static_page content'.
  $permissions['unpublish own static_page content'] = array(
    'name' => 'unpublish own static_page content',
    'roles' => array(
      'administrator' => 'administrator',
      'content editor' => 'content editor',
      'manager' => 'manager',
    ),
    'module' => 'publishcontent',
  );

  return $permissions;
}

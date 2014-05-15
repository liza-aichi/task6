<?php
/**
 * @file
 * address_book_feature1.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function address_book_feature1_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'visit address book page'.
  $permissions['visit address book page'] = array(
    'name' => 'visit address book page',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'address_book',
  );

  return $permissions;
}

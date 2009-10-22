<?php

/**
 * Helper to implementation of hook_context_default_contexts().
 */
function _atrium_forum_context_default_contexts() {
  $items = array();

  $items[] = array(
    'namespace' => 'spaces',
    'attribute' => 'feature',
    'value' => 'forum',
    'description' => '',
    'node' => array(
      '0' => 'forum',
    ),
    'menu' => 'forum',
    'block' => array(
      'forum_0' => array(
        'module' => 'forum',
        'delta' => '0',
        'weight' => 34,
        'region' => 'right',
        'status' => '0',
        'label' => 'Active forum topics',
        'type' => 'context_ui',
      ),
      'forum_1' => array(
        'module' => 'forum',
        'delta' => '1',
        'weight' => 35,
        'region' => 'right',
        'status' => '0',
        'label' => 'New forum topics',
        'type' => 'context_ui',
      ),
    ),
  );
  return $items;
}

/**
 * Helper to implementation of hook_menu_default_items().
 */
function _atrium_forum_menu_default_items() {
  $items = array();

  $items[] = array(
    'title' => 'Forums',
    'path' => 'forum',
    'weight' => '0',
  );
  // Translatables
  array(
    t('Forums'),
  );


  return $items;
}

/**
 * Helper to implementation of hook_user_default_permissions().
 */
function _atrium_forum_user_default_permissions() {
  $permissions = array();

  // Exported permission: admin own group forums
  $permissions[] = array(
    'name' => 'admin own group forums',
    'roles' => array(),
  );

  // Exported permission: administer forums
  $permissions[] = array(
    'name' => 'administer forums',
    'roles' => array(),
  );

  // Exported permission: create forum topics
  $permissions[] = array(
    'name' => 'create forum topics',
    'roles' => array(),
  );

  // Exported permission: delete any forum topic
  $permissions[] = array(
    'name' => 'delete any forum topic',
    'roles' => array(),
  );

  // Exported permission: delete own forum topics
  $permissions[] = array(
    'name' => 'delete own forum topics',
    'roles' => array(),
  );

  // Exported permission: edit any forum topic
  $permissions[] = array(
    'name' => 'edit any forum topic',
    'roles' => array(),
  );

  // Exported permission: edit own forum topics
  $permissions[] = array(
    'name' => 'edit own forum topics',
    'roles' => array(),
  );

  // Exported permission: make forums public
  $permissions[] = array(
    'name' => 'make forums public',
    'roles' => array(),
  );

  return $permissions;
}

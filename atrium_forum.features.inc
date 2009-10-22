<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function atrium_forum_context_default_contexts() {
  module_load_include('inc', 'atrium_forum', 'atrium_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_forum_context_default_contexts', $args);
}

/**
 * Implementation of hook_menu_default_items().
 */
function atrium_forum_menu_default_items() {
  module_load_include('inc', 'atrium_forum', 'atrium_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_forum_menu_default_items', $args);
}

/**
 * Implementation of hook_user_default_permissions().
 */
function atrium_forum_user_default_permissions() {
  module_load_include('inc', 'atrium_forum', 'atrium_forum.defaults');
  $args = func_get_args();
  return call_user_func_array('_atrium_forum_user_default_permissions', $args);
}

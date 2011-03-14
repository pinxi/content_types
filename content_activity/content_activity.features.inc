<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function content_activity_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function content_activity_node_info() {
  $items = array(
    'activity' => array(
      'name' => t('Activity/Game'),
      'module' => 'features',
      'description' => t('This is the test activity typ'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Body'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

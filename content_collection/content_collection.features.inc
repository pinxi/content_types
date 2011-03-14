<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function content_collection_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function content_collection_node_info() {
  $items = array(
    'collection' => array(
      'name' => t('Collection'),
      'module' => 'features',
      'description' => t('we may not need this.'),
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

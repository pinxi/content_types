<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function content_contributor_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function content_contributor_node_info() {
  $items = array(
    'contributor' => array(
      'name' => t('Contributor'),
      'module' => 'features',
      'description' => t('Profile/Contributor/Author'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Bio'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

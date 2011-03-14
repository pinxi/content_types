<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function content_advert_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function content_advert_node_info() {
  $items = array(
    'advert' => array(
      'name' => t('Advert'),
      'module' => 'features',
      'description' => t('This is for Dart/Promotional Ads'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'has_body' => '1',
      'body_label' => t('Zone'),
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

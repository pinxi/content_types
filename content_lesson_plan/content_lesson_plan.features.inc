<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function content_lesson_plan_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_node_info().
 */
function content_lesson_plan_node_info() {
  $items = array(
    'lesson_plan' => array(
      'name' => t('Lesson Plan'),
      'module' => 'features',
      'description' => t('Horrary for Lessons!'),
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

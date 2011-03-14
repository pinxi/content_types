<?php

/**
 * Implementation of hook_strongarm().
 */
function content_lesson_plan_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_lesson_plan';
  $strongarm->value = 0;

  $export['comment_anonymous_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_lesson_plan';
  $strongarm->value = '3';

  $export['comment_controls_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_lesson_plan';
  $strongarm->value = '4';

  $export['comment_default_mode_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_lesson_plan';
  $strongarm->value = '1';

  $export['comment_default_order_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_lesson_plan';
  $strongarm->value = '50';

  $export['comment_default_per_page_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_lesson_plan';
  $strongarm->value = '0';

  $export['comment_form_location_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_lesson_plan';
  $strongarm->value = '2';

  $export['comment_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_lesson_plan';
  $strongarm->value = '1';

  $export['comment_preview_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_lesson_plan';
  $strongarm->value = '1';

  $export['comment_subject_field_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_lesson_plan';
  $strongarm->value = array(
    'title' => '-5',
    'body_field' => '1',
    'revision_information' => '6',
    'author' => '5',
    'options' => '7',
    'comment_settings' => '8',
    'menu' => '4',
    'path' => '9',
  );

  $export['content_extra_weights_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_lesson_plan';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_lesson_plan'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_lesson_plan';
  $strongarm->value = '1';

  $export['upload_lesson_plan'] = $strongarm;
  return $export;
}

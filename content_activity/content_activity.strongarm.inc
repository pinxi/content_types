<?php

/**
 * Implementation of hook_strongarm().
 */
function content_activity_strongarm() {
  $export = array();
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_activity';
  $strongarm->value = '2';

  $export['comment_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_activity';
  $strongarm->value = 0;

  $export['comment_anonymous_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_activity';
  $strongarm->value = '3';

  $export['comment_controls_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_activity';
  $strongarm->value = '4';

  $export['comment_default_mode_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_activity';
  $strongarm->value = '1';

  $export['comment_default_order_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_activity';
  $strongarm->value = '50';

  $export['comment_default_per_page_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_activity';
  $strongarm->value = '0';

  $export['comment_form_location_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_activity';
  $strongarm->value = '1';

  $export['comment_preview_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_activity';
  $strongarm->value = '1';

  $export['comment_subject_field_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_activity';
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

  $export['content_extra_weights_activity'] = $strongarm;
  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_activity';
  $strongarm->value = array(
    0 => 'status',
    1 => 'promote',
  );

  $export['node_options_activity'] = $strongarm;
  return $export;
}

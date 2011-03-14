<?php

/**
 * Implementation of hook_uuid_features_default_terms().
 */
function content_article_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'uuid' => '05d31e4c-4c39-11e0-9b58-d039a9a74874',
    'name' => 'Infant / Age 0-1',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => '1234e332-4c39-11e0-9b58-d039a9a74874',
    'name' => 'Toddler / Age 1-3',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => '1fa0ff4c-4c39-11e0-9b58-d039a9a74874',
    'name' => 'Pre-K / Age 4',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => '25c74570-4c39-11e0-9b58-d039a9a74874',
    'name' => 'K / Age 5',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => '2f13c4aa-4c39-11e0-9b58-d039a9a74874',
    'name' => 'English',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => '34182d7e-4c39-11e0-9b58-d039a9a74874',
    'name' => 'Spanish',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => 'aa062818-4c36-11e0-9b58-d039a9a74874',
    'name' => 'skill 1',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  $terms[] = array(
    'uuid' => 'b01ad5aa-4c36-11e0-9b58-d039a9a74874',
    'name' => 'drupal',
    'description' => '',
    'weight' => '0',
    'uuid_vocabulary' => FALSE,
  );
  return $terms;
}

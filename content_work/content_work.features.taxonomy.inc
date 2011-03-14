<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function content_work_taxonomy_default_vocabularies() {
  return array(
    'tax_genre' => array(
      'name' => 'Genre',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tax_genre',
      'weight' => '0',
      'nodes' => array(
        'work' => 'work',
      ),
    ),
    'tax_reading_level' => array(
      'name' => 'Reading Level',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '1',
      'module' => 'features_tax_reading_level',
      'weight' => '0',
      'nodes' => array(
        'work' => 'work',
      ),
    ),
  );
}

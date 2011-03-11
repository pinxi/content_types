<?php

/**
 * Implementation of hook_taxonomy_default_vocabularies().
 */
function content_article_taxonomy_default_vocabularies() {
  return array(
    'tax_grade_age' => array(
      'name' => 'Grade/Age ',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_tax_grade_age',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'tax_language' => array(
      'name' => 'Language',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_tax_language',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'tax_resource_type' => array(
      'name' => 'Resource Type ',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_tax_resource_type',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'tax_site_section' => array(
      'name' => 'Site Section ',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '1',
      'tags' => '0',
      'module' => 'features_tax_site_section',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'tax_skill' => array(
      'name' => 'Skills',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_tax_skill',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
    'tax_subject' => array(
      'name' => 'Subject',
      'description' => '',
      'help' => '',
      'relations' => '1',
      'hierarchy' => '0',
      'multiple' => '0',
      'required' => '0',
      'tags' => '0',
      'module' => 'features_tax_subject',
      'weight' => '0',
      'nodes' => array(
        'article' => 'article',
      ),
    ),
  );
}
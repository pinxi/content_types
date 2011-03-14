<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function content_collection_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_collection_associated
  $groups['collection-group_collection_associated'] = array(
    'group_type' => 'standard',
    'type_name' => 'collection',
    'group_name' => 'group_collection_associated',
    'label' => 'Media & Related Content',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '2',
    'fields' => array(
      '0' => 'field_collection_associated_cont',
      '1' => 'field_collection_associated_medi',
    ),
  );

  // Exported group: group_collection_promo
  $groups['collection-group_collection_promo'] = array(
    'group_type' => 'standard',
    'type_name' => 'collection',
    'group_name' => 'group_collection_promo',
    'label' => 'Content Promotion',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_collection_promo_dates',
      '1' => 'field_collection_promo_title',
      '2' => 'field_collection_promo_descripti',
      '3' => 'field_collection_promo_image',
      '4' => 'field_collection_promo_priority',
      '5' => 'field_collection_promo_suppress',
      '6' => 'field_collection_theme',
    ),
  );

  // Exported group: group_collection_supplemental
  $groups['collection-group_collection_supplemental'] = array(
    'group_type' => 'standard',
    'type_name' => 'collection',
    'group_name' => 'group_collection_supplemental',
    'label' => 'Contributor, Header, Deck & Sidebar',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '-3',
    'fields' => array(
      '0' => 'field_collection_header_image',
      '1' => 'field_collection_contributor',
      '2' => 'field_collection_deck',
      '3' => 'field_collection_sidebar',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Promotion');
  t('Contributor, Header, Deck & Sidebar');
  t('Media & Related Content');

  return $groups;
}

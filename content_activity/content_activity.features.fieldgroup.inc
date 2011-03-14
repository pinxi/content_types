<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function content_activity_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_activity_associated
  $groups['activity-group_activity_associated'] = array(
    'group_type' => 'standard',
    'type_name' => 'activity',
    'group_name' => 'group_activity_associated',
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
      '0' => 'field_activity_associated_conten',
      '1' => 'field_activity_associated_media',
    ),
  );

  // Exported group: group_activity_promo
  $groups['activity-group_activity_promo'] = array(
    'group_type' => 'standard',
    'type_name' => 'activity',
    'group_name' => 'group_activity_promo',
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
      '0' => 'field_activity_promo_dates',
      '1' => 'field_activity_promo_title',
      '2' => 'field_activity_promo_description',
      '3' => 'field_activity_promo_image',
      '4' => 'field_activity_promo_priority',
      '5' => 'field_activity_promo_suppress',
      '6' => 'field_activity_theme',
    ),
  );

  // Exported group: group_activity_supplemental
  $groups['activity-group_activity_supplemental'] = array(
    'group_type' => 'standard',
    'type_name' => 'activity',
    'group_name' => 'group_activity_supplemental',
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
      '0' => 'field_activity_header_image',
      '1' => 'field_activity_contributor',
      '2' => 'field_activity_deck',
      '3' => 'field_activity_sidebar',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Promotion');
  t('Contributor, Header, Deck & Sidebar');
  t('Media & Related Content');

  return $groups;
}

<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function content_contributor_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_contributor_associated
  $groups['contributor-group_contributor_associated'] = array(
    'group_type' => 'standard',
    'type_name' => 'contributor',
    'group_name' => 'group_contributor_associated',
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
      '0' => 'field_contributor_associated_con',
      '1' => 'field_contributor_associated_med',
    ),
  );

  // Exported group: group_contributor_promo
  $groups['contributor-group_contributor_promo'] = array(
    'group_type' => 'standard',
    'type_name' => 'contributor',
    'group_name' => 'group_contributor_promo',
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
      '0' => 'field_contributor_promo_dates',
      '1' => 'field_contributor_promo_title',
      '2' => 'field_contributor_promo_descript',
      '3' => 'field_contributor_promo_image',
      '4' => 'field_contributor_promo_priority',
      '5' => 'field_contributor_promo_suppress',
      '6' => 'field_contributor_theme',
    ),
  );

  // Exported group: group_contributor_supplemental
  $groups['contributor-group_contributor_supplemental'] = array(
    'group_type' => 'standard',
    'type_name' => 'contributor',
    'group_name' => 'group_contributor_supplemental',
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
      '0' => 'field_contributor_headshot',
      '1' => 'field_contributor_contributor',
      '2' => 'field_contributor_deck',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Promotion');
  t('Contributor, Header, Deck & Sidebar');
  t('Media & Related Content');

  return $groups;
}

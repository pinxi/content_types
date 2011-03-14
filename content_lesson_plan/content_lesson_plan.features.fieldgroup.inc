<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function content_lesson_plan_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_lesson_plan_associated
  $groups['lesson_plan-group_lesson_plan_associated'] = array(
    'group_type' => 'standard',
    'type_name' => 'lesson_plan',
    'group_name' => 'group_lesson_plan_associated',
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
      '0' => 'field_lesson_plan_associated_con',
      '1' => 'field_lesson_plan_associated_med',
    ),
  );

  // Exported group: group_lesson_plan_promo
  $groups['lesson_plan-group_lesson_plan_promo'] = array(
    'group_type' => 'standard',
    'type_name' => 'lesson_plan',
    'group_name' => 'group_lesson_plan_promo',
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
      '0' => 'field_lesson_plan_promo_dates',
      '1' => 'field_lesson_plan_promo_title',
      '2' => 'field_lesson_plan_promo_descript',
      '3' => 'field_lesson_plan_promo_image',
      '4' => 'field_lesson_plan_promo_priority',
      '5' => 'field_lesson_plan_promo_suppress',
      '6' => 'field_lesson_plan_theme',
    ),
  );

  // Exported group: group_lesson_plan_supplemental
  $groups['lesson_plan-group_lesson_plan_supplemental'] = array(
    'group_type' => 'standard',
    'type_name' => 'lesson_plan',
    'group_name' => 'group_lesson_plan_supplemental',
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
      '0' => 'field_lesson_plan_header_image',
      '1' => 'field_lesson_plan_contributor',
      '2' => 'field_lesson_plan_deck',
      '3' => 'field_lesson_plan_sidebar',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Promotion');
  t('Contributor, Header, Deck & Sidebar');
  t('Media & Related Content');

  return $groups;
}

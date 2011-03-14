<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function content_work_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_content_promo
  $groups['work-group_content_promo'] = array(
    'group_type' => 'standard',
    'type_name' => 'work',
    'group_name' => 'group_content_promo',
    'label' => 'Content Promotion',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
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
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
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
    'weight' => '0',
    'fields' => array(),
  );

  // Exported group: group_work_associated
  $groups['work-group_work_associated'] = array(
    'group_type' => 'standard',
    'type_name' => 'work',
    'group_name' => 'group_work_associated',
    'label' => 'Media & Related Content',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
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
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
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
    'weight' => '-1',
    'fields' => array(),
  );

  // Exported group: group_work_supplemental
  $groups['work-group_work_supplemental'] = array(
    'group_type' => 'standard',
    'type_name' => 'work',
    'group_name' => 'group_work_supplemental',
    'label' => 'Contributor, Header, Deck & Sidebar',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsed',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
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
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
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
    'fields' => array(),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Promotion');
  t('Contributor, Header, Deck & Sidebar');
  t('Media & Related Content');

  return $groups;
}

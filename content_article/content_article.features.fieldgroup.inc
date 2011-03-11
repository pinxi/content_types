<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function content_article_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_article_associated
  $groups['article-group_article_associated'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_article_associated',
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
    'fields' => array(
      '0' => 'field_article_associated_content',
      '1' => 'field_article_associated_media',
    ),
  );

  // Exported group: group_article_supplemental
  $groups['article-group_article_supplemental'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
    'group_name' => 'group_article_supplemental',
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
    'fields' => array(
      '0' => 'field_article_header_image',
      '1' => 'field_content_contributor',
      '2' => 'field_article_deck',
      '3' => 'field_article_sidebar',
    ),
  );

  // Exported group: group_content_promo
  $groups['article-group_content_promo'] = array(
    'group_type' => 'standard',
    'type_name' => 'article',
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
    'fields' => array(
      '0' => 'field_content_promo_dates',
      '1' => 'field_content_promo_title',
      '2' => 'field_content_promo_description',
      '3' => 'field_content_promo_image',
      '4' => 'field_content_promo_priority',
      '5' => 'field_content_promo_suppress',
      '6' => 'field_content_theme',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Content Promotion');
  t('Contributor, Header, Deck & Sidebar');
  t('Media & Related Content');

  return $groups;
}

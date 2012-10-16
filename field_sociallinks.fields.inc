<?php
/**
 * @file
 * field_sociallinks.features.field.inc
 */

/**
 * Default fields for social links bean.
 */
function field_sociallinks_get_default_fields() {
  $fields = array();

  $fields['bean-sociallinks-field_sociallinks_sociallinks'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '-1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_sociallinks_sociallinks',
      'foreign keys' => array(),
      'indexes' => array(),
      'module' => 'field_sociallinks',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'sociallinks',
    ),
    'field_instance' => array(
      'bundle' => 'sociallinks',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'field_sociallinks',
          'settings' => array(),
          'type' => 'sociallinks_sociallinks_formatter',
          'weight' => '0',
        ),
      ),
      'entity_type' => 'bean',
      'field_name' => 'field_sociallinks_sociallinks',
      'label' => 'Social Links',
      'required' => 0,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'field_sociallinks',
        'settings' => array(),
        'type' => 'sociallinks_sociallinks_widget',
        'weight' => '1',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Social Links');

  return $fields;
}

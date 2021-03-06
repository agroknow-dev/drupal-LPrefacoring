<?php
/**
 * @file
 * ft_land_portal_p1.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ft_land_portal_p1_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_alt_title|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_alt_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_title_info';
  $field_group->data = array(
    'label' => 'Alternative Title',
    'weight' => '3',
    'children' => array(
      0 => 'field_alt_title_lang',
      1 => 'field_doc_alt_title',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => 'group-doc-alt-title field-group-field_group_multiple_container',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_alt_title|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_citation|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_citation';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Citation',
    'weight' => '9',
    'children' => array(
      0 => 'field_doc_citation_identifier',
      1 => 'field_doc_citation_number',
      2 => 'field_doc_citation_chronology',
      3 => 'group_doc_citatio',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Citation',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-citation field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_citation|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_citatio|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_citatio';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_citation';
  $field_group->data = array(
    'label' => 'Citation Title',
    'weight' => '12',
    'children' => array(
      0 => 'field_doc_citation',
      1 => 'field_doc_citation_title_lang',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => 'group-doc-citatio field-group-field_group_multiple_container',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_citatio|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_copyrights|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_copyrights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_rights';
  $field_group->data = array(
    'label' => 'Copyrights Statement',
    'weight' => '5',
    'children' => array(
      0 => 'field_copyrights_statement_lang',
      1 => 'field_doc_copyrights_statement',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => 'group-doc-copyrights field-group-field_group_multiple_container',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_copyrights|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_coverage|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_coverage';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Spatial Coverage',
    'weight' => '5',
    'children' => array(
      0 => 'field_doc_country',
      1 => 'field_doc_geographic_region',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Spatial Coverage',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-coverage field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_coverage|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_creator|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_creator';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_responsible_body';
  $field_group->data = array(
    'label' => 'Creator',
    'weight' => '55',
    'children' => array(
      0 => 'field_doc_creator',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Creator',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-creator field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_creator|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_desc_info|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_desc_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Description Information',
    'weight' => '2',
    'children' => array(
      0 => 'field_doc_type',
      1 => 'group_doc_description',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Description Information',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-desc-info field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_desc_info|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_description|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_description';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_desc_info';
  $field_group->data = array(
    'label' => 'Description',
    'weight' => '3',
    'children' => array(
      0 => 'field_doc_description',
      1 => 'field_doc_desc_lang',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => 'group-doc-description field-group-field_group_multiple_container',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_description|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_keywords|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_keywords';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_subject';
  $field_group->data = array(
    'label' => 'Keyword',
    'weight' => '57',
    'children' => array(
      0 => 'field_doc_keyword_language',
      1 => 'field_doc_keyword',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => 'group-doc-keywords field-group-field_group_multiple_container',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_keywords|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_location|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_location';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Location',
    'weight' => '6',
    'children' => array(
      0 => 'field_doc_is_shown_by',
      1 => 'field_doc_is_shown_at',
      2 => 'locations',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Location',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-location field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_location|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_physical_chars|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_physical_chars';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Physical Characteristics',
    'weight' => '3',
    'children' => array(
      0 => 'field_doc_datepub',
      1 => 'field_doc_edition',
      2 => 'field_doc_pagination',
      3 => 'field_doc_identifier',
      4 => 'field_format',
      5 => 'field_date_of_submission',
      6 => 'field_doc_creation_date',
      7 => 'field_doc_language',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Physical Characteristics',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-physical-chars field-group-fieldset undo-collapse',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_physical_chars|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_publisher|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_publisher';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_responsible_body';
  $field_group->data = array(
    'label' => 'Publisher',
    'weight' => '56',
    'children' => array(
      0 => 'field_doc_publisher_place',
      1 => 'field_doc_publisher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Publisher',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-publisher field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_publisher|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_relations|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_relations';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Relations',
    'weight' => '8',
    'children' => array(
      0 => 'field_doc_relation',
      1 => 'field_doc_is_part_of',
      2 => 'field_doc_has_part',
      3 => 'field_doc_has_version',
      4 => 'field_doc_is_version_of',
      5 => 'field_doc_has_translation',
      6 => 'field_doc_is_translation_of',
      7 => 'field_doc_references',
      8 => 'field_doc_is_referenced_by',
      9 => 'field_doc_replaces',
      10 => 'field_doc_is_replaced_by',
      11 => 'field_doc_is_required_by',
      12 => 'field_doc_requires',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Relations',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-relations field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_relations|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_responsible_body|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_responsible_body';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Responsible body',
    'weight' => '10',
    'children' => array(
      0 => 'field_doc_contributor',
      1 => 'field_doc_conference',
      2 => 'field_doc_provider',
      3 => 'field_doc_data_provider',
      4 => 'group_doc_creator',
      5 => 'group_doc_publisher',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Responsible body',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-responsible-body field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_responsible_body|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_rights|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_rights';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Rights',
    'weight' => '4',
    'children' => array(
      0 => 'field_doc_terms_of_use',
      1 => 'field_doc_licencing',
      2 => 'group_doc_copyrights',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Rights',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-rights field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_rights|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_subject|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_subject';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Subject',
    'weight' => '7',
    'children' => array(
      0 => 'field_doc_subject',
      1 => 'group_doc_keywords',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Subject',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-doc-subject field-group-fieldset',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $export['group_doc_subject|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_title_info|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_title_info';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Title Information',
    'weight' => '1',
    'children' => array(
      0 => 'group_doc_title',
      1 => 'group_doc_alt_title',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-doc-title-info field-group-fieldset',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_title_info|node|landlibrary_resource|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_doc_title|node|landlibrary_resource|form';
  $field_group->group_name = 'group_doc_title';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'landlibrary_resource';
  $field_group->mode = 'form';
  $field_group->parent_name = 'group_doc_title_info';
  $field_group->data = array(
    'label' => 'Title',
    'weight' => '2',
    'children' => array(
      0 => 'field_doc_title',
      1 => 'field_title_title_lang',
    ),
    'format_type' => 'field_group_multiple_container',
    'format_settings' => array(
      'formatter' => 'open',
      'instance_settings' => array(
        'description' => '',
        'show_label' => 1,
        'label_element' => 'h3',
        'effect' => 'none',
        'speed' => 'fast',
        'parent_format_type' => 'div',
        'classes' => 'group-doc-title field-group-field_group_multiple_container',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_doc_title|node|landlibrary_resource|form'] = $field_group;

  return $export;
}

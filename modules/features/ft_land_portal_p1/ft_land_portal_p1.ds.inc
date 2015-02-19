<?php
/**
 * @file
 * ft_land_portal_p1.ds.inc
 */

/**
 * Implements hook_ds_layout_settings_info().
 */
function ft_land_portal_p1_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|landlibrary_resource|default';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'landlibrary_resource';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'ds_2col_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_doc_description',
        1 => 'field_doc_keyword',
        2 => 'field_date_of_submission',
        3 => 'field_doc_creation_date',
        4 => 'field_doc_licencing',
        5 => 'field_doc_country',
        6 => 'field_doc_is_shown_by',
        7 => 'field_doc_is_shown_at',
        8 => 'field_doc_citation',
        9 => 'field_doc_citation_identifier',
        10 => 'field_doc_citation_number',
        11 => 'field_doc_citation_chronology',
        12 => 'field_doc_alt_title',
        13 => 'field_doc_is_part_of',
        14 => 'field_doc_has_part',
        15 => 'field_doc_has_version',
        16 => 'field_doc_is_version_of',
        17 => 'field_doc_has_translation',
        18 => 'field_doc_is_translation_of',
        19 => 'field_doc_references',
        20 => 'field_doc_is_referenced_by',
        21 => 'field_doc_replaces',
        22 => 'field_doc_is_replaced_by',
        23 => 'field_doc_requires',
        24 => 'field_doc_is_required_by',
        25 => 'field_doc_conference',
        26 => 'field_doc_contributor',
        27 => 'field_doc_subject',
        28 => 'field_doc_relation',
        29 => 'field_doc_copyrights_statement',
      ),
      'right' => array(
        30 => 'field_doc_publisher',
        31 => 'field_doc_publisher_place',
        32 => 'field_doc_creator',
        33 => 'field_doc_type',
        34 => 'field_doc_pagination',
        35 => 'field_format',
        36 => 'field_doc_geographic_region',
        37 => 'field_doc_edition',
        38 => 'field_doc_datepub',
        39 => 'field_doc_identifier',
        40 => 'field_doc_terms_of_use',
      ),
    ),
    'fields' => array(
      'field_doc_description' => 'left',
      'field_doc_keyword' => 'left',
      'field_date_of_submission' => 'left',
      'field_doc_creation_date' => 'left',
      'field_doc_licencing' => 'left',
      'field_doc_country' => 'left',
      'field_doc_is_shown_by' => 'left',
      'field_doc_is_shown_at' => 'left',
      'field_doc_citation' => 'left',
      'field_doc_citation_identifier' => 'left',
      'field_doc_citation_number' => 'left',
      'field_doc_citation_chronology' => 'left',
      'field_doc_alt_title' => 'left',
      'field_doc_is_part_of' => 'left',
      'field_doc_has_part' => 'left',
      'field_doc_has_version' => 'left',
      'field_doc_is_version_of' => 'left',
      'field_doc_has_translation' => 'left',
      'field_doc_is_translation_of' => 'left',
      'field_doc_references' => 'left',
      'field_doc_is_referenced_by' => 'left',
      'field_doc_replaces' => 'left',
      'field_doc_is_replaced_by' => 'left',
      'field_doc_requires' => 'left',
      'field_doc_is_required_by' => 'left',
      'field_doc_conference' => 'left',
      'field_doc_contributor' => 'left',
      'field_doc_subject' => 'left',
      'field_doc_relation' => 'left',
      'field_doc_copyrights_statement' => 'left',
      'field_doc_publisher' => 'right',
      'field_doc_publisher_place' => 'right',
      'field_doc_creator' => 'right',
      'field_doc_type' => 'right',
      'field_doc_pagination' => 'right',
      'field_format' => 'right',
      'field_doc_geographic_region' => 'right',
      'field_doc_edition' => 'right',
      'field_doc_datepub' => 'right',
      'field_doc_identifier' => 'right',
      'field_doc_terms_of_use' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|landlibrary_resource|default'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ft_land_portal_p1_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'resource';
  $ds_view_mode->label = 'Resource View';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['resource'] = $ds_view_mode;

  return $export;
}

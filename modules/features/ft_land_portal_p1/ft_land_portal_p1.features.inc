<?php
/**
 * @file
 * ft_land_portal_p1.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ft_land_portal_p1_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "ds" && $api == "ds") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function ft_land_portal_p1_node_info() {
  $items = array(
    'agris_clone2' => array(
      'name' => t('agris creator preimporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_conference_' => array(
      'name' => t('agris conference'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_file_upload_feed' => array(
      'name' => t('Agris file upload feed'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_publisher_file' => array(
      'name' => t('Agris Publisher file'),
      'base' => 'node_content',
      'description' => t('Agris Publisher file preimporter in order to be ingested later all agris content resource'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'agris_publisher_file_feeds' => array(
      'name' => t('Agris Publisher file feeds'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'article' => array(
      'name' => t('Article'),
      'base' => 'node_content',
      'description' => t('Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'general_feed' => array(
      'name' => t('general feed'),
      'base' => 'node_content',
      'description' => t('This content type support the fetching feed content in order to be processed and mapped to fields of a preferd-target content type.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_batch_file' => array(
      'name' => t('ifpri batch file'),
      'base' => 'node_content',
      'description' => t('A fetcher for IFPRI importer'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_file_upload' => array(
      'name' => t('ifpri file upload'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'ifpri_ingestion' => array(
      'name' => t('Ifpri ingestion'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'landlibrary_resource' => array(
      'name' => t('LandLibrary Resource'),
      'base' => 'node_content',
      'description' => t('The main LandLibrary resource which can be a country report, a peer-reviewed publication, a policy document, an analytical study, a map, a high quality blog post, a video or other multimedia content.'),
      'has_title' => '1',
      'title_label' => t('Node Title'),
      'help' => '',
    ),
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'person' => array(
      'name' => t('Person'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'subject_browse' => array(
      'name' => t('Subject Browse'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

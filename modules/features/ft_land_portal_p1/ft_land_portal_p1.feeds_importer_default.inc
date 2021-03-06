<?php
/**
 * @file
 * ft_land_portal_p1.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function ft_land_portal_p1_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris';
  $feeds_importer->config = array(
    'name' => 'Agris',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:title[1]/text()',
          'xpathparser:1' => 'dc:title[1]/text()',
          'xpathparser:2' => 'dc:subject/text()',
          'xpathparser:3' => 'dc:description/text()',
          'xpathparser:4' => 'dc:language/text()',
          'xpathparser:5' => '',
          'xpathparser:6' => '',
          'xpathparser:7' => '',
          'xpathparser:8' => '',
          'xpathparser:9' => 'dc:publisher/ags:publisherName/text()',
          'xpathparser:10' => '',
          'xpathparser:11' => 'dcterms:extent/text()',
          'xpathparser:12' => '',
          'xpathparser:13' => '',
          'xpathparser:14' => 'dc:subject/ags:subjectThesaurus/text()',
          'xpathparser:15' => 'dc:date/dcterms:dateIssued/text()',
          'xpathparser:16' => 'dc:publisher[1]/ags:publisherPlace/text()',
          'xpathparser:17' => '',
          'xpathparser:18' => 'dc:creator/text()',
          'xpathparser:19' => '',
          'xpathparser:20' => 'dc:title[1]/@xml:lang/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 'xpathparser:1',
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:3' => 'xpathparser:3',
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:9' => 'xpathparser:9',
          'xpathparser:11' => 'xpathparser:11',
          'xpathparser:14' => 'xpathparser:14',
          'xpathparser:15' => 'xpathparser:15',
          'xpathparser:16' => 'xpathparser:16',
          'xpathparser:18' => 'xpathparser:18',
          'xpathparser:20' => 'xpathparser:20',
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:10' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:17' => 0,
          'xpathparser:19' => 0,
        ),
        'context' => '/ags:resources/ags:resource',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:9' => 'xpathparser:9',
            'xpathparser:11' => 'xpathparser:11',
            'xpathparser:13' => 'xpathparser:13',
            'xpathparser:14' => 'xpathparser:14',
            'xpathparser:15' => 'xpathparser:15',
            'xpathparser:16' => 'xpathparser:16',
            'xpathparser:18' => 'xpathparser:18',
            'xpathparser:20' => 'xpathparser:20',
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:10' => 0,
            'xpathparser:12' => 0,
            'xpathparser:17' => 0,
            'xpathparser:19' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '1',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_keyword',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_datepub:end',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_country',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_publisher:title',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_format',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_country',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_keyword_language',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_datepub:start',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_doc_publisher_place',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'language',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'language',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '1',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
      ),
    ),
    'content_type' => 'agris_file_upload_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['agris'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris_conference_preimporter';
  $feeds_importer->config = array(
    'name' => 'agris conference  preimporter',
    'description' => 'agris conference preimporter',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:creator/ags:creatorConference/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
        ),
        'context' => '/ags:resources/ags:resource',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'event',
      ),
    ),
    'content_type' => 'agris_conference_',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['agris_conference_preimporter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris_filter';
  $feeds_importer->config = array(
    'name' => 'agris filter',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:title[1]/text()',
          'xpathparser:1' => 'dc:title[1]/text()',
          'xpathparser:2' => 'dc:subject/text()',
          'xpathparser:3' => 'concat(/ags:resources/ags:resource/dc:description/dcterms:abstract/text()  , /ags:resources/ags:resource/dc:description/ags:descriptionNotes/text())',
          'xpathparser:4' => 'dc:language/text()',
          'xpathparser:5' => 'dc:format/dcterms:extent/text()',
          'xpathparser:6' => 'dc:subject/ags:subjectThesaurus/text()',
          'xpathparser:7' => '',
          'xpathparser:8' => 'dc:publisher/ags:publisherPlace/text()',
          'xpathparser:9' => 'dc:creator/ags:creatorPersonal/text()',
          'xpathparser:10' => 'dc:publisher/ags:publisherName/text()',
          'xpathparser:11' => 'dc:creator/ags:creatorConference/text()',
          'xpathparser:12' => '',
          'xpathparser:13' => 'dc:language/text()',
          'xpathparser:14' => 'dc:date/dcterms:dateIssued/text()',
          'xpathparser:15' => 'dc:date/dcterms:dateIssued/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 'xpathparser:1',
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:3' => 'xpathparser:3',
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:5' => 'xpathparser:5',
          'xpathparser:6' => 'xpathparser:6',
          'xpathparser:7' => 'xpathparser:7',
          'xpathparser:8' => 'xpathparser:8',
          'xpathparser:9' => 'xpathparser:9',
          'xpathparser:10' => 'xpathparser:10',
          'xpathparser:11' => 'xpathparser:11',
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
        ),
        'context' => '/ags:resources/ags:resource',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
            'xpathparser:8' => 'xpathparser:8',
            'xpathparser:9' => 'xpathparser:9',
            'xpathparser:10' => 'xpathparser:10',
            'xpathparser:11' => 'xpathparser:11',
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '251',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_keyword',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_subject',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_datepub:start',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_publisher_place',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_doc_creator:label',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_doc_conference:event:entityreference_feeds:title',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'parent:taxonomy:languages',
            'target' => 'field_doc_language',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          13 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_language',
            'term_search' => '0',
            'autocreate' => 0,
          ),
          15 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'agris_file_upload_feed',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['agris_filter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'agris_organization_preimporter';
  $feeds_importer->config = array(
    'name' => 'agris organization preimporter',
    'description' => 'Agris Publisher file preimporter in order to be ingested later all agris content resource',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:2' => 'dc:publisher/ags:publisherName/text()',
          'xpathparser:0' => 'dc:publisher/ags:publisherName/text()',
          'xpathparser:1' => 'dc:publisher/ags:publisherName/text()',
        ),
        'rawXML' => array(
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 'xpathparser:1',
        ),
        'context' => '/ags:resources/ags:resource',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:2',
            'target' => 'guid',
            'unique' => 0,
          ),
          1 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_org_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 1,
          ),
        ),
        'update_existing' => '2',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'organization',
      ),
    ),
    'content_type' => 'agris_publisher_file_feeds',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['agris_organization_preimporter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ifpri_batch_file_importer';
  $feeds_importer->config = array(
    'name' => 'ifpri batch file importer',
    'description' => 'Import IFPRI\'s xml files from directory',
    'fetcher' => array(
      'plugin_key' => 'feeds_fetcher_directory_fetcher',
      'config' => array(
        'recursive' => TRUE,
        'filemask' => '/\\.xml$/',
        'updated_files' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:title[1]/text()',
          'xpathparser:1' => 'dc:title[1]/text()',
          'xpathparser:2' => 'dc:description[2]/text()',
          'xpathparser:3' => 'dc:format/text()',
          'xpathparser:4' => 'dc:publisher[2]/text()',
          'xpathparser:5' => 'dc:subject[2]/text()',
          'xpathparser:6' => 'dc:description[1]/text()',
          'xpathparser:7' => 'dc:language/text()',
          'xpathparser:8' => 'dc:identifier[1]/text()',
          'xpathparser:9' => '',
          'xpathparser:10' => 'dc:date[1]/text()',
          'xpathparser:11' => 'dc:identifier[2]/text()',
          'xpathparser:12' => 'dc:publisher[1]/text()',
          'xpathparser:13' => 'dc:identifier[4]/text()',
          'xpathparser:14' => 'dc:identifier[2]/text()',
          'xpathparser:15' => '',
          'xpathparser:16' => '',
          'xpathparser:17' => 'dc:date[1]/text()',
          'xpathparser:18' => 'dc:date[1]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:4' => 0,
          'xpathparser:5' => 0,
          'xpathparser:6' => 0,
          'xpathparser:7' => 0,
          'xpathparser:8' => 0,
          'xpathparser:9' => 0,
          'xpathparser:10' => 0,
          'xpathparser:11' => 0,
          'xpathparser:12' => 0,
          'xpathparser:13' => 0,
          'xpathparser:14' => 0,
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
        ),
        'context' => '/oai_dc:dc',
        'exp' => array(
          'errors' => 0,
          'debug' => array(
            'context' => 0,
            'xpathparser:0' => 0,
            'xpathparser:1' => 0,
            'xpathparser:2' => 0,
            'xpathparser:3' => 0,
            'xpathparser:4' => 0,
            'xpathparser:5' => 0,
            'xpathparser:6' => 0,
            'xpathparser:7' => 0,
            'xpathparser:8' => 0,
            'xpathparser:9' => 0,
            'xpathparser:10' => 0,
            'xpathparser:11' => 0,
            'xpathparser:12' => 0,
            'xpathparser:13' => 0,
            'xpathparser:14' => 0,
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => '0',
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_publisher_place',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_keyword',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_language',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'field_date_of_submission:end',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_doc_replaces:title',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_doc_datepub:end',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'landlibrary_resource',
      ),
    ),
    'content_type' => 'ifpri_batch_file',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['ifpri_batch_file_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ifpri_creator_preimporter';
  $feeds_importer->config = array(
    'name' => 'IFPRI creator preimporter',
    'description' => 'IFPRI creator preimporter',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
        'auto_scheme' => 'http',
        'accept_invalid_cert' => FALSE,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(),
        'rawXML' => array(),
        'context' => '',
        'exp' => array(
          'errors' => FALSE,
          'tidy' => FALSE,
          'debug' => array(),
          'tidy_encoding' => 'UTF8',
        ),
        'allow_override' => TRUE,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'field_person_full_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'update_non_existent' => 'skip',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'person',
      ),
    ),
    'content_type' => 'person',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['ifpri_creator_preimporter'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ifpri_ingestion';
  $feeds_importer->config = array(
    'name' => 'Ifpri ingestion',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml html htm',
        'direct' => 0,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          'public' => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsXPathParserXML',
      'config' => array(
        'sources' => array(
          'xpathparser:0' => 'dc:title[1]/text()',
          'xpathparser:1' => 'dc:title[1]/text()',
          'xpathparser:2' => 'dc:description[2]/text()',
          'xpathparser:3' => 'dc:format/text()',
          'xpathparser:4' => 'dc:publisher[2]/text()',
          'xpathparser:5' => 'dc:identifier[2]/text()',
          'xpathparser:6' => 'dc:subject[2]/text()',
          'xpathparser:7' => 'dc:rights/text()',
          'xpathparser:8' => 'dc:description[1]/text()',
          'xpathparser:9' => 'dc:language/text()',
          'xpathparser:10' => 'dc:identifier[1]/text()',
          'xpathparser:11' => '',
          'xpathparser:12' => 'dc:date[2]',
          'xpathparser:13' => 'dc:identifier[2]/text()',
          'xpathparser:14' => '',
          'xpathparser:15' => '',
          'xpathparser:16' => 'dc:date[2]/text()',
          'xpathparser:17' => 'dc:identifier[2]/text()',
          'xpathparser:18' => '',
          'xpathparser:19' => '',
          'xpathparser:20' => '',
          'xpathparser:21' => '',
          'xpathparser:22' => 'dc:publisher[1]/text()',
          'xpathparser:23' => 'dc:date[1]/text()',
          'xpathparser:24' => '',
          'xpathparser:25' => 'dc:identifier[4]/text()',
          'xpathparser:26' => '',
          'xpathparser:27' => 'dc:date[1]/text()',
          'xpathparser:28' => 'dc:date[1]/text()',
        ),
        'rawXML' => array(
          'xpathparser:0' => 'xpathparser:0',
          'xpathparser:1' => 'xpathparser:1',
          'xpathparser:2' => 'xpathparser:2',
          'xpathparser:3' => 'xpathparser:3',
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:5' => 'xpathparser:5',
          'xpathparser:6' => 'xpathparser:6',
          'xpathparser:7' => 'xpathparser:7',
          'xpathparser:8' => 'xpathparser:8',
          'xpathparser:9' => 'xpathparser:9',
          'xpathparser:10' => 'xpathparser:10',
          'xpathparser:11' => 'xpathparser:11',
          'xpathparser:12' => 'xpathparser:12',
          'xpathparser:13' => 'xpathparser:13',
          'xpathparser:14' => 'xpathparser:14',
          'xpathparser:21' => 'xpathparser:21',
          'xpathparser:15' => 0,
          'xpathparser:16' => 0,
          'xpathparser:17' => 0,
          'xpathparser:18' => 0,
          'xpathparser:19' => 0,
          'xpathparser:20' => 0,
          'xpathparser:22' => 0,
          'xpathparser:23' => 0,
          'xpathparser:24' => 0,
          'xpathparser:25' => 0,
          'xpathparser:26' => 0,
          'xpathparser:27' => 0,
          'xpathparser:28' => 0,
        ),
        'context' => '/oai_dc:dc',
        'exp' => array(
          'errors' => 1,
          'debug' => array(
            'context' => 'context',
            'xpathparser:0' => 'xpathparser:0',
            'xpathparser:1' => 'xpathparser:1',
            'xpathparser:2' => 'xpathparser:2',
            'xpathparser:3' => 'xpathparser:3',
            'xpathparser:4' => 'xpathparser:4',
            'xpathparser:5' => 'xpathparser:5',
            'xpathparser:6' => 'xpathparser:6',
            'xpathparser:7' => 'xpathparser:7',
            'xpathparser:8' => 'xpathparser:8',
            'xpathparser:9' => 'xpathparser:9',
            'xpathparser:10' => 'xpathparser:10',
            'xpathparser:11' => 'xpathparser:11',
            'xpathparser:12' => 'xpathparser:12',
            'xpathparser:13' => 'xpathparser:13',
            'xpathparser:14' => 'xpathparser:14',
            'xpathparser:15' => 0,
            'xpathparser:16' => 0,
            'xpathparser:17' => 0,
            'xpathparser:18' => 0,
            'xpathparser:19' => 0,
            'xpathparser:20' => 0,
            'xpathparser:21' => 0,
            'xpathparser:22' => 0,
            'xpathparser:23' => 0,
            'xpathparser:24' => 0,
            'xpathparser:25' => 0,
            'xpathparser:26' => 0,
            'xpathparser:27' => 0,
            'xpathparser:28' => 0,
          ),
        ),
        'allow_override' => 1,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 0,
        'mappings' => array(
          0 => array(
            'source' => 'xpathparser:0',
            'target' => 'field_doc_title',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'xpathparser:1',
            'target' => 'title',
            'unique' => 1,
          ),
          2 => array(
            'source' => 'xpathparser:2',
            'target' => 'field_doc_type',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'xpathparser:3',
            'target' => 'field_doc_pagination',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'xpathparser:4',
            'target' => 'field_doc_publisher_place',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'xpathparser:5',
            'target' => 'field_doc_relation:etid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'xpathparser:6',
            'target' => 'field_doc_keyword',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          7 => array(
            'source' => 'xpathparser:7',
            'target' => 'field_doc_copyrights',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'xpathparser:8',
            'target' => 'field_doc_description',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'xpathparser:9',
            'target' => 'language',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'xpathparser:10',
            'target' => 'field_doc_identifier',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'xpathparser:11',
            'target' => 'field_doc_datepub:end',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'xpathparser:12',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'xpathparser:13',
            'target' => 'field_doc_relation:title',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'xpathparser:14',
            'target' => 'field_doc_keyword',
            'term_search' => '0',
            'autocreate' => 1,
          ),
          15 => array(
            'source' => 'xpathparser:15',
            'target' => 'field_doc_keyword_language',
            'unique' => FALSE,
          ),
          16 => array(
            'source' => 'xpathparser:16',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
          17 => array(
            'source' => 'xpathparser:17',
            'target' => 'field_doc_is_shown_at:url',
            'unique' => FALSE,
          ),
          18 => array(
            'source' => 'xpathparser:18',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          19 => array(
            'source' => 'xpathparser:19',
            'target' => 'field_doc_is_shown_by:title',
            'unique' => FALSE,
          ),
          20 => array(
            'source' => 'xpathparser:20',
            'target' => 'field_doc_publisher:title',
            'unique' => FALSE,
          ),
          21 => array(
            'source' => 'xpathparser:21',
            'target' => 'field_test1:label',
            'unique' => FALSE,
          ),
          22 => array(
            'source' => 'xpathparser:22',
            'target' => 'field_doc_publisher:label',
            'unique' => FALSE,
          ),
          23 => array(
            'source' => 'xpathparser:23',
            'target' => 'field_doc_datepub:start',
            'unique' => FALSE,
          ),
          24 => array(
            'source' => 'xpathparser:24',
            'target' => 'field_doc_is_shown_at:title',
            'unique' => FALSE,
          ),
          25 => array(
            'source' => 'xpathparser:25',
            'target' => 'field_doc_is_shown_by:url',
            'unique' => FALSE,
          ),
          26 => array(
            'source' => 'xpathparser:26',
            'target' => 'field_doc_provider:label',
            'unique' => FALSE,
          ),
          27 => array(
            'source' => 'xpathparser:27',
            'target' => 'field_doc_creation_date:end',
            'unique' => FALSE,
          ),
          28 => array(
            'source' => 'xpathparser:28',
            'target' => 'field_doc_creation_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '2',
        'input_format' => 'plain_text',
        'skip_hash_check' => 1,
        'bundle' => 'landlibrary_resource',
        'update_non_existent' => 'skip',
      ),
    ),
    'content_type' => 'ifpri_file_upload',
    'update' => 0,
    'import_period' => '0',
    'expire_period' => 3600,
    'import_on_create' => 0,
    'process_in_background' => 0,
  );
  $export['ifpri_ingestion'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'ifpri_upload_files';
  $feeds_importer->config = array(
    'name' => 'ifpri upload files',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsHTTPFetcher',
      'config' => array(
        'auto_detect_feeds' => FALSE,
        'use_pubsubhubbub' => FALSE,
        'designated_hub' => '',
        'request_timeout' => NULL,
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsSyndicationParser',
      'config' => array(),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => -1,
        'author' => 0,
        'authorize' => TRUE,
        'mappings' => array(),
        'update_existing' => 0,
        'input_format' => NULL,
        'skip_hash_check' => FALSE,
        'bundle' => NULL,
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => 1800,
    'expire_period' => 3600,
    'import_on_create' => TRUE,
    'process_in_background' => FALSE,
  );
  $export['ifpri_upload_files'] = $feeds_importer;

  return $export;
}

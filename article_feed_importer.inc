$feeds_importer = new stdClass();
$feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
$feeds_importer->api_version = 1;
$feeds_importer->id = 'article_importer';
$feeds_importer->config = array(
  'name' => 'Article Importer',
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
    'plugin_key' => 'FeedsXPathParserXML',
    'config' => array(
      'sources' => array(
        'xpathparser:0' => 'Nid',
        'xpathparser:1' => 'title',
        'xpathparser:2' => 'description',
        'xpathparser:3' => 'category',
        'xpathparser:4' => 'image/img/@src',
        'xpathparser:5' => 'postdate',
        'xpathparser:6' => 'image/img',
      ),
      'rawXML' => array(
        'xpathparser:0' => 0,
        'xpathparser:1' => 0,
        'xpathparser:2' => 0,
        'xpathparser:3' => 0,
        'xpathparser:4' => 0,
        'xpathparser:5' => 0,
        'xpathparser:6' => 0,
      ),
      'context' => '/nodes/node',
      'exp' => array(
        'errors' => 0,
        'debug' => array(
          'xpathparser:4' => 'xpathparser:4',
          'xpathparser:6' => 'xpathparser:6',
          'context' => 0,
          'xpathparser:0' => 0,
          'xpathparser:1' => 0,
          'xpathparser:2' => 0,
          'xpathparser:3' => 0,
          'xpathparser:5' => 0,
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
          'target' => 'guid',
          'unique' => 1,
        ),
        1 => array(
          'source' => 'xpathparser:1',
          'target' => 'title',
          'unique' => FALSE,
        ),
        2 => array(
          'source' => 'xpathparser:2',
          'target' => 'body',
          'unique' => FALSE,
        ),
        3 => array(
          'source' => 'xpathparser:3',
          'target' => 'field_category',
          'term_search' => '0',
          'autocreate' => 1,
        ),
        4 => array(
          'source' => 'xpathparser:4',
          'target' => 'field_image',
          'unique' => FALSE,
        ),
        5 => array(
          'source' => 'xpathparser:5',
          'target' => 'created',
          'unique' => FALSE,
        ),
        6 => array(
          'source' => 'xpathparser:6',
          'target' => 'field_image:fig',
          'unique' => FALSE,
        ),
      ),
      'update_existing' => '2',
      'input_format' => 'plain_text',
      'skip_hash_check' => 0,
      'bundle' => 'article',
    ),
  ),
  'content_type' => '',
  'update' => 0,
  'import_period' => 1800,
  'expire_period' => 3600,
  'import_on_create' => TRUE,
  'process_in_background' => FALSE,
);

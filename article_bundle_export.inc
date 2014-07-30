$data = array(
  'bundles' => array(
    'article' => (object) array(
      'type' => 'article',
      'name' => 'Article',
      'base' => 'node_content',
      'module' => 'node',
      'description' => 'Use <em>articles</em> for time-sensitive content like news, press releases or blog posts.',
      'help' => '',
      'has_title' => '1',
      'title_label' => 'Title',
      'custom' => '1',
      'modified' => '1',
      'locked' => '0',
      'disabled' => '0',
      'orig_type' => 'article',
      'disabled_changed' => FALSE,
      'bc_entity_type' => 'node',
    ),
  ),
  'fields' => array(
    'body' => array(
      'entity_types' => array(
        0 => 'node',
      ),
      'translatable' => '0',
      'settings' => array(),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_body' => array(
                'value' => 'body_value',
                'summary' => 'body_summary',
                'format' => 'body_format',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'format' => array(
          'table' => 'filter_format',
          'columns' => array(
            'format' => 'format',
          ),
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'field_name' => 'body',
      'type' => 'text_with_summary',
      'module' => 'text',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'value' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'summary' => array(
          'type' => 'text',
          'size' => 'big',
          'not null' => FALSE,
        ),
        'format' => array(
          'type' => 'varchar',
          'length' => 255,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'page',
          1 => 'article',
        ),
      ),
    ),
    'field_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'category',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_category' => array(
                'tid' => 'field_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_category' => array(
                'tid' => 'field_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
        ),
      ),
    ),
    'field_image' => array(
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'settings' => array(
        'uri_scheme' => 'public',
        'default_image' => FALSE,
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_image' => array(
                'fid' => 'field_image_fid',
                'alt' => 'field_image_alt',
                'title' => 'field_image_title',
                'width' => 'field_image_width',
                'height' => 'field_image_height',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_image' => array(
                'fid' => 'field_image_fid',
                'alt' => 'field_image_alt',
                'title' => 'field_image_title',
                'width' => 'field_image_width',
                'height' => 'field_image_height',
              ),
            ),
          ),
        ),
      ),
      'entity_types' => array(),
      'translatable' => '0',
      'foreign keys' => array(
        'fid' => array(
          'table' => 'file_managed',
          'columns' => array(
            'fid' => 'fid',
          ),
        ),
      ),
      'field_name' => 'field_image',
      'type' => 'image',
      'module' => 'image',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'fid' => array(
          'description' => 'The {file_managed}.fid being referenced in this field.',
          'type' => 'int',
          'not null' => FALSE,
          'unsigned' => TRUE,
        ),
        'alt' => array(
          'description' => 'Alternative image text, for the image\'s \'alt\' attribute.',
          'type' => 'varchar',
          'length' => 512,
          'not null' => FALSE,
        ),
        'title' => array(
          'description' => 'Image title text, for the image\'s \'title\' attribute.',
          'type' => 'varchar',
          'length' => 1024,
          'not null' => FALSE,
        ),
        'width' => array(
          'description' => 'The width of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
        'height' => array(
          'description' => 'The height of the image in pixels.',
          'type' => 'int',
          'unsigned' => TRUE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
        ),
      ),
    ),
    'field_new_category' => array(
      'translatable' => '0',
      'entity_types' => array(),
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'category',
            'parent' => '0',
          ),
        ),
      ),
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_new_category' => array(
                'tid' => 'field_new_category_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_new_category' => array(
                'tid' => 'field_new_category_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_new_category',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
        ),
      ),
    ),
    'field_tags' => array(
      'settings' => array(
        'allowed_values' => array(
          0 => array(
            'vocabulary' => 'tags',
            'parent' => 0,
          ),
        ),
      ),
      'entity_types' => array(),
      'translatable' => '0',
      'storage' => array(
        'type' => 'field_sql_storage',
        'settings' => array(),
        'module' => 'field_sql_storage',
        'active' => '1',
        'details' => array(
          'sql' => array(
            'FIELD_LOAD_CURRENT' => array(
              'field_data_field_tags' => array(
                'tid' => 'field_tags_tid',
              ),
            ),
            'FIELD_LOAD_REVISION' => array(
              'field_revision_field_tags' => array(
                'tid' => 'field_tags_tid',
              ),
            ),
          ),
        ),
      ),
      'foreign keys' => array(
        'tid' => array(
          'table' => 'taxonomy_term_data',
          'columns' => array(
            'tid' => 'tid',
          ),
        ),
      ),
      'indexes' => array(
        'tid' => array(
          0 => 'tid',
        ),
      ),
      'field_name' => 'field_tags',
      'type' => 'taxonomy_term_reference',
      'module' => 'taxonomy',
      'active' => '1',
      'locked' => '0',
      'cardinality' => '-1',
      'deleted' => '0',
      'columns' => array(
        'tid' => array(
          'type' => 'int',
          'unsigned' => TRUE,
          'not null' => FALSE,
        ),
      ),
      'bundles' => array(
        'node' => array(
          0 => 'article',
        ),
      ),
    ),
  ),
  'instances' => array(
    'body' => array(
      0 => array(
        'label' => 'Body',
        'widget' => array(
          'type' => 'text_textarea_with_summary',
          'settings' => array(
            'rows' => 20,
            'summary_rows' => 5,
          ),
          'weight' => '-4',
          'module' => 'text',
        ),
        'settings' => array(
          'display_summary' => TRUE,
          'text_processing' => 1,
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'text_default',
            'settings' => array(),
            'module' => 'text',
            'weight' => 0,
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'text_summary_or_trimmed',
            'settings' => array(
              'trim_length' => 600,
            ),
            'module' => 'text',
            'weight' => 0,
          ),
        ),
        'required' => FALSE,
        'description' => '',
        'field_name' => 'body',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
        'default_value' => NULL,
      ),
    ),
    'field_category' => array(
      0 => array(
        'label' => 'category',
        'widget' => array(
          'weight' => '0',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'settings' => array(),
            'module' => 'taxonomy',
            'weight' => 11,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
    ),
    'field_image' => array(
      0 => array(
        'label' => 'Image',
        'description' => 'Upload an image to go with this article.',
        'required' => FALSE,
        'settings' => array(
          'file_directory' => 'field/image',
          'file_extensions' => 'png gif jpg jpeg',
          'max_filesize' => '',
          'max_resolution' => '',
          'min_resolution' => '',
          'alt_field' => TRUE,
          'title_field' => '',
          'default_image' => 0,
          'user_register_form' => FALSE,
        ),
        'widget' => array(
          'type' => 'image_image',
          'settings' => array(
            'progress_indicator' => 'throbber',
            'preview_image_style' => 'thumbnail',
          ),
          'weight' => '-1',
          'module' => 'image',
        ),
        'display' => array(
          'default' => array(
            'label' => 'hidden',
            'type' => 'image',
            'settings' => array(
              'image_style' => 'large',
              'image_link' => '',
            ),
            'weight' => -1,
            'module' => 'image',
          ),
          'teaser' => array(
            'label' => 'hidden',
            'type' => 'image',
            'settings' => array(
              'image_style' => 'medium',
              'image_link' => 'content',
            ),
            'weight' => -1,
            'module' => 'image',
          ),
        ),
        'field_name' => 'field_image',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
    ),
    'field_new_category' => array(
      0 => array(
        'label' => 'new category',
        'widget' => array(
          'weight' => '1',
          'type' => 'options_select',
          'module' => 'options',
          'active' => 1,
          'settings' => array(),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'display' => array(
          'default' => array(
            'label' => 'above',
            'type' => 'taxonomy_term_reference_link',
            'settings' => array(),
            'module' => 'taxonomy',
            'weight' => 12,
          ),
          'teaser' => array(
            'type' => 'hidden',
            'label' => 'above',
            'settings' => array(),
            'weight' => 0,
          ),
        ),
        'required' => 0,
        'description' => '',
        'default_value' => NULL,
        'field_name' => 'field_new_category',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
      ),
    ),
    'field_tags' => array(
      0 => array(
        'label' => 'Tags',
        'description' => 'Enter a comma-separated list of words to describe your content.',
        'widget' => array(
          'type' => 'taxonomy_autocomplete',
          'weight' => '-4',
          'settings' => array(
            'size' => 60,
            'autocomplete_path' => 'taxonomy/autocomplete',
          ),
          'module' => 'taxonomy',
        ),
        'display' => array(
          'default' => array(
            'type' => 'taxonomy_term_reference_link',
            'weight' => 10,
            'label' => 'above',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
          'teaser' => array(
            'type' => 'taxonomy_term_reference_link',
            'weight' => 10,
            'label' => 'above',
            'settings' => array(),
            'module' => 'taxonomy',
          ),
        ),
        'settings' => array(
          'user_register_form' => FALSE,
        ),
        'required' => FALSE,
        'field_name' => 'field_tags',
        'entity_type' => 'node',
        'bundle' => 'article',
        'deleted' => '0',
        'default_value' => NULL,
      ),
    ),
  ),
);
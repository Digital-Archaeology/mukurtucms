<?php
/**
 * @file
 * ma_digitalheritage.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function ma_digitalheritage_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|colorbox';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'colorbox';
  $ds_fieldsetting->settings = array(
    'author' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'author',
    ),
  );
  $export['node|digital_heritage|colorbox'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|community_record';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'community_record';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '9',
      'label' => 'above',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '0',
        'wrapper' => '',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'author' => array(
      'weight' => '27',
      'label' => 'above',
      'format' => 'author',
    ),
    'field_licence_trad' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clearfix',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|community_record'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'dh_related_items_teasers' => array(
      'weight' => '12',
      'label' => 'above',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '11',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'author' => array(
      'weight' => '32',
      'label' => 'above',
      'format' => 'author_linked',
    ),
    'field_collection' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_community_ref' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_dh_type' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_related_dh_items' => array(
      'formatter_settings' => array(
        'ft' => array(
          'lb' => 'Related Items',
        ),
      ),
    ),
    'field_category' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_field',
        ),
      ),
    ),
    'field_licence_trad' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'clearfix',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|full'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|map_popup';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'map_popup';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h3',
        'class' => '',
        'ft' => array(),
      ),
    ),
  );
  $export['node|digital_heritage|map_popup'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|search_result';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'search_result';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'link' => '1',
        'wrapper' => 'h2',
        'class' => '',
        'ft' => array(),
      ),
    ),
    'field_media_asset' => array(
      'formatter_settings' => array(
        'ft' => array(
          'classes' => 'col-md-4 col-md-push-8',
        ),
      ),
    ),
  );
  $export['node|digital_heritage|search_result'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|digital_heritage|single_page_right_column_dh';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'digital_heritage';
  $ds_fieldsetting->view_mode = 'single_page_right_column_dh';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'more_link_to_modal_node' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'default',
    ),
  );
  $export['node|digital_heritage|single_page_right_column_dh'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_custom_fields_info().
 */
function ma_digitalheritage_ds_custom_fields_info() {
  $export = array();

  $ds_field = new stdClass();
  $ds_field->api_version = 1;
  $ds_field->field = 'dh_related_items_teasers';
  $ds_field->label = 'Related Items';
  $ds_field->field_type = 6;
  $ds_field->entities = array(
    'node' => 'node',
  );
  $ds_field->ui_limit = 'digital_heritage|full';
  $ds_field->properties = array(
    'block' => 'views|dh_related_items_teasers-block',
    'block_render' => '3',
  );
  $export['dh_related_items_teasers'] = $ds_field;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function ma_digitalheritage_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|colorbox';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'colorbox';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_summary',
        1 => 'field_media_asset',
        2 => 'field_description',
        3 => 'body',
        4 => 'field_tk_body',
        5 => 'field_people',
        6 => 'field_coverage',
        7 => 'field_coverage_description',
        8 => 'field_related_dh_items',
        9 => 'field_transcription',
        10 => 'field_related_dictionary_words',
      ),
      'right' => array(
        11 => 'author',
        12 => 'field_community_ref',
        13 => 'og_group_ref',
        14 => 'field_category',
        15 => 'field_tags',
        16 => 'field_collection',
        17 => 'field_original_date',
        18 => 'field_creator',
        19 => 'field_contributor',
        20 => 'field_language',
        21 => 'field_rights',
        22 => 'field_licence_trad',
        23 => 'field_licence_std_cc',
        24 => 'field_source',
        25 => 'field_publisher',
        26 => 'field_identifier',
        27 => 'field_subject',
        28 => 'field_dh_type',
        29 => 'field_format',
      ),
    ),
    'fields' => array(
      'field_summary' => 'left',
      'field_media_asset' => 'left',
      'field_description' => 'left',
      'body' => 'left',
      'field_tk_body' => 'left',
      'field_people' => 'left',
      'field_coverage' => 'left',
      'field_coverage_description' => 'left',
      'field_related_dh_items' => 'left',
      'field_transcription' => 'left',
      'field_related_dictionary_words' => 'left',
      'author' => 'right',
      'field_community_ref' => 'right',
      'og_group_ref' => 'right',
      'field_category' => 'right',
      'field_tags' => 'right',
      'field_collection' => 'right',
      'field_original_date' => 'right',
      'field_creator' => 'right',
      'field_contributor' => 'right',
      'field_language' => 'right',
      'field_rights' => 'right',
      'field_licence_trad' => 'right',
      'field_licence_std_cc' => 'right',
      'field_source' => 'right',
      'field_publisher' => 'right',
      'field_identifier' => 'right',
      'field_subject' => 'right',
      'field_dh_type' => 'right',
      'field_format' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|digital_heritage|colorbox'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|community_record';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'community_record';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_summary',
        1 => 'field_media_asset',
        2 => 'field_description',
        3 => 'body',
        4 => 'field_tk_body',
        5 => 'field_people',
        6 => 'field_transcription',
        7 => 'group_transcription_cr',
        8 => 'field_coverage',
        9 => 'field_coverage_description',
      ),
      'right' => array(
        10 => 'title',
        11 => 'field_community_ref',
        12 => 'og_group_ref',
        13 => 'field_category',
        14 => 'field_tags',
        15 => 'field_original_date',
        16 => 'field_creator',
        17 => 'field_contributor',
        18 => 'field_language',
        19 => 'field_rights',
        20 => 'field_licence_trad',
        21 => 'field_licence_std_cc',
        22 => 'field_source',
        23 => 'field_publisher',
        24 => 'field_identifier',
        25 => 'field_subject',
        26 => 'field_dh_type',
        27 => 'field_format',
        28 => 'author',
      ),
    ),
    'fields' => array(
      'field_summary' => 'left',
      'field_media_asset' => 'left',
      'field_description' => 'left',
      'body' => 'left',
      'field_tk_body' => 'left',
      'field_people' => 'left',
      'field_transcription' => 'left',
      'group_transcription_cr' => 'left',
      'field_coverage' => 'left',
      'field_coverage_description' => 'left',
      'title' => 'right',
      'field_community_ref' => 'right',
      'og_group_ref' => 'right',
      'field_category' => 'right',
      'field_tags' => 'right',
      'field_original_date' => 'right',
      'field_creator' => 'right',
      'field_contributor' => 'right',
      'field_language' => 'right',
      'field_rights' => 'right',
      'field_licence_trad' => 'right',
      'field_licence_std_cc' => 'right',
      'field_source' => 'right',
      'field_publisher' => 'right',
      'field_identifier' => 'right',
      'field_subject' => 'right',
      'field_dh_type' => 'right',
      'field_format' => 'right',
      'author' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|digital_heritage|community_record'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|form';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'form';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'group_tabs',
        1 => 'group_essentials',
        2 => 'title',
        3 => 'group_mukurtu_core',
        6 => 'group_licensing',
        7 => 'field_summary',
        9 => 'group_dublin',
        10 => 'field_collection',
        12 => 'group_relations',
        13 => 'field_related_dh_items',
        14 => 'field_media_asset',
        16 => 'field_related_dictionary_words',
        17 => 'og_group_ref',
        19 => 'field_item_privacy_setting',
        20 => 'body',
        21 => 'field_community_record_children',
        22 => 'field_category',
        23 => 'field_book_children',
        24 => 'field_tk_body',
        25 => 'field_creator',
        26 => 'field_book_parent',
        27 => 'field_description',
        28 => 'field_contributor',
        29 => 'field_tags',
        30 => 'field_original_date',
        31 => 'field_format',
        32 => 'field_dh_type',
        33 => 'field_identifier',
        34 => 'field_language',
        35 => 'field_source',
        36 => 'field_subject',
        37 => 'field_people',
        38 => 'field_transcription',
        39 => 'field_coverage',
        40 => 'field_gpx_file',
        41 => 'field_remove_all_geodata',
        42 => 'field_coverage_description',
        43 => 'field_publisher',
        44 => 'field_rights',
        45 => 'field_licence_trad',
        46 => 'field_licence_std_cc',
      ),
      'hidden' => array(
        4 => 'field_community_record_parent',
        5 => 'path',
        8 => 'field_community_ref',
        11 => 'redirect',
        15 => 'field_date',
        18 => 'field_wkt_from_gpx_file',
        47 => '_add_existing_field',
      ),
    ),
    'fields' => array(
      'group_tabs' => 'ds_content',
      'group_essentials' => 'ds_content',
      'title' => 'ds_content',
      'group_mukurtu_core' => 'ds_content',
      'field_community_record_parent' => 'hidden',
      'path' => 'hidden',
      'group_licensing' => 'ds_content',
      'field_summary' => 'ds_content',
      'field_community_ref' => 'hidden',
      'group_dublin' => 'ds_content',
      'field_collection' => 'ds_content',
      'redirect' => 'hidden',
      'group_relations' => 'ds_content',
      'field_related_dh_items' => 'ds_content',
      'field_media_asset' => 'ds_content',
      'field_date' => 'hidden',
      'field_related_dictionary_words' => 'ds_content',
      'og_group_ref' => 'ds_content',
      'field_wkt_from_gpx_file' => 'hidden',
      'field_item_privacy_setting' => 'ds_content',
      'body' => 'ds_content',
      'field_community_record_children' => 'ds_content',
      'field_category' => 'ds_content',
      'field_book_children' => 'ds_content',
      'field_tk_body' => 'ds_content',
      'field_creator' => 'ds_content',
      'field_book_parent' => 'ds_content',
      'field_description' => 'ds_content',
      'field_contributor' => 'ds_content',
      'field_tags' => 'ds_content',
      'field_original_date' => 'ds_content',
      'field_format' => 'ds_content',
      'field_dh_type' => 'ds_content',
      'field_identifier' => 'ds_content',
      'field_language' => 'ds_content',
      'field_source' => 'ds_content',
      'field_subject' => 'ds_content',
      'field_people' => 'ds_content',
      'field_transcription' => 'ds_content',
      'field_coverage' => 'ds_content',
      'field_gpx_file' => 'ds_content',
      'field_remove_all_geodata' => 'ds_content',
      'field_coverage_description' => 'ds_content',
      'field_publisher' => 'ds_content',
      'field_rights' => 'ds_content',
      'field_licence_trad' => 'ds_content',
      'field_licence_std_cc' => 'ds_content',
      '_add_existing_field' => 'hidden',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|form'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'ds_2col';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'field_summary',
        1 => 'field_media_asset',
        2 => 'field_description',
        3 => 'body',
        4 => 'field_tk_body',
        5 => 'field_people',
        6 => 'group_transcription',
        7 => 'field_coverage',
        8 => 'field_coverage_description',
        9 => 'field_related_dh_items',
        10 => 'field_related_dictionary_words',
        11 => 'field_transcription',
        12 => 'comments',
      ),
      'right' => array(
        13 => 'dh_related_items_teasers',
        14 => 'field_community_ref',
        15 => 'og_group_ref',
        16 => 'field_category',
        17 => 'field_tags',
        18 => 'field_collection',
        19 => 'field_original_date',
        20 => 'field_creator',
        21 => 'field_contributor',
        22 => 'field_language',
        23 => 'field_rights',
        24 => 'field_licence_trad',
        25 => 'field_licence_std_cc',
        26 => 'field_source',
        27 => 'field_publisher',
        28 => 'field_identifier',
        29 => 'field_subject',
        30 => 'field_dh_type',
        31 => 'field_format',
        32 => 'author',
      ),
    ),
    'fields' => array(
      'field_summary' => 'left',
      'field_media_asset' => 'left',
      'field_description' => 'left',
      'body' => 'left',
      'field_tk_body' => 'left',
      'field_people' => 'left',
      'group_transcription' => 'left',
      'field_coverage' => 'left',
      'field_coverage_description' => 'left',
      'field_related_dh_items' => 'left',
      'field_related_dictionary_words' => 'left',
      'field_transcription' => 'left',
      'comments' => 'left',
      'dh_related_items_teasers' => 'right',
      'field_community_ref' => 'right',
      'og_group_ref' => 'right',
      'field_category' => 'right',
      'field_tags' => 'right',
      'field_collection' => 'right',
      'field_original_date' => 'right',
      'field_creator' => 'right',
      'field_contributor' => 'right',
      'field_language' => 'right',
      'field_rights' => 'right',
      'field_licence_trad' => 'right',
      'field_licence_std_cc' => 'right',
      'field_source' => 'right',
      'field_publisher' => 'right',
      'field_identifier' => 'right',
      'field_subject' => 'right',
      'field_dh_type' => 'right',
      'field_format' => 'right',
      'author' => 'right',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'layout_disable_css' => 0,
  );
  $export['node|digital_heritage|full'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|map_popup';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'map_popup';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_media_asset',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_media_asset' => 'ds_content',
    ),
    'limit' => array(
      'field_media_asset' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|map_popup'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|search_result';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'search_result';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'field_media_asset',
        1 => 'title',
        2 => 'group_list_view_fields',
        3 => 'field_community_ref',
        4 => 'field_category',
        5 => 'field_summary',
      ),
    ),
    'fields' => array(
      'field_media_asset' => 'ds_content',
      'title' => 'ds_content',
      'group_list_view_fields' => 'ds_content',
      'field_community_ref' => 'ds_content',
      'field_category' => 'ds_content',
      'field_summary' => 'ds_content',
    ),
    'limit' => array(
      'field_media_asset' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|search_result'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|digital_heritage|single_page_right_column_dh';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'digital_heritage';
  $ds_layout->view_mode = 'single_page_right_column_dh';
  $ds_layout->layout = 'ds_1col';
  $ds_layout->settings = array(
    'regions' => array(
      'ds_content' => array(
        0 => 'title',
        1 => 'field_media_asset',
        2 => 'field_community_ref',
        3 => 'field_category',
        4 => 'field_summary',
        5 => 'more_link_to_modal_node',
      ),
    ),
    'fields' => array(
      'title' => 'ds_content',
      'field_media_asset' => 'ds_content',
      'field_community_ref' => 'ds_content',
      'field_category' => 'ds_content',
      'field_summary' => 'ds_content',
      'more_link_to_modal_node' => 'ds_content',
    ),
    'limit' => array(
      'field_media_asset' => '1',
    ),
    'classes' => array(
      'layout_class' => array(
        '' => '',
      ),
    ),
    'wrappers' => array(
      'ds_content' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['node|digital_heritage|single_page_right_column_dh'] = $ds_layout;

  return $export;
}

/**
 * Implements hook_ds_view_modes_info().
 */
function ma_digitalheritage_ds_view_modes_info() {
  $export = array();

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'community_record';
  $ds_view_mode->label = 'Community Record';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['community_record'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'map_popup';
  $ds_view_mode->label = 'Map Popup';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['map_popup'] = $ds_view_mode;

  $ds_view_mode = new stdClass();
  $ds_view_mode->api_version = 1;
  $ds_view_mode->view_mode = 'single_page_right_column_dh';
  $ds_view_mode->label = 'Single Page Right Column DH';
  $ds_view_mode->entities = array(
    'node' => 'node',
  );
  $export['single_page_right_column_dh'] = $ds_view_mode;

  return $export;
}

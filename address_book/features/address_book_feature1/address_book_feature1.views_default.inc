<?php
/**
 * @file
 * address_book_feature1.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function address_book_feature1_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'address_book';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'contact';
  $view->human_name = 'Address book';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Address book';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'cid' => 'cid',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'cid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Field: Bulk operations: Contact */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'contact';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Delete selected',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 1,
      'label' => 'Change category',
      'settings' => array(
        'show_all_tokens' => 0,
        'display_values' => array(
          'address_book::field_category1' => 'address_book::field_category1',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Contact: Photo */
  $handler->display->display_options['fields']['field_photo1']['id'] = 'field_photo1';
  $handler->display->display_options['fields']['field_photo1']['table'] = 'field_data_field_photo1';
  $handler->display->display_options['fields']['field_photo1']['field'] = 'field_photo1';
  $handler->display->display_options['fields']['field_photo1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo1']['settings'] = array(
    'image_style' => 'contact_preview_img',
    'image_link' => '',
  );
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['cid_1']['id'] = 'cid_1';
  $handler->display->display_options['fields']['cid_1']['table'] = 'contact';
  $handler->display->display_options['fields']['cid_1']['field'] = 'cid';
  $handler->display->display_options['fields']['cid_1']['exclude'] = TRUE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['field_last_name1']['id'] = 'field_last_name1';
  $handler->display->display_options['fields']['field_last_name1']['table'] = 'field_data_field_last_name1';
  $handler->display->display_options['fields']['field_last_name1']['field'] = 'field_last_name1';
  $handler->display->display_options['fields']['field_last_name1']['exclude'] = TRUE;
  /* Field: Contact: Label */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'contact';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Name:';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['text'] = '[title_1]  [field_last_name1] ';
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['path'] = 'address-book/[cid_1]/contact';
  /* Field: Contact: Category: */
  $handler->display->display_options['fields']['field_category1']['id'] = 'field_category1';
  $handler->display->display_options['fields']['field_category1']['table'] = 'field_data_field_category1';
  $handler->display->display_options['fields']['field_category1']['field'] = 'field_category1';
  $handler->display->display_options['fields']['field_category1']['label'] = 'Category';
  $handler->display->display_options['fields']['field_category1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Contact: Phone */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  /* Field: Contact: Birthday */
  $handler->display->display_options['fields']['field_birthday1']['id'] = 'field_birthday1';
  $handler->display->display_options['fields']['field_birthday1']['table'] = 'field_data_field_birthday1';
  $handler->display->display_options['fields']['field_birthday1']['field'] = 'field_birthday1';
  $handler->display->display_options['fields']['field_birthday1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing_1']['id'] = 'nothing_1';
  $handler->display->display_options['fields']['nothing_1']['table'] = 'views';
  $handler->display->display_options['fields']['nothing_1']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing_1']['label'] = '';
  $handler->display->display_options['fields']['nothing_1']['alter']['text'] = 'Delete';
  $handler->display->display_options['fields']['nothing_1']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing_1']['alter']['path'] = 'address-book/[cid_1]/delete';
  $handler->display->display_options['fields']['nothing_1']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'address-book/manage/[cid_1] ';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'address-book';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Address Book';
  $handler->display->display_options['menu']['weight'] = '10';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['type'] = 'normal';
  $handler->display->display_options['tab_options']['title'] = 'List';
  $handler->display->display_options['tab_options']['weight'] = '0';
  $export['address_book'] = $view;

  $view = new view();
  $view->name = 'contact';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'contact';
  $view->human_name = 'Contact';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '[title] [field_last_name1] ';
  $handler->display->display_options['use_ajax'] = TRUE;
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'role';
  $handler->display->display_options['access']['role'] = array(
    3 => '3',
    2 => '2',
  );
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'field_category1' => 'field_category1',
    'field_email' => 'field_email',
    'field_phone1' => 'field_phone1',
    'field_birthday1' => 'field_birthday1',
    'field_notes1' => 'field_notes1',
    'cid' => 'cid',
  );
  $handler->display->display_options['row_options']['hide_empty'] = TRUE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = 'No results found';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  /* Field: Contact: Label */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'contact';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Contact: Last name */
  $handler->display->display_options['fields']['field_last_name1']['id'] = 'field_last_name1';
  $handler->display->display_options['fields']['field_last_name1']['table'] = 'field_data_field_last_name1';
  $handler->display->display_options['fields']['field_last_name1']['field'] = 'field_last_name1';
  $handler->display->display_options['fields']['field_last_name1']['exclude'] = TRUE;
  /* Field: Contact: Photo */
  $handler->display->display_options['fields']['field_photo1']['id'] = 'field_photo1';
  $handler->display->display_options['fields']['field_photo1']['table'] = 'field_data_field_photo1';
  $handler->display->display_options['fields']['field_photo1']['field'] = 'field_photo1';
  $handler->display->display_options['fields']['field_photo1']['label'] = '';
  $handler->display->display_options['fields']['field_photo1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_photo1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_photo1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_photo1']['hide_empty'] = TRUE;
  $handler->display->display_options['fields']['field_photo1']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_photo1']['settings'] = array(
    'image_style' => 'contact_img',
    'image_link' => '',
  );
  /* Field: Contact: Category: */
  $handler->display->display_options['fields']['field_category1']['id'] = 'field_category1';
  $handler->display->display_options['fields']['field_category1']['table'] = 'field_data_field_category1';
  $handler->display->display_options['fields']['field_category1']['field'] = 'field_category1';
  $handler->display->display_options['fields']['field_category1']['label'] = 'Category';
  $handler->display->display_options['fields']['field_category1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_category1']['type'] = 'taxonomy_term_reference_plain';
  /* Field: Contact: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_email']['element_wrapper_type'] = 'h4';
  /* Field: Contact: Phone */
  $handler->display->display_options['fields']['field_phone1']['id'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['table'] = 'field_data_field_phone1';
  $handler->display->display_options['fields']['field_phone1']['field'] = 'field_phone1';
  $handler->display->display_options['fields']['field_phone1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_phone1']['element_wrapper_type'] = 'h4';
  /* Field: Contact: Birthday */
  $handler->display->display_options['fields']['field_birthday1']['id'] = 'field_birthday1';
  $handler->display->display_options['fields']['field_birthday1']['table'] = 'field_data_field_birthday1';
  $handler->display->display_options['fields']['field_birthday1']['field'] = 'field_birthday1';
  $handler->display->display_options['fields']['field_birthday1']['element_label_type'] = 'strong';
  $handler->display->display_options['fields']['field_birthday1']['element_wrapper_type'] = 'h4';
  $handler->display->display_options['fields']['field_birthday1']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Contact: Notes */
  $handler->display->display_options['fields']['field_notes1']['id'] = 'field_notes1';
  $handler->display->display_options['fields']['field_notes1']['table'] = 'field_data_field_notes1';
  $handler->display->display_options['fields']['field_notes1']['field'] = 'field_notes1';
  $handler->display->display_options['fields']['field_notes1']['label'] = '';
  $handler->display->display_options['fields']['field_notes1']['element_type'] = 'h4';
  $handler->display->display_options['fields']['field_notes1']['element_label_colon'] = FALSE;
  /* Field: Contact: Contact ID */
  $handler->display->display_options['fields']['cid']['id'] = 'cid';
  $handler->display->display_options['fields']['cid']['table'] = 'contact';
  $handler->display->display_options['fields']['cid']['field'] = 'cid';
  $handler->display->display_options['fields']['cid']['exclude'] = TRUE;
  /* Contextual filter: Contact: Contact ID */
  $handler->display->display_options['arguments']['cid']['id'] = 'cid';
  $handler->display->display_options['arguments']['cid']['table'] = 'contact';
  $handler->display->display_options['arguments']['cid']['field'] = 'cid';
  $handler->display->display_options['arguments']['cid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['cid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['cid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['cid']['summary_options']['items_per_page'] = '25';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'address-book/%/contact';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['contact'] = $view;

  return $export;
}

<?php
/**
 * @file
 * service_catalog.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function service_catalog_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'all_provider_services';
  $view->description = '';
  $view->tag = 'catalog';
  $view->base_table = 'node';
  $view->human_name = 'All Provider Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services (All Providers)';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2>[title]</h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['field_catalog_service_provider']['id'] = 'field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['table'] = 'field_data_field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['field'] = 'field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_service_provider']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_service_provider']['alter']['text'] = '<div class="service-provider">[field_catalog_service_provider]</div>';
  $handler->display->display_options['fields']['field_catalog_service_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_service_provider']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_service_provider']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_catalog_service_provider']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_catalog_entry_link']['id'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['table'] = 'field_data_field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['field'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_entry_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['multi_type'] = 'ul';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'catalog_entry' => 'catalog_entry',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: All Provider Services Page */
  $handler = $view->new_display('page', 'All Provider Services Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['path'] = 'services/allproviders';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['all_provider_services'] = $view;

  $view = new view();
  $view->name = 'catalog_categories';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Catalog Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Service Categories';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['class'] = 'menu';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'catalog_categories' => 'catalog_categories',
  );

  /* Display: Catalog Categories Block */
  $handler = $view->new_display('block', 'Catalog Categories Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $export['catalog_categories'] = $view;

  $view = new view();
  $view->name = 'service_catalog';
  $view->description = 'Service Categories / Grid View';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'All Service Categories';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'By Category';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '21600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '21600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span6 well postcard-left column';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'field_data_field_category_image';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => 'content',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['exclude'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_type'] = 'h3';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Short Description */
  $handler->display->display_options['fields']['field_category_short_description']['id'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['table'] = 'field_data_field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['field'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_category_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_short_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[name]</h3>
<p>[field_category_short_description]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'catalog_categories' => 'catalog_categories',
  );

  /* Display: All Services Block */
  $handler = $view->new_display('block', 'All Services Block', 'block');
  $handler->display->display_options['enabled'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: All Services Grid */
  $handler = $view->new_display('block', 'All Services Grid', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span3';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/services" class="pull-right">View all services <i class="icon-double-angle-right"></i></a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'field_data_field_category_image';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '[field_category_image] [name]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Short Description */
  $handler->display->display_options['fields']['field_category_short_description']['id'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['table'] = 'field_data_field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['field'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_category_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_short_description']['element_label_colon'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '<h3>[name]</h3>
<p>[field_category_short_description]</p>';
  $handler->display->display_options['fields']['nothing']['element_type'] = 'div';
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;

  /* Display: All Services Page */
  $handler = $view->new_display('page', 'All Services Page', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span6 postcard-left well column';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="element-invisible element-focusable">Service categories</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'field_data_field_category_image';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['alter']['text'] = '<i class="fa [field_icon]"></i>';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Short Description */
  $handler->display->display_options['fields']['field_category_short_description']['id'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['table'] = 'field_data_field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['field'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_category_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_short_description']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_short_description']['element_default_classes'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<div>[field_icon]</div>
<div><h3>[name]</h3><p>[field_category_short_description]</p></div>';
  $handler->display->display_options['fields']['name']['alter']['path'] = '$link';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['path'] = 'services';

  /* Display: All Services Grid (Full Width) */
  $handler = $view->new_display('block', 'All Services Grid (Full Width)', 'block_2');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Browse Categories';
  $handler->display->display_options['defaults']['css_class'] = FALSE;
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'span2';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/services" class="pull-right more-link">View all services</a>';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'field_data_field_category_image';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => 'thumbnail',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Short Description */
  $handler->display->display_options['fields']['field_category_short_description']['id'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['table'] = 'field_data_field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['field'] = 'field_category_short_description';
  $handler->display->display_options['fields']['field_category_short_description']['label'] = '';
  $handler->display->display_options['fields']['field_category_short_description']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_short_description']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['text'] = '<i class="fa [field_icon]"></i> [name]';
  $handler->display->display_options['fields']['name']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['name']['alter']['path'] = 'taxonomy/term/[tid]';
  $handler->display->display_options['fields']['name']['alter']['alt'] = '[field_category_short_description]';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $export['service_catalog'] = $view;

  $view = new view();
  $view->name = 'services';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Services';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Services';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['id'] = 'field_catalog_entry_link_1';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['table'] = 'field_data_field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['field'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_catalog_entry_link_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_catalog_entry_link']['id'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['table'] = 'field_data_field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['field'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_entry_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['multi_type'] = 'ul';
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['field_catalog_service_provider']['id'] = 'field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['table'] = 'field_data_field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['field'] = 'field_catalog_service_provider';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'catalog_entry' => 'catalog_entry',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['id'] = 'field_catalog_entry_link_1';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['table'] = 'field_data_field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['field'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['type'] = 'link_url';
  $handler->display->display_options['fields']['field_catalog_entry_link_1']['delta_offset'] = '0';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['path'] = '[field_catalog_entry_link_1]';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = 'h2';
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Provider */
  $handler->display->display_options['fields']['field_catalog_service_provider']['id'] = 'field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['table'] = 'field_data_field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['field'] = 'field_catalog_service_provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_service_provider']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_catalog_service_provider']['element_class'] = 'service-provider';
  $handler->display->display_options['fields']['field_catalog_service_provider']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_service_provider']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_service_provider']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_catalog_service_provider']['delta_offset'] = '0';
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_type'] = 'p';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_catalog_entry_link']['id'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['table'] = 'field_data_field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['field'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_entry_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['multi_type'] = 'ul';
  $handler->display->display_options['path'] = 'services/all';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Services';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: A-Z List Block */
  $handler = $view->new_display('block', 'A-Z List Block', 'block_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'A to Z';
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['footer'] = FALSE;
  /* Footer: Global: Text area */
  $handler->display->display_options['footer']['area']['id'] = 'area';
  $handler->display->display_options['footer']['area']['table'] = 'views';
  $handler->display->display_options['footer']['area']['field'] = 'area';
  $handler->display->display_options['footer']['area']['content'] = '<a href="/services/all">Full Catalog</a>
';
  $handler->display->display_options['footer']['area']['format'] = 'full_html';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['text'] = '<h2><a href="[field_catalog_entry_link]">[title]</a></h2>';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['title']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_catalog_entry_link']['id'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['table'] = 'field_data_field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['field'] = 'field_catalog_entry_link';
  $handler->display->display_options['fields']['field_catalog_entry_link']['label'] = '';
  $handler->display->display_options['fields']['field_catalog_entry_link']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['alter']['text'] = '<h2><a href="[field_catalog_entry_link]">[title]</a></h2>';
  $handler->display->display_options['fields']['field_catalog_entry_link']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['alter']['path'] = '[field_catalog_entry_link-url]';
  $handler->display->display_options['fields']['field_catalog_entry_link']['alter']['strip_tags'] = TRUE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_type'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['field_catalog_entry_link']['click_sort_column'] = 'url';
  $handler->display->display_options['fields']['field_catalog_entry_link']['type'] = 'link_plain';
  $handler->display->display_options['fields']['field_catalog_entry_link']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_catalog_entry_link']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_catalog_entry_link']['separator'] = '';
  $export['services'] = $view;

  $view = new view();
  $view->name = 'taxonomy_term_information';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Taxonomy Term Information';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['row_class'] = 'well postcard-left';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Taxonomy term: Image */
  $handler->display->display_options['fields']['field_category_image']['id'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['table'] = 'field_data_field_category_image';
  $handler->display->display_options['fields']['field_category_image']['field'] = 'field_category_image';
  $handler->display->display_options['fields']['field_category_image']['label'] = '';
  $handler->display->display_options['fields']['field_category_image']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_category_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_category_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_category_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Taxonomy term: Icon */
  $handler->display->display_options['fields']['field_icon']['id'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['table'] = 'field_data_field_icon';
  $handler->display->display_options['fields']['field_icon']['field'] = 'field_icon';
  $handler->display->display_options['fields']['field_icon']['label'] = '';
  $handler->display->display_options['fields']['field_icon']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['field_icon']['alter']['text'] = '<i class="fa [field_icon]"></i>';
  $handler->display->display_options['fields']['field_icon']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: Term description */
  $handler->display->display_options['fields']['description']['id'] = 'description';
  $handler->display->display_options['fields']['description']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['description']['field'] = 'description';
  $handler->display->display_options['fields']['description']['label'] = '';
  $handler->display->display_options['fields']['description']['element_class'] = 'lead';
  $handler->display->display_options['fields']['description']['element_label_colon'] = FALSE;
  /* Contextual filter: Taxonomy term: Term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'catalog_categories' => 'catalog_categories',
  );
  $export['taxonomy_term_information'] = $view;

  return $export;
}

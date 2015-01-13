<?php
/**
 * @file
 * service_catalog.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function service_catalog_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function service_catalog_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function service_catalog_node_info() {
  $items = array(
    'catalog_entry' => array(
      'name' => t('Catalog Entry'),
      'base' => 'node_content',
      'description' => t('An entry in the catalog.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

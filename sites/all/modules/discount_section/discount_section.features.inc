<?php
/**
 * @file
 * discount_section.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function discount_section_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function discount_section_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function discount_section_node_info() {
  $items = array(
    'discount' => array(
      'name' => t('Discount'),
      'base' => 'node_content',
      'description' => t('Add discount'),
      'has_title' => '1',
      'title_label' => t('Discount Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

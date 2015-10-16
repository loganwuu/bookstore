<?php
/**
 * @file
 * discount_section.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function discount_section_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: navigation_discount:node/add/discount.
  $menu_links['navigation_discount:node/add/discount'] = array(
    'menu_name' => 'navigation',
    'link_path' => 'node/add/discount',
    'router_path' => 'node/add/discount',
    'link_title' => 'Discount',
    'options' => array(
      'attributes' => array(
        'title' => 'Add discount',
      ),
      'identifier' => 'navigation_discount:node/add/discount',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
    'parent_identifier' => 'navigation_add-content:node/add',
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Discount');

  return $menu_links;
}

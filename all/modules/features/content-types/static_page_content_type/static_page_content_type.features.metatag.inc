<?php
/**
 * @file
 * static_page_content_type.features.metatag.inc
 */

/**
 * Implements hook_metatag_export_default().
 */
function static_page_content_type_metatag_export_default() {
  $config = array();

  // Exported Metatag config instance: node:static_page.
  $config['node:static_page'] = array(
    'instance' => 'node:static_page',
    'config' => array(),
  );

  return $config;
}

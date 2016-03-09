<?php
/**
 * @file
 * static_page_content_type.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function static_page_content_type_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Header Image Picture';
  $picture_mapping->machine_name = 'header_image_picture';
  $picture_mapping->breakpoint_group = 'globalbreakpoints';
  $picture_mapping->mapping = array(
    'custom.user.widest_breakpoint' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'header_image_widest',
      ),
    ),
    'custom.user.large_breakpoint' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'header_image_large',
      ),
    ),
    'custom.user.medium_breakpoint' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'header_image_medium',
      ),
    ),
    'custom.user.small_breakpoint' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'header_image_small',
      ),
    ),
  );
  $export['header_image_picture'] = $picture_mapping;

  return $export;
}

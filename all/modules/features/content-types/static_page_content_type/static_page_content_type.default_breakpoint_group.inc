<?php
/**
 * @file
 * static_page_content_type.default_breakpoint_group.inc
 */

/**
 * Implements hook_default_breakpoint_group().
 */
function static_page_content_type_default_breakpoint_group() {
  $export = array();

  $breakpoint_group = new stdClass();
  $breakpoint_group->disabled = FALSE; /* Edit this to true to make a default breakpoint_group disabled initially */
  $breakpoint_group->api_version = 1;
  $breakpoint_group->machine_name = 'globalbreakpoints';
  $breakpoint_group->name = 'Global Breakpoints';
  $breakpoint_group->breakpoints = array(
    0 => 'custom.user.widest_breakpoint',
    1 => 'custom.user.large_breakpoint',
    2 => 'custom.user.medium_breakpoint',
    3 => 'custom.user.small_breakpoint',
  );
  $breakpoint_group->type = 'custom';
  $breakpoint_group->overridden = 0;
  $export['globalbreakpoints'] = $breakpoint_group;

  return $export;
}

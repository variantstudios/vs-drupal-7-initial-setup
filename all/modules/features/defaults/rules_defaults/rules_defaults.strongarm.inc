<?php
/**
 * @file
 * rules_defaults.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function rules_defaults_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'rules_event_whitelist';
  $strongarm->value = array();
  $export['rules_event_whitelist'] = $strongarm;

  return $export;
}

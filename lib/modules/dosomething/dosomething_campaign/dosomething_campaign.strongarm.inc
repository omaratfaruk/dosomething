<?php
/**
 * @file
 * dosomething_campaign.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function dosomething_campaign_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__campaign';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '1',
        ),
        'path' => array(
          'weight' => '10',
        ),
        'metatags' => array(
          'weight' => '11',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_node__campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_campaign';
  $strongarm->value = array();
  $export['node_options_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_campaign';
  $strongarm->value = '1';
  $export['node_preview_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_campaign';
  $strongarm->value = 0;
  $export['node_submitted_campaign'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_campaign_pattern';
  $strongarm->value = 'campaign/[node:nid]';
  $export['pathauto_node_campaign_pattern'] = $strongarm;

  return $export;
}
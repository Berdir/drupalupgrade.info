<?php
/**
 * @file
 * di_sprint.features.inc
 */

/**
 * Implements hook_node_info().
 */
function di_sprint_node_info() {
  $items = array(
    'sprint' => array(
      'name' => t('Sprint'),
      'base' => 'node_content',
      'description' => t('Use this content type to create a new sprint'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
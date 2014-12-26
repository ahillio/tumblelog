<?php
/**
 * @file
 * tumblelog.features.inc
 */

/**
 * Implements hook_node_info().
 */
function tumblelog_node_info() {
  $items = array(
    'node' => array(
      'name' => t('Node'),
      'base' => 'node_content',
      'description' => t('piece of content'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

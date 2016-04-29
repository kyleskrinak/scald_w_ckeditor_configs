<?php
/**
 * @file
 * scald_w_ckeditor_configs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function scald_w_ckeditor_configs_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "scald" && $api == "context_config") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function scald_w_ckeditor_configs_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function scald_w_ckeditor_configs_node_info() {
  $items = array(
    'page' => array(
      'name' => t('Basic page'),
      'base' => 'node_content',
      'description' => t('Use <em>basic pages</em> for your static content, such as an \'About us\' page.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_scald_default_context_types().
 */
function scald_w_ckeditor_configs_scald_default_context_types() {
  $contexts = array();
  $contexts['deleted-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(),
    ),
  );
  $contexts['deleted-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(),
    ),
  );
  $contexts['deleted-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(),
    ),
  );
  $contexts['file_representation-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(),
    ),
  );
  $contexts['file_representation-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(),
    ),
  );
  $contexts['file_representation-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(),
    ),
  );
  $contexts['full-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['full-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['full-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['invalid-id-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(),
    ),
  );
  $contexts['invalid-id-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(),
    ),
  );
  $contexts['invalid-id-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(),
    ),
  );
  $contexts['large-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['large-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-large',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['large-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['medium-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['medium-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-medium',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['medium-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['no-access-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(),
    ),
  );
  $contexts['no-access-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(),
    ),
  );
  $contexts['no-access-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(),
    ),
  );
  $contexts['sdl_editor_representation-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['sdl_editor_representation-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['sdl_editor_representation-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['sdl_library_item-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(),
    ),
  );
  $contexts['sdl_library_item-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-library',
      ),
    ),
    'data' => array(
      'image' => array(),
    ),
  );
  $contexts['sdl_library_item-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(),
    ),
  );
  $contexts['sdl_preview-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['sdl_preview-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['sdl_preview-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['thumbnail-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['thumbnail-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'style-thumbnail',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['thumbnail-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['title-file'] = array(
    'player' => array(
      'file' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'file' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'file' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['title-image'] = array(
    'player' => array(
      'image' => array(
        '*' => 'default',
        'settings' => array(),
      ),
    ),
    'transcoder' => array(
      'image' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'image' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  $contexts['title-video'] = array(
    'player' => array(
      'video' => array(
        '*' => 'default',
      ),
    ),
    'transcoder' => array(
      'video' => array(
        '*' => 'passthrough',
      ),
    ),
    'data' => array(
      'video' => array(
        'width' => '',
        'height' => '',
      ),
    ),
  );
  return $contexts;
}

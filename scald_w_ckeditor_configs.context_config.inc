<?php
/**
 * @file
 * scald_w_ckeditor_configs.context_config.inc
 */

/**
 * Implements hook_default_scald_context_config().
 */
function scald_w_ckeditor_configs_default_scald_context_config() {
  $export = array();

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'full';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['full'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'large';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-large',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['large'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'medium';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-medium',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['medium'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'sdl_editor_representation';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['sdl_editor_representation'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'sdl_library_item';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-library',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['sdl_library_item'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'sdl_preview';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['sdl_preview'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'thumbnail';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'style-thumbnail',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['thumbnail'] = $context_config;

  $context_config = new stdClass();
  $context_config->disabled = FALSE; /* Edit this to true to make a default context_config disabled initially */
  $context_config->api_version = 1;
  $context_config->context = 'title';
  $context_config->transcoder = array(
    'image' => array(
      '*' => 'passthrough',
    ),
    'video' => array(
      '*' => 'passthrough',
    ),
  );
  $context_config->player = array(
    'image' => array(
      '*' => 'default',
      'settings' => array(),
    ),
    'video' => array(
      '*' => 'default',
    ),
  );
  $context_config->data = array(
    'width' => '',
    'height' => '',
  );
  $export['title'] = $context_config;

  return $export;
}

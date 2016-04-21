<?php
/**
 * @file
 * scald_w_ckeditor_configs.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function scald_w_ckeditor_configs_filter_default_formats() {
  $formats = array();

  // Exported format: Filtered HTML.
  $formats['filtered_html'] = array(
    'format' => 'filtered_html',
    'name' => 'Filtered HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 0,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => 20,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <a> <em> <i> <strong> <b> <del> <strike> <u> <hr> <sub> <sup> <cite> <q> <blockquote> <pre> <img> <iframe> <table> <thead> <tbody> <tr> <th> <td> <div> <ul> <ol> <li> <dl> <dt> <dd> <h1> <h2> <h3> <h4> <h5> <h6> <figure> <figcaption> <br>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 30,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 40,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'settings_source' => 'local',
          'local_paths' => '',
          'protocol_style' => 'full',
          'local_settings' => array(
            'protocol_style' => 'full',
            'local_paths' => '',
          ),
        ),
      ),
    ),
  );

  // Exported format: Full HTML.
  $formats['full_html'] = array(
    'format' => 'full_html',
    'name' => 'Full HTML',
    'cache' => 1,
    'status' => 1,
    'weight' => 1,
    'filters' => array(
      'filter_htmlcorrector' => array(
        'weight' => 10,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_html' => array(
        'weight' => 20,
        'status' => 1,
        'settings' => array(
          'allowed_html' => '<p> <a> <em> <i> <strong> <b> <del> <strike> <u> <hr> <sub> <sup> <cite> <q> <blockquote> <pre> <img> <iframe> <table> <thead> <tbody> <tr> <th> <td> <div> <ul> <ol> <li> <dl> <dt> <dd> <h1> <h2> <h3> <h4> <h5> <h6> <figure> <figcaption>',
          'filter_html_help' => 0,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => 30,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 40,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'pathologic' => array(
        'weight' => 50,
        'status' => 1,
        'settings' => array(
          'protocol_style' => 'full',
          'local_paths' => '',
          'settings_source' => 'global',
        ),
      ),
    ),
  );

  // Exported format: Plain text.
  $formats['plain_text'] = array(
    'format' => 'plain_text',
    'name' => 'Plain text',
    'cache' => 1,
    'status' => 1,
    'weight' => 10,
    'filters' => array(
      'filter_html_escape' => array(
        'weight' => 0,
        'status' => 1,
        'settings' => array(),
      ),
      'filter_url' => array(
        'weight' => 1,
        'status' => 1,
        'settings' => array(
          'filter_url_length' => 72,
        ),
      ),
      'filter_autop' => array(
        'weight' => 2,
        'status' => 1,
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}

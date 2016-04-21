<?php
/**
 * @file
 * scald_w_ckeditor_configs.features.ckeditor_profile.inc
 */

/**
 * Implements hook_ckeditor_profile_defaults().
 */
function scald_w_ckeditor_configs_ckeditor_profile_defaults() {
  $data = array(
    'Advanced' => array(
      'name' => 'Advanced',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Scayt\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\'],
    [\'-\'],
    [\'Image\',\'ScaldAtom\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\'],
    [\'Maximize\',\'ShowBlocks\',\'DrupalBreak\'],
    \'/\',
    [\'Format\',\'Styles\'],
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'Indent\',\'Outdent\',\'-\',\'Blockquote\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'-\'],
    [\'linkit\',\'Link\',\'Unlink\',\'Anchor\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => 'img[*];figure[*];a[*];iframe[width,height,src,frameborder,allowfullscreen,title,class];div(*){*}[*];',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tcss/ckeditor.css',
        'css_style' => 'default',
        'styles_path' => '',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => 'config.image2_alignClasses = [ \'image_left\', \'image_center\', \'image_right\' ];
config.image2_captionedClass = \'image_captioned\';',
        'loadPlugins' => array(
          'dndck4' => array(
            'name' => 'dndck4',
            'desc' => 'Scald Drag and Drop integration - CKEditor 4 widgets',
            'path' => '%base_path%sites/all/modules/scald/modules/fields/mee/plugins/dndck4/',
            'buttons' => array(
              'ScaldAtom' => array(
                'icon' => 'icons/atom.png',
                'label' => 'Edit atom properties',
              ),
            ),
          ),
          'lineutils' => array(
            'name' => 'lineutils',
            'desc' => 'Plugin file: lineutils',
            'path' => '%plugin_dir_extra%lineutils/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'icons/linkit.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'filtered_html' => 'Filtered HTML',
      ),
    ),
    'CKEditor Global Profile' => array(
      'name' => 'CKEditor Global Profile',
      'settings' => array(
        'skin' => 'moono',
        'ckeditor_path' => '//cdn.ckeditor.com/4.5.4/full-all',
        'ckeditor_local_path' => '',
        'ckeditor_plugins_path' => '%l/ckeditor/plugins',
        'ckeditor_plugins_local_path' => '',
        'ckfinder_path' => '%m/ckfinder',
        'ckfinder_local_path' => '',
        'ckeditor_aggregate' => 'f',
        'toolbar_wizard' => 't',
        'loadPlugins' => array(),
      ),
      'input_formats' => array(),
    ),
    'Full' => array(
      'name' => 'Full',
      'settings' => array(
        'ss' => 2,
        'toolbar' => '[
    [\'Source\'],
    [\'Cut\',\'Copy\',\'Paste\',\'PasteText\',\'PasteFromWord\',\'-\',\'SpellChecker\',\'Scayt\'],
    [\'Undo\',\'Redo\',\'Find\',\'Replace\',\'-\',\'SelectAll\'],
    [\'Image\',\'ScaldAtom\',\'Flash\',\'Table\',\'HorizontalRule\',\'Smiley\',\'SpecialChar\',\'Iframe\'],
    \'/\',
    [\'Bold\',\'Italic\',\'Underline\',\'Strike\',\'-\',\'Subscript\',\'Superscript\',\'-\',\'RemoveFormat\'],
    [\'NumberedList\',\'BulletedList\',\'-\',\'Outdent\',\'Indent\',\'Blockquote\',\'CreateDiv\'],
    [\'JustifyLeft\',\'JustifyCenter\',\'JustifyRight\',\'JustifyBlock\',\'-\',\'BidiLtr\',\'BidiRtl\',\'-\',\'Language\'],
    [\'Link\',\'Unlink\',\'Anchor\'],
    [\'DrupalBreak\'],
    \'/\',
    [\'Format\',\'Font\',\'FontSize\'],
    [\'TextColor\',\'BGColor\'],
    [\'Maximize\',\'ShowBlocks\']
]',
        'expand' => 't',
        'default' => 't',
        'show_toggle' => 't',
        'uicolor' => 'default',
        'uicolor_user' => 'default',
        'width' => '100%',
        'lang' => 'en',
        'auto_lang' => 't',
        'language_direction' => 'default',
        'allowed_content' => 't',
        'extraAllowedContent' => 'img[*];figure[*];a[*];iframe[width,height,src,frameborder,allowfullscreen,title,class];div(*){*}[*];',
        'enter_mode' => 'p',
        'shift_enter_mode' => 'br',
        'font_format' => 'p;div;pre;address;h1;h2;h3;h4;h5;h6',
        'custom_formatting' => 'f',
        'formatting' => array(
          'custom_formatting_options' => array(
            'indent' => 'indent',
            'breakBeforeOpen' => 'breakBeforeOpen',
            'breakAfterOpen' => 'breakAfterOpen',
            'breakAfterClose' => 'breakAfterClose',
            'breakBeforeClose' => 0,
            'pre_indent' => 0,
          ),
        ),
        'css_mode' => 'self',
        'css_path' => '%tcss/ckeditor.css',
        'css_style' => 'self',
        'styles_path' => '%tjs/ckeditor.styles.js',
        'filebrowser' => 'imce',
        'filebrowser_image' => '',
        'filebrowser_flash' => '',
        'UserFilesPath' => '%b%f/',
        'UserFilesAbsolutePath' => '%d%b%f/',
        'forcePasteAsPlainText' => 'f',
        'html_entities' => 'f',
        'scayt_autoStartup' => 't',
        'theme_config_js' => 'f',
        'js_conf' => 'config.image2_alignClasses = [ \'image_left\', \'image_center\', \'image_right\' ];
config.image2_captionedClass = \'image_captioned\';',
        'loadPlugins' => array(
          'dndck4' => array(
            'name' => 'dndck4',
            'desc' => 'Scald Drag and Drop integration - CKEditor 4 widgets',
            'path' => '%base_path%sites/all/modules/scald/modules/fields/mee/plugins/dndck4/',
            'buttons' => array(
              'ScaldAtom' => array(
                'icon' => 'icons/atom.png',
                'label' => 'Edit atom properties',
              ),
            ),
          ),
          'lineutils' => array(
            'name' => 'lineutils',
            'desc' => 'Plugin file: lineutils',
            'path' => '%plugin_dir_extra%lineutils/',
            'buttons' => FALSE,
            'default' => 'f',
          ),
          'linkit' => array(
            'name' => 'linkit',
            'desc' => 'Support for Linkit module',
            'path' => '%base_path%sites/all/modules/linkit/editors/ckeditor/',
            'buttons' => array(
              'linkit' => array(
                'label' => 'Linkit',
                'icon' => 'icons/linkit.png',
              ),
            ),
          ),
        ),
      ),
      'input_formats' => array(
        'full_html' => 'Full HTML',
      ),
    ),
  );
  return $data;
}

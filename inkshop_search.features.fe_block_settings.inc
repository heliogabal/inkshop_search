<?php
/**
 * @file
 * inkshop_search.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function inkshop_search_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['facetapi-4MnuqsU9U0F81nBMXnQt67Y06gEKf0TG'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '4MnuqsU9U0F81nBMXnQt67Y06gEKf0TG',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -34,
      ),
      'inkshop' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -38,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Schlagworte',
    'visibility' => 0,
  );

  $export['facetapi-A7mUWkBIhh5LuI1GtTsLPm5QbE36vDZ1'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'A7mUWkBIhh5LuI1GtTsLPm5QbE36vDZ1',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -36,
      ),
      'inkshop' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -41,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Themen',
    'visibility' => 0,
  );

  $export['facetapi-r8i9RWTa605z0o4upYKgfIKRKTxSonka'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'r8i9RWTa605z0o4upYKgfIKRKTxSonka',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'facetapi',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -35,
      ),
      'inkshop' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -39,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => 'Format',
    'visibility' => 0,
  );

  $export['search_api_sorts-search-sorts'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'search-sorts',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'search_api_sorts',
    'node_types' => array(),
    'pages' => '<front>
produkte
produkte/*',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'adminimal',
        'weight' => -32,
      ),
      'inkshop' => array(
        'region' => 'content',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -37,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 4,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 4,
      ),
    ),
    'title' => 'Sortieren nach:',
    'visibility' => 1,
  );

  $export['views--exp-display_products-page'] = array(
    'cache' => -1,
    'css_class' => 'search',
    'custom' => 0,
    'delta' => '-exp-display_products-page',
    'icon' => 'a:2:{s:4:"icon";s:0:"";s:8:"position";s:13:"content_after";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -39,
      ),
      'inkshop' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -42,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-12ee390cd50dc30503906cc11aa2f55a'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '12ee390cd50dc30503906cc11aa2f55a',
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => -37,
      ),
      'inkshop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'inkshop',
        'weight' => -31,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-5d696ecceabf7d4636f78d68c7c84361'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '5d696ecceabf7d4636f78d68c7c84361',
    'icon' => 'a:4:{s:4:"icon";s:0:"";s:7:"wrapper";s:0:"";s:13:"wrapper_class";s:0:"";s:8:"position";s:12:"title_before";}',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'inkshop' => array(
        'region' => 'sidebar_first',
        'status' => 1,
        'theme' => 'inkshop',
        'weight' => -40,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['views-78e73a6d90260821c9380e14fef3bcdb'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => '78e73a6d90260821c9380e14fef3bcdb',
    'icon' => NULL,
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'adminimal' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'adminimal',
        'weight' => 0,
      ),
      'inkshop' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'inkshop',
        'weight' => 0,
      ),
      'omega' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'omega',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  return $export;
}

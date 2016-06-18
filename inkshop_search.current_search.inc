<?php
/**
 * @file
 * inkshop_search.current_search.inc
 */

/**
 * Implements hook_current_search_default_items().
 */
function inkshop_search_current_search_default_items() {
  $export = array();

  $item = new stdClass();
  $item->disabled = FALSE; /* Edit this to true to make a default item disabled initially */
  $item->api_version = 1;
  $item->name = 'search_results';
  $item->label = 'Search Results';
  $item->settings = array(
    'items' => array(
      'ergebnisse' => array(
        'id' => 'text',
        'label' => 'Ergebnisse',
        'text' => '1 Ergebnis gefunden',
        'plural' => 1,
        'text_plural' => '[facetapi_results:result-count] Ergebnisse gefunden',
        'plural_condition' => 'facetapi_results:result-count',
        'wrapper' => 0,
        'element' => '0',
        'css' => 0,
        'classes' => '',
        'weight' => '-50',
      ),
      'aktive_elemente' => array(
        'id' => 'active',
        'label' => 'Aktive Elemente',
        'pattern' => '[facetapi_active:active-value]',
        'keys' => 1,
        'css' => 0,
        'classes' => '',
        'nofollow' => 1,
        'weight' => '0',
      ),
    ),
    'advanced' => array(
      'empty_searches' => '3',
    ),
  );
  $export['search_results'] = $item;

  return $export;
}

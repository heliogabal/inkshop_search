<?php
/**
 * @file
 * inkshop_search.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function inkshop_search_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'search_api_facets_search_ids';
  $strongarm->value = array(
    'product_display' => array(
      'search_api_views:display_products:page' => 'search_api_views:display_products:page',
      'search_api_views:search_page:page' => 'search_api_views:search_page:page',
      'search_api_autocomplete:search_api_views_search_page' => 'search_api_autocomplete:search_api_views_search_page',
      'search_api_views:display_products:page_1' => 'search_api_views:display_products:page_1',
      'search_api_views:display_products:block_1' => 'search_api_views:display_products:block_1',
      'search_api_views:display_products:search_api_views_facets_block_1' => 'search_api_views:display_products:search_api_views_facets_block_1',
      'search_api_views:display_products:search_api_views_facets_block_2' => 'search_api_views:display_products:search_api_views_facets_block_2',
      'search_api_views:display_products:search_api_views_facets_block_3' => 'search_api_views:display_products:search_api_views_facets_block_3',
      'search_api_views:display_products:block_2' => 'search_api_views:display_products:block_2',
      'search_api_views:display_products:aehnliche_produkte_auto' => 'search_api_views:display_products:aehnliche_produkte_auto',
      'search_api_views:display_products:search_api_views_facets_block_4' => 'search_api_views:display_products:search_api_views_facets_block_4',
      'search_api_views:display_products:page_2' => 'search_api_views:display_products:page_2',
    ),
  );
  $export['search_api_facets_search_ids'] = $strongarm;

  return $export;
}

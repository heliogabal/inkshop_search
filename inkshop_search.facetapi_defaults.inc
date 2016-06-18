<?php
/**
 * @file
 * inkshop_search.facetapi_defaults.inc
 */

/**
 * Implements hook_facetapi_default_facet_settings().
 */
function inkshop_search_facetapi_default_facet_settings() {
  $export = array();

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display::field_pd_category';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = '';
  $facet->facet = 'field_pd_category';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'roles' => array(
        1 => 0,
        2 => 0,
        4 => 0,
        3 => 0,
      ),
      'bundle' => 'none',
      'bundle_selected' => array(
        'page' => 0,
        'product_display' => 0,
        'donation' => 0,
        'subscription' => 0,
      ),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_pd_category',
    'pretty_paths_taxonomy_pathauto' => 1,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'category',
    'individual_parent' => '0',
    'limit_active_items' => 1,
  );
  $export['search_api@product_display::field_pd_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display::field_pd_type';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = '';
  $facet->facet = 'field_pd_type';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'query_type' => 'term',
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_pd_type',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'type',
    'individual_parent' => '0',
    'limit_active_items' => 0,
  );
  $export['search_api@product_display::field_pd_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display::field_tags';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = '';
  $facet->facet = 'field_tags';
  $facet->enabled = FALSE;
  $facet->settings = array(
    'operator' => 'and',
    'hard_limit' => '50',
    'dependencies' => array(
      'bundle' => 'none',
      'bundle_selected' => array(),
      'roles' => array(),
    ),
    'facet_mincount' => '1',
    'facet_missing' => '0',
    'flatten' => '0',
    'individual_parent' => '0',
    'query_type' => 'term',
    'limit_active_items' => 0,
    'default_true' => '1',
    'facet_search_ids' => array(),
    'exclude' => 0,
    'pretty_paths_alias' => 'field_tags',
    'pretty_paths_taxonomy_pathauto' => 0,
    'pretty_paths_taxonomy_pathauto_vocabulary' => 'tags',
  );
  $export['search_api@product_display::field_tags'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display:block:field_pd_category';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = 'block';
  $facet->facet = 'field_pd_category';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'useless_searches' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'hide_search_start' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'active_items' => array(
        'status' => 0,
        'weight' => '-1',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => '10',
    'range_advanced' => '',
    'display_count' => 1,
    'empty_text' => array(
      'value' => '',
      'format' => '',
    ),
    'submit_realm' => 'Speichern und zur Bereichskonfiguration zurückgehen',
    'tagcloud_levels' => '6',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@product_display:block:field_pd_category'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display:block:field_pd_type';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = 'block';
  $facet->facet = 'field_pd_type';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'useless_searches' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'hide_search_start' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'active_items' => array(
        'status' => 0,
        'weight' => '-1',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'tagcloud_levels' => '6',
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'display_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'filtered_html',
    ),
    'submit_realm' => 'Speichern und zur Bereichskonfiguration zurückgehen',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
  );
  $export['search_api@product_display:block:field_pd_type'] = $facet;

  $facet = new stdClass();
  $facet->disabled = FALSE; /* Edit this to true to make a default facet disabled initially */
  $facet->api_version = 1;
  $facet->name = 'search_api@product_display:block:field_tags';
  $facet->searcher = 'search_api@product_display';
  $facet->realm = 'block';
  $facet->facet = 'field_tags';
  $facet->enabled = TRUE;
  $facet->settings = array(
    'weight' => 0,
    'widget' => 'facetapi_links',
    'filters' => array(
      'useless_searches' => array(
        'status' => 0,
        'weight' => '-50',
      ),
      'hide_search_start' => array(
        'status' => 0,
        'weight' => '-49',
      ),
      'current_depth' => array(
        'status' => 0,
        'weight' => '-47',
      ),
      'active_items' => array(
        'status' => 0,
        'weight' => '-1',
      ),
    ),
    'active_sorts' => array(
      'count' => 'count',
      'display' => 'display',
      'active' => 0,
      'indexed' => 0,
    ),
    'sort_weight' => array(
      'active' => '-50',
      'count' => '-49',
      'display' => '-48',
      'indexed' => '0',
    ),
    'sort_order' => array(
      'active' => '3',
      'count' => '3',
      'display' => '4',
      'indexed' => '4',
    ),
    'empty_behavior' => 'none',
    'facet_more_text' => 'Show more',
    'facet_fewer_text' => 'Show fewer',
    'soft_limit' => '20',
    'nofollow' => 1,
    'show_expanded' => 0,
    'tagcloud_levels' => '6',
    'name' => '',
    'prefix' => '',
    'suffix' => '',
    'auto-submit-delay' => '1500',
    'range_simple' => 10,
    'range_advanced' => '',
    'display_count' => 0,
    'empty_text' => array(
      'value' => '',
      'format' => 'html',
    ),
  );
  $export['search_api@product_display:block:field_tags'] = $facet;

  return $export;
}

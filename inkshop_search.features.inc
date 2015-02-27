<?php
/**
 * @file
 * inkshop_search.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function inkshop_search_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "current_search" && $api == "current_search") {
    return array("version" => "1");
  }
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function inkshop_search_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_default_search_api_autocomplete_search().
 */
function inkshop_search_default_search_api_autocomplete_search() {
  $items = array();
  $items['search_api_views_display_products'] = entity_import('search_api_autocomplete_search', '{
    "machine_name" : "search_api_views_display_products",
    "name" : "Display Products",
    "index_id" : "product_display",
    "type" : "search_api_views",
    "enabled" : "1",
    "options" : {
      "result count" : true,
      "fields" : [
        "body:value",
        "search_api_aggregation_1",
        "search_api_aggregation_2",
        "search_api_aggregation_3",
        "search_api_aggregation_4",
        "search_api_aggregation_5"
      ],
      "results" : 0,
      "custom" : { "display" : "page" }
    }
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function inkshop_search_default_search_api_server() {
  $items = array();
  $items['frontend'] = entity_import('search_api_server', '{
    "name" : "Frontend",
    "machine_name" : "frontend",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : { "database" : "default:default", "min_chars" : "3", "indexes" : [] },
    "enabled" : "0"
  }');
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "SOLR",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "site_hash_form" : [],
      "site_hash" : false,
      "scheme" : "http",
      "host" : "127.0.0.1",
      "port" : "8099",
      "path" : "\\/solr\\/core1",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "skip_schema_check" : 0,
      "solr_version" : "",
      "http_method" : "AUTO"
    },
    "enabled" : "1"
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_sort().
 */
function inkshop_search_default_search_api_sort() {
  $items = array();
  $items['product_display__created'] = entity_import('search_api_sort', '{
    "index_id" : "product_display",
    "field" : "created",
    "name" : "Datum",
    "enabled" : "1",
    "weight" : "1",
    "identifier" : "product_display__created",
    "default_sort" : "1",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Erstellungsdatum" }
  }');
  $items['product_display__title_field'] = entity_import('search_api_sort', '{
    "index_id" : "product_display",
    "field" : "title_field",
    "name" : "Titel",
    "enabled" : "1",
    "weight" : "0",
    "identifier" : "product_display__title_field",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "asc",
    "options" : { "field_name" : "Title" }
  }');
  return $items;
}

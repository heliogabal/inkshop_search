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
    "enabled" : "1"
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
      "path" : "\\/solr\\/d41d8cd98f00b204e9800998ecf8427e.shop.dev.inkota.de.o4507778742",
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
    "weight" : "-95",
    "identifier" : "product_display__created",
    "default_sort" : "1",
    "default_sort_no_terms" : "1",
    "default_order" : "desc"
  }');
  $items['product_display__title_field'] = entity_import('search_api_sort', '{
    "index_id" : "product_display",
    "field" : "title_field",
    "name" : "Titel",
    "enabled" : "1",
    "weight" : "-96",
    "identifier" : "product_display__title_field",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "asc"
  }');
  return $items;
}

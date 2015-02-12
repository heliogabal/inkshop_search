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
    "options" : {
      "database" : "default:default",
      "min_chars" : "3",
      "indexes" : { "product_display" : {
          "nid" : {
            "table" : "search_api_db_product_display",
            "column" : "nid_2",
            "type" : "integer",
            "boost" : "1.0"
          },
          "type" : {
            "table" : "search_api_db_product_display",
            "column" : "type_2",
            "type" : "string",
            "boost" : "1.0"
          },
          "title" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "status" : {
            "table" : "search_api_db_product_display",
            "column" : "status_2",
            "type" : "integer",
            "boost" : "1.0"
          },
          "created" : {
            "table" : "search_api_db_product_display",
            "column" : "created_2",
            "type" : "date",
            "boost" : "1.0"
          },
          "changed" : {
            "table" : "search_api_db_product_display",
            "column" : "changed_2",
            "type" : "date",
            "boost" : "1.0"
          },
          "field_product" : {
            "table" : "search_api_db_product_display",
            "column" : "field_product",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_tags" : {
            "table" : "search_api_db_product_display_field_tags_2",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_pd_category" : {
            "table" : "search_api_db_product_display_field_pd_category_2",
            "column" : "value",
            "type" : "list\\u003Cinteger\\u003E",
            "boost" : "1.0"
          },
          "field_pd_type" : {
            "table" : "search_api_db_product_display",
            "column" : "field_pd_type_2",
            "type" : "integer",
            "boost" : "1.0"
          },
          "title_field" : {
            "table" : "search_api_db_product_display",
            "column" : "title_field_2",
            "type" : "string",
            "boost" : "5.0"
          },
          "field_pd_kampagne" : {
            "table" : "search_api_db_product_display",
            "column" : "field_pd_kampagne_2",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_product_display",
            "column" : "search_api_language_2",
            "type" : "string",
            "boost" : "1.0"
          },
          "body:value" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_product:title" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_product:field_product_subtitle" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "3.0"
          },
          "field_pd_description:value" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "field_tags:name" : {
            "table" : "search_api_db_product_display_field_tags_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_pd_category:name" : {
            "table" : "search_api_db_product_display_field_pd_category_name",
            "column" : "value",
            "type" : "list\\u003Cstring\\u003E",
            "boost" : "1.0"
          },
          "field_pd_type:name" : {
            "table" : "search_api_db_product_display",
            "column" : "field_pd_type_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_pd_kampagne:name" : {
            "table" : "search_api_db_product_display",
            "column" : "field_pd_kampagne_name",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_product:commerce_price:amount_decimal" : {
            "table" : "search_api_db_product_display",
            "column" : "field_product_commerce_price_amount_decimal",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_aggregation_6" : {
            "table" : "search_api_db_product_display",
            "column" : "search_api_aggregation_6",
            "type" : "integer",
            "boost" : "1.0"
          },
          "search_api_aggregation_1" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_aggregation_2" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_aggregation_3" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_aggregation_4" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          },
          "search_api_aggregation_5" : {
            "table" : "search_api_db_product_display_text",
            "type" : "text",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1"
  }');
  $items['solr'] = entity_import('search_api_server', '{
    "name" : "SOLR",
    "machine_name" : "solr",
    "description" : "",
    "class" : "search_api_solr_service",
    "options" : {
      "clean_ids" : true,
      "scheme" : "http",
      "host" : "127.0.0.1",
      "port" : "8088",
      "path" : "\\/solr\\/o4507778742a",
      "http_user" : "",
      "http_pass" : "",
      "excerpt" : 0,
      "retrieve_data" : 0,
      "highlight_data" : 0,
      "http_method" : "AUTO"
    },
    "enabled" : "0"
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
  $items['product_display__search_api_aggregation_6'] = entity_import('search_api_sort', '{
    "index_id" : "product_display",
    "field" : "search_api_aggregation_6",
    "name" : "Preis",
    "enabled" : "0",
    "weight" : "2",
    "identifier" : "product_display__search_api_aggregation_6",
    "default_sort" : "0",
    "default_sort_no_terms" : "0",
    "default_order" : "desc",
    "options" : { "field_name" : "Preis" }
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

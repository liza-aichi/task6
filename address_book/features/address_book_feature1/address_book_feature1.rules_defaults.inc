<?php
/**
 * @file
 * address_book_feature1.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function address_book_feature1_default_rules_configuration() {
  $items = array();
  $items['rules_breadcrumps'] = entity_import('rules_config', '{ "rules_breadcrumps" : {
      "LABEL" : "add alias",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "path", "address_book" ],
      "ON" : { "address_book_insert" : [], "address_book_update" : [] },
      "DO" : [
        { "path_alias" : {
            "source" : "address-book\\/[address-book:cid]\\/contact",
            "alias" : "address-book\\/contact\\/[address-book:title]-[address-book:field-last-name1]"
          }
        }
      ]
    }
  }');
  return $items;
}

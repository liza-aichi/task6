<?php

/**
 * @file
 * Contains CRUD functions for address_book entities.
 */

/**
 * Create address book entity.
 *
 * @param $values
 * @return bool
 */
function address_book_create($values) {

    return entity_create('address_book', $values);
}

/**
 * Save address book entity.
 *
 * @param $contact
 * @return bool
 */
function address_book_save($contact) {

    return entity_save('address_book', $contact);
}

/**
 * Load multiple entities.
 *
 *
 * @param bool $ids
 * @param array $conditions
 * @return mixed
 */
function address_book_load_multiple($ids = FALSE, $conditions = array()) {
    return entity_load('address_book', $ids, $conditions);
}

/**
 * Laod single contact by its id.
 *
 * @param $id
 * @return mixed
 */
function address_book_load($id) {
    return current(address_book_load_multiple((array) $id));
}

/**
 * Delete multiple contacts at once.
 *
 * @param $ids
 * @return bool
 */
function address_book_delete_multiple($ids) {
    return entity_delete_multiple('address_book', $ids);
}

/**
 * Delete single contact by its id.
 *
 * @param $id
 * @return bool
 */
function address_book_delete($id) {
    return entity_delete('address_book', $id);
}

/**
 * View address book entity.
 *
 * @param $contact
 * @param string $view_mode
 * @param null $langcode
 * @return bool
 */
function address_book_view($contact, $view_mode = 'full', $langcode = NULL) {
    return entity_view('address_book', array($contact), $view_mode, $langcode);
}
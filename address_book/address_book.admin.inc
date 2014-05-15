<?php


/**
 * @file
 * Contains Recipe entity add/edit form.
 */
module_load_include('crud.inc', 'address-book');
/**
 * Add/edit form callback for contact entities.
 *
 * @param $form
 * @param $form_state
 * @param $contact
 * @param string $op
 */
function address_book_form($form, &$form_state, $contact, $op = 'edit')
{
    global $user;


    $form['title'] = array(
        '#type' => 'textfield',
        '#title' => t('First name'),
        '#required' => TRUE,
        '#default_value' => isset($contact->title) ? $contact->title : '',
    );


    field_attach_form('address_book', $contact, $form, $form_state);
    hide($form['field_user_id1']);
    if ($op != 'edit') {
        $form['buttons'] = array(
            '#type' => 'fieldset',
            '#attributes' => array('class' => array('container-inline')),
            '#weight' => 67,
        );

        $form['buttons']['back'] = array(

            '#type' =>
                'button',

            '#value' => t('Back'),


        );
        $form['buttons']['next'] = array(

            '#type' =>
                'button',

            '#value' => t('Next'),

            '#weight' => 67,

        );
        $form['buttons']['actions'] = array(
            '#type' => 'actions',
            'submit' => array(
                '#type' => 'submit',
                '#value' => t('Save'),

            ),
            '#weight' => 67,

        );
        $form['name_fields'] = array(
            '#type' => 'fieldset',
            '#title' => t('Name'),
            '#weight' => 50,
            '#collapsible' => false,
            '#collapsed' => false,
        );

        $form['info_fields'] = array(
            '#type' => 'fieldset',
            '#title' => t('Info'),
            '#weight' => 65,
            '#collapsible' => false,
            '#collapsed' => false,
        );

        $form['name_fields']['title'] = $form['title'];
        $form['name_fields']['field_last_name1'] = $form['field_last_name1'];
        $form['name_fields']['field_category1'] = $form['field_category1'];

        $form['info_fields']['field_email'] = $form['field_email'];
        $form['info_fields']['field_phone1'] = $form['field_phone1'];
        $form['info_fields']['field_birthday1'] = $form['field_birthday1'];
        $form['info_fields']['field_notes1'] = $form['field_notes1'];

        unset($form['title']);
        unset($form['field_last_name1']);
        unset($form['field_category1']);

        unset($form['field_email']);
        unset($form['field_phone1']);
        unset($form['field_birthday1']);
        unset($form['field_notes1']);
    } else
        $form['actions'] = array(
            '#type' => 'actions',
            'submit' => array(
                '#type' => 'submit',
                '#value' => t('Save'),

            ),
            '#weight' => 67,

        );


    return $form;
}

/**
 * Submit callback for "contact_form".
 *
 * @param $form
 * @param $form_state
 */
function address_book_form_submit($form, &$form_state)
{
    global $user;
    $contact = entity_ui_form_submit_build_entity($form, $form_state);

    $contact->field_user_id1['und'] = array(0 => array('value' => $user->uid));

    $contact->save();
    drupal_goto('address-book');
    drupal_set_message(
        t(
            'Contact @first_name @last_name was saved', array(
            '@first_name' => $form_state['values']['title'],
            '@last_name' => $form_state['values']['field_last_name1']['und'][0]['value']
        ))
    );


}

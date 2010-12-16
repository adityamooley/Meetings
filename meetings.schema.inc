<?php

function _meetings_cck_export() {

$content['type']  = array (
  'name' => 'Meeting',
  'type' => 'meeting',
  'description' => 'Add details of meeting here.',
  'title_label' => 'Title',
  'body_label' => 'Body',
  'min_word_count' => '0',
  'help' => '',
  'node_options' => 
  array (
    'status' => true,
    'promote' => true,
    'sticky' => false,
    'revision' => false,
  ),
  'old_type' => 'meeting',
  'orig_type' => '',
  'module' => 'node',
  'custom' => '1',
  'modified' => '1',
  'locked' => '0',
  'comment' => '2',
  'comment_default_mode' => '4',
  'comment_default_order' => '1',
  'comment_default_per_page' => '50',
  'comment_controls' => '3',
  'comment_anonymous' => 0,
  'comment_subject_field' => '1',
  'comment_preview' => '1',
  'comment_form_location' => '0',
  'ant' => '0',
  'ant_pattern' => '',
  'ant_php' => 0,
);
$content['fields']  = array (
  0 => 
  array (
    'label' => 'Meeting Date',
    'field_name' => 'field_meeting_date',
    'type' => 'date',
    'widget_type' => 'date_popup',
    'change' => 'Change basic information',
    'weight' => '-4',
    'default_value' => 'now',
    'default_value2' => 'same',
    'default_value_code' => '',
    'default_value_code2' => '',
    'input_format' => 'j F, Y',
    'input_format_custom' => '',
    'year_range' => '-3:+3',
    'increment' => '1',
    'advanced' => 
    array (
      'label_position' => 'above',
      'text_parts' => 
      array (
        'year' => 0,
        'month' => 0,
        'day' => 0,
        'hour' => 0,
        'minute' => 0,
        'second' => 0,
      ),
    ),
    'label_position' => 'above',
    'text_parts' => 
    array (
    ),
    'description' => '',
    'group' => false,
    'required' => 0,
    'multiple' => '0',
    'repeat' => 0,
    'todate' => '',
    'granularity' => 
    array (
      'year' => 'year',
      'month' => 'month',
      'day' => 'day',
    ),
    'default_format' => 'medium',
    'tz_handling' => 'none',
    'timezone_db' => '',
    'op' => 'Save field settings',
    'module' => 'date',
    'widget_module' => 'date',
    'columns' => 
    array (
      'value' => 
      array (
        'type' => 'varchar',
        'length' => 20,
        'not null' => false,
        'sortable' => true,
        'views' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '31',
      'parent' => '',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
  1 => 
  array (
    'label' => 'Attended By',
    'field_name' => 'field_users',
    'type' => 'userreference',
    'widget_type' => 'userreference_select',
    'change' => 'Change basic information',
    'weight' => '-1',
    'autocomplete_match' => 'contains',
    'size' => 60,
    'reverse_link' => 0,
    'description' => 'Select the users who attended the meeting',
    'default_value' => 
    array (
      0 => 
      array (
        'uid' => '',
      ),
    ),
    'default_value_php' => '',
    'default_value_widget' => 
    array (
      'field_users' => 
      array (
        0 => 
        array (
          'uid' => '',
        ),
        'uid' => 
        array (
          'uid' => 
          array (
            0 => '',
          ),
        ),
      ),
    ),
    'group' => false,
    'required' => 1,
    'multiple' => '1',
    'referenceable_roles' => 
    array (
      2 => 2,
      3 => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'op' => 'Save field settings',
    'module' => 'userreference',
    'widget_module' => 'userreference',
    'columns' => 
    array (
      'uid' => 
      array (
        'type' => 'int',
        'unsigned' => true,
        'not null' => false,
        'index' => true,
      ),
    ),
    'display_settings' => 
    array (
      'weight' => '39',
      'parent' => '',
      'label' => 
      array (
        'format' => 'above',
      ),
      'teaser' => 
      array (
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'full' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      4 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      2 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      3 => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => 
      array (
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
  ),
);
$content['extra']  = array (
  'title' => '-5',
  'body_field' => '-2',
  'revision_information' => '1',
  'author' => '2',
  'options' => '3',
  'comment_settings' => '4',
  'menu' => '-3',
  'workflow' => '0',
);

return $content;
}
<?php

/** 
 * @file
 * CA_Video_Gallery admin system, which overrides the default feature settings.
 * 
 * Will allow us to make visual changes to the feature without overriding the
 * actual feature.
 */

/**
 * Defines the menu for overriding news feature settings.
 * 
 * @return
 *   Fully formed Form API array.
 */
function ca_video_gallery_settings_form() {
  $form = array();
  
  $form['ca_video_gallery_menu_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Menu Title'),
    '#default_value' => variable_get('ca_video_gallery_menu_title', 'Videos'),
    '#required' => TRUE,
    '#description' => t('What would you like the menu title to be?'),
  );
  $form['ca_video_gallery_panel_title'] = array(
    '#type' => 'textfield',
    '#title' => t('Panel Title'),
    '#default_value' => variable_get('ca_video_gallery_panel_title', 'Videos'),
    '#required' => TRUE,
    '#description' => t('What would you like the panel title to be?'),
  );
  $form['ca_video_gallery_list_count'] = array(
    '#type' => 'textfield',
    '#title' => t('Videos per page'),
    '#default_value' => variable_get('ca_video_gallery_list_count', 20),
    '#required' => TRUE,
    '#description' => t('How many videos would you like displayed per page?'),
  );
  $form['ca_video_gallery_list_template'] = array(
    '#type' => 'select',
    '#title' => t('Video Gallery\'s list template'),
    '#options' => array(
      'ca_video_gallery_list_template_one' => t('Template one'),
      'ca_video_gallery_list_template_two' => t('Template two'),
      'ca_video_gallery_list_template_three' => t('Template three'),
      'ca_video_gallery_list_template_four' => t('Template four'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_video_gallery_list_template', 'ca_video_gallery_list_template_one'),
  );
  $form['ca_video_gallery_node_template'] = array(
    '#type' => 'select',
    '#title' => t('Video Gallery\'s node template'),
    '#options' => array(
      'ca_video_gallery_node_template_one' => t('Template one'),
      'ca_video_gallery_node_template_two' => t('Template two'),
    ),
    '#required' => TRUE,
    '#default_value' => variable_get('ca_video_gallery_node_template', 'ca_video_gallery_node_template_one'),
  );
  
  return system_settings_form($form);
}


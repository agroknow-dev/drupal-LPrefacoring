<?php
/**
 * @file
 * feature_land_portal_2.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function feature_land_portal_2_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: devel.
  $menus['devel'] = array(
    'menu_name' => 'devel',
    'title' => 'Development',
    'description' => 'Development link',
  );
  // Exported menu: features.
  $menus['features'] = array(
    'menu_name' => 'features',
    'title' => 'Features',
    'description' => 'Menu items for any enabled features.',
  );
  // Exported menu: landbook-menu.
  $menus['landbook-menu'] = array(
    'menu_name' => 'landbook-menu',
    'title' => 'Get information by country',
    'description' => 'The Land Book presents comprehensive country and thematic pages with linked open data on land governance from diverse sources around the world.',
  );
  // Exported menu: landdebate-menu.
  $menus['landdebate-menu'] = array(
    'menu_name' => 'landdebate-menu',
    'title' => 'Debate with others',
    'description' => 'Land debate serves to stimulate debate with others in the land community through sharing news and events, blog posts and online discussions.',
  );
  // Exported menu: main-menu.
  $menus['main-menu'] = array(
    'menu_name' => 'main-menu',
    'title' => 'Main menu',
    'description' => 'The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.',
  );
  // Exported menu: management.
  $menus['management'] = array(
    'menu_name' => 'management',
    'title' => 'Management',
    'description' => 'The <em>Management</em> menu contains links for administrative tasks.',
  );
  // Exported menu: menu-consult-the-library.
  $menus['menu-consult-the-library'] = array(
    'menu_name' => 'menu-consult-the-library',
    'title' => 'Consult the Library',
    'description' => 'The Land Library will be the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.',
  );
  // Exported menu: navigation.
  $menus['navigation'] = array(
    'menu_name' => 'navigation',
    'title' => 'Navigation',
    'description' => 'The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Consult the Library');
  t('Debate with others');
  t('Development');
  t('Development link');
  t('Features');
  t('Get information by country');
  t('Land debate serves to stimulate debate with others in the land community through sharing news and events, blog posts and online discussions.');
  t('Main menu');
  t('Management');
  t('Menu items for any enabled features.');
  t('Navigation');
  t('The <em>Main</em> menu is used on many sites to show the major sections of the site, often in a top navigation bar.');
  t('The <em>Management</em> menu contains links for administrative tasks.');
  t('The <em>Navigation</em> menu contains links intended for site visitors. Links are added to the <em>Navigation</em> menu automatically by some modules.');
  t('The Land Book presents comprehensive country and thematic pages with linked open data on land governance from diverse sources around the world.');
  t('The Land Library will be the authoritative virtual repository of land-related information, including peer-reviewed publications, policies, maps, and multimedia content.');


  return $menus;
}

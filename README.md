# Drupal 7: Base Setup with VS standard features

## Setup:
1. Download the lastest version of Drupal: `$ drush dl drupal`
2. Rename the directory (ie: drupal-7.43) to local
3. Go to /sites in the local drupal site and remove it.
4. Still in the /sites directory clone this directory. `$ git clone git@github.com:variantstudios/vs-drupal-7-initial-setup.git`
5. Clean everything up with the following commands `$ mv vs-drupal-7-initial-setup/all all && rm -rf vs-drupal-7-initial-setup`
6. Create your local database
7. Setup the host account
8. Go to http://local.replace-me.com/install.php and select 'Mimimal' and click 'Save and continue', 'English' is selected and click 'Save and continue', fill in the newly created database name, username and password and click 'Save and continue', fill out the final screen with your site's name, user one access info, etc and click save to complete the setup.
9. After the initial site install has been completed run the following drush command: `$ drush en features`
10. Then go to /admin/structure/features and enable all of the features under 'Content Types' and the 'Defaults' tab and click 'Save settings'.
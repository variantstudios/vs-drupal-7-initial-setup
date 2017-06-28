# Drupal 7: Base Setup with VS standard features

## Setup:
1. In your client's folder/directory, download the lastest version of Drupal 7: `$ drush dl drupal-7`
2. Rename the directory (ie: drupal-7.XX) to local/
3. Go to /sites directory in the local drupal site and remove the /all directory.
4. Still in the /sites directory clone this directory. `$ git clone git@github.com:variantstudios/vs-drupal-7-initial-setup.git`
5. Clean everything up with the following commands `$ rm -rf all && mv vs-drupal-7-initial-setup/all all && rm -rf vs-drupal-7-initial-setup`
6. Create your local database
7. Setup the host account
8. Go to /install.php and select 'Mimimal' and click 'Save and continue', 'English' is selected and click 'Save and continue', fill in the newly created database name, username and password and click 'Save and continue', fill out the final screen with your site's name, user one access info, etc and click save to complete the setup.
9. After the initial site install has been completed run the following drush command: `$ drush en features`
10. Then go to /admin/structure/features and enable all of the features under 'Content Types' and the 'Defaults' tab and click 'Save settings'.
11. Go to the following page to rebuild permissions /admin/reports/status/rebuild and click 'Rebuild permissions'.
12. On the command line run `$ drush fra -y` to revert all of the features.

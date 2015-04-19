Bienvenue dans le dépôt du groupe F du projet Terrarium 2015, concernant les travaux effectués lors des séances de développement embarqué et de TDD au sein de l'IUT d'Aix-en-Provence.

Le groupe est composé de JACOBELLI Jordan, COADALEN Kenny, HAMZA Hichem.

Notre groupe a pour mission de developper l'application carte SD qui sera nécessaire à l'élaboration du Terrarium, en effet, l'utilité de la carte SD pour le terrarium est l'enregsitrement des fichiers logs, qui contiendront les différentes entrées et sorties.

La compilation de nuttx n'étant pas oppérationelle sur notre serveur, on ne peut fournir l'application nuttx.
C'est pourquoi on fournit ici le projet de TDD, dans lequel nous avons repris le fonctionnement 
de la carte SD à l'aide de Mocks. Ce projet se trouve dans le dossier FirstBlood.

Les sources se trouvent donc dans le dossier FirstBlood/src/FirstBlood
Les includes dans FirstBlood/include/FirstBlood
Les tests dans FirstBlood/tests/FirstBlood

Pour build :

$ cd FirstBlood                                             
$ mkdir build                                
$ cd build                                           
$ cmake ..                                              
$ make                                                          
$ ./bin/RunAllTests                                                                        



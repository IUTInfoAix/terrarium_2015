La compilation de nuttx n'étant pas oppérationelle sur mon serveur, je ne peux fournir d'application incluse dans nuttx

Je vous fournis le dossier de TDD dont le projet se nomme 'FirstBlood'
Les sources se trouvent donc dans le dossier FirstBlood/src/FirstBlood
Les includes dans FirstBlood/include/FirstBlood
Les tests dans FirstBlood/tests/FirstBlood

Pour build :

cd FirstBlood
mkdir build
cd build
cmake ..
make
./bin/RunAllTests

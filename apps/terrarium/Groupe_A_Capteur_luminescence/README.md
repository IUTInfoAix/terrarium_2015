Le fichier FichierFictif.c dans le dossier actuel ressemblerait à ce que devrait être le fichier a flashé sur la carte.
Pour build :
cd Embedded
rm -rf build
mkdir build
cd build
cmake ..
make
./bin/RunAllTests
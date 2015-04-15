Pour build
cd Embedded
rm -rf build
mkdir build
cd build
cmake ..
make
./bin/RunAllTests
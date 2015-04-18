project (FirstBlood)

# include project source
include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/FirstBlood)

# include CppUTest headers
include_directories($ENV{CPPUTEST_HOME}/include)

# add cpputest library
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
             IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/libCppUTest.a)

add_library(FirstBloodTest ./FirstBlood/FirstBloodTest.cpp)
add_library(MocSdcardStart ./../src/FirstBlood/moc_sdcard_start.c)

add_executable(RunAllTests RunAllTests.cpp)
target_link_libraries(RunAllTests imp_cpputest FirstBloodTest FirstBlood MocSdcardStart)


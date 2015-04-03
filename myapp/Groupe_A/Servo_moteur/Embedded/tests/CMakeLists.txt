project (Embedded)

# include project source
include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/Embedded)

# include CppUTest headers
include_directories($ENV{CPPUTEST_HOME}/include)

# add cpputest library
add_library(imp_cpputest STATIC IMPORTED)
set_property(TARGET imp_cpputest PROPERTY
             IMPORTED_LOCATION $ENV{CPPUTEST_HOME}/libCppUTest.a)

add_library(EmbeddedTest ./Embedded/Mock_Test_Servomotor.cpp)

add_executable(RunAllTests RunAllTests.cpp)
target_link_libraries(RunAllTests imp_cpputest EmbeddedTest Embedded)


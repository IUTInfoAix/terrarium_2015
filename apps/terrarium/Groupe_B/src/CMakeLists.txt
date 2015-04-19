project (Embarq)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/Embarq/)

add_library(Embarq ./Embarq/DHT_11.cpp ./Embarq/mock.cpp)
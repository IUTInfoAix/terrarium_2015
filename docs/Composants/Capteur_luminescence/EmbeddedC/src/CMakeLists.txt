project (EmbeddedC)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/EmbeddedC/)

add_library(EmbeddedC ./Embedded/Hello.c)
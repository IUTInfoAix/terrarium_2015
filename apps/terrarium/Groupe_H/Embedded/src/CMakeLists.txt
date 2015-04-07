project (Embedded)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/Embedded/)

add_library(Embedded ./Embedded/esp_8266.c)

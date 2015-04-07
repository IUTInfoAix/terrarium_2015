project (Embedded)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/Embedded/)
include_directories($(PROJECT_SOURCE_DIR}/../../../../system/zmodem/host/)


add_library(Embedded ./Embedded/esp8266.c)

project (FirstBlood)

include_directories(${PROJECT_SOURCE_DIR}/../include)
include_directories(${PROJECT_SOURCE_DIR}/../include/FirstBlood/)

add_library(FirstBlood ./FirstBlood/FirstBlood.c ./FirstBlood/moc_sdcard_start.c)

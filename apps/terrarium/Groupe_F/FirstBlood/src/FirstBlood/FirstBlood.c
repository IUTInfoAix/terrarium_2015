#include "FirstBlood.h"
#include "string.h"

int sdCard(int argc, char* argv[], struct functions f)
{
  if(argc <= 2)
    return SDCARD_ERROR_ARGS;
  if(strcmp(argv[1], "start") == 0) {
    if(argc < 3)
	     return SDCARD_ERROR_ARGS;
    int ret = f.my_sdcard_start(atoi(argv[2]));
    if(ret != SDCARD_OK)
	     return SDCARD_ERROR_SLOT;
    return SDCARD_OK;
  }
  else if(strcmp(argv[1], "writeLog") == 0) {
    if(argc < 3)
        return SDCARD_ERROR_ARGS;
    char* filename = "logSdcard.log";
    FILE* file = fopen(filename, "a");
    if(file == NULL)
        return SDCARD_ERROR_OPEN_FILE;
    int ret = fprintf(file, "%s\n", argv[2]);
    fclose(file);
    return ret;
  }
  else if(strcmp(argv[1], "readLog") == 0) {
    char * filename = "logSdcard.log";
    FILE* file = fopen(filename, "r");
    if(file == NULL)
        return SDCARD_ERROR_OPEN_FILE;
    char ch;
    while( ( ch = fgetc(file) ) != EOF )
      strcat(argv[2], (char*)ch);
    fclose(file);
    return SDCARD_OK;
  }
  return SDCARD_ERROR_ARGS;
}

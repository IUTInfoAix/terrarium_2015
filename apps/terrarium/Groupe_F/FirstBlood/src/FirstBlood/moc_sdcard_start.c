#include "moc_sdcard_start.h"

int sdcard_start(int slotno)
{
  int ret;
  if(slotno < 0 || slotno > SDCARD_MAX_SLOT)
    return SDCARD_ERROR_SLOT;
  return SDCARD_OK;
}

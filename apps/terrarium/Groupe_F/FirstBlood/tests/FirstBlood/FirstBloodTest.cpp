#include "CppUTest/TestHarness.h"

extern "C"
{
  #include "FirstBlood.h"
  #include "moc_sdcard_start.h"
}

TEST_GROUP(FirstBlood)
{
  void setup()
  {
  }

  void teardown()
  {

  }
};

TEST(FirstBlood, TestNotEnoughArgs)
{
  struct functions f;
  f.my_sdcard_start = &sdcard_start;
  char* param[1] = {"sdCard"};
  CHECK_EQUAL(SDCARD_ERROR_ARGS, sdCard(1, param, f));
}

TEST(FirstBlood, TestStartCardSlotNeg)
{
  struct functions f;
  f.my_sdcard_start = sdcard_start;
  char* params[3] = {"sdCard", "start", "-1"};
  CHECK_EQUAL(SDCARD_ERROR_SLOT, sdCard(3, params, f));
}

TEST(FirstBlood, TestStartCardSlotOverMax)
{
  struct functions f;
  f.my_sdcard_start = sdcard_start;
  char* params[3] = {"sdCard", "start", "100"};
  CHECK_EQUAL(SDCARD_ERROR_SLOT, sdCard(3, params, f));
}

TEST(FirstBlood, TestWriteArgs)
{
  struct functions f;
  f.my_sdcard_start = sdcard_start;
  char* params[3] = {"sdCard", "writeLog"};
  CHECK_EQUAL(SDCARD_ERROR_ARGS, sdCard(2, params, f));
}

TEST(FirstBlood, TestWriteLog)
{
  struct functions f;
  f.my_sdcard_start = sdcard_start;
  char* params[3] = {"sdCard", "writeLog", "salut"};
  CHECK_EQUAL(6, sdCard(3, params, f));
}

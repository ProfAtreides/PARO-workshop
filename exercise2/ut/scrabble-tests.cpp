#include "gtest/gtest.h"
#include "scrabble.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest)
{
  ASSERT_TRUE(true);
}

TEST(DayOfYearTestSuite, example)
{
  ASSERT_EQ(giveScore("CABBAGE"), 14);
}


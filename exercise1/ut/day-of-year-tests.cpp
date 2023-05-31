#include "gtest/gtest.h"
#include "day-of-year.hpp"

struct DayOfYearTestSuite {};

TEST(DayOfYearTestSuite, dummyTest)
{
  ASSERT_TRUE(true);
}

TEST(DayOfYearTestSuite, January1stIsFitstDayOfYear)
{
  ASSERT_EQ(dayOfYear(1, 1, 2020), 1);
}

TEST(DayOfYearTestSuite, doesLeapYearWork)
{
  ASSERT_EQ(dayOfYear(3,1,2020),61);
}

TEST(DayOfYearTestSuite, newYear)
{
  ASSERT_EQ(dayOfYear(12,31,2020),366);
}
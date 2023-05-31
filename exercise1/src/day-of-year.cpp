#include "day-of-year.hpp"

int dayOfYear(int month, int dayOfMonth, int year) {

    for(int i =1;i<month;i++)
    {
        dayOfMonth+=dayInEachMonth[i-1];
        if(i == 2 && year%4 == 0 && year % 100 != 0) dayOfMonth+=1;
    }

    return dayOfMonth;
}


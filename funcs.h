#pragma once
#include "time.h"
void printTime(Time time);
int getMinutes(Time time);

//Part A
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);

//Part B
Time addMinutes(Time time0, int min);
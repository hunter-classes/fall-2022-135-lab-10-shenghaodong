#pragma once
#include "classes.h"

//For Testing and other stuff
void printTime(Time time);
int getMinutes(Time time);
void printMovie(Movie mv);
Time getTime(int minutes);

//Part A
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);

//Part B
Time addMinutes(Time time0, int min);

//Part C
std::string getTimeSlot(Timeslot ts);
#pragma once
#include "classes.h"

//For Testing and other stuff
std::string getTime(Time time);
int getMinutes(Time time);
std::string getMovie(Movie mv);

//Part A
int minutesSinceMidnight(Time time);
int minutesUntil(Time earlier, Time later);

//Part B
Time addMinutes(Time time0, int min);

//Part C
std::string getTimeSlot(TimeSlot ts);

//Part D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie);

//Part E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2); 
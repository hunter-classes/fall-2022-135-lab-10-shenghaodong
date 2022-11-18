#include <iostream>
#include "time.h"

void printTime(Time time){
    std::cout << time.h << ":" << time.m;
}

int getMinutes(Time time){
    return (time.h * 60) + time.m;
}

//Part A
int minutesSinceMidnight(Time time){
    int returnVal = 1440 - ((time.h * 60) + time.m);
    // while(returnVal >= 1440){
    //     returnVal = 1440 - returnVal;
    // };
    return returnVal;
}

int minutesUntil(Time earlier, Time later){
    int early = minutesSinceMidnight(earlier);
    int late = minutesSinceMidnight(later);
    return early - late;
}

//Part B
Time addMinutes(Time time0, int min){
    int totalMin = getMinutes(time0) + min;
    Time returnTime;
    returnTime.h = totalMin/60;
    returnTime.m = totalMin%60;
    return returnTime;
}
    //addMinutes({8, 10}, 75)
    // ==> should return {9, 25}

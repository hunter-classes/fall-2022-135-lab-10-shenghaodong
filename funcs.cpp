#include <iostream>
#include "time.h"

void printTime(Time time){
    std::cout << time.h << ":" << time.m;
}

//Part A
int minutesSinceMidnight(Time time){
    int returnVal = 1440 - (time.h * 60) + time.m;
    while(returnVal >= 1440){
        returnVal = 1440 - returnVal;
    };
    return returnVal;
}

int minutesUntil(Time earlier, Time later){
    return 1;
}
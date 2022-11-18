#include <iostream>
#include "funcs.h"

int main(){
    Time now;    // creates a new variable (or object)
    now.h = 17;  // assigns its hours field
    now.m = 45;  // assigns its minutes field 
    //printTime(now);
    //std::cout << "\n\n";

    //Part A
    std::cout << minutesSinceMidnight(now) << std::endl;
    int test = minutesUntil( {10, 30}, {13, 40} );
    std::cout << test << std::endl;

    //Part B


    //Part C
    return 0;
}
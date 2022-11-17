#include <iostream>
#include "funcs.h"

int main(){
    Time now;    // creates a new variable (or object)
    now.h = 17;  // assigns its hours field
    now.m = 45;  // assigns its minutes field 
    printTime(now);
    std::cout << "\n\n";
    std::cout << minutesSinceMidnight(now) << std::endl;
    return 0;
}
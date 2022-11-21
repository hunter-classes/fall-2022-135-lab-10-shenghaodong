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
    Time minutesAdded;
    minutesAdded = addMinutes({8, 10}, 75);
    std::cout << "Part B: " << getTime(minutesAdded) << std::endl;
    // ==> should return {9, 25}


    //Part C
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    std::cout << getTimeSlot(morning) << std::endl;
    //std::string getTimeSlot(TimeSlot ts)

    //Part D
    TimeSlot nextTime = scheduleAfter(morning, movie2);
    std::cout << getTimeSlot(nextTime) << std::endl;

    //Part E
    //Find end and start minutes and compare them

    return 0;
}
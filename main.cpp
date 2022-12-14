#include <iostream>
#include "funcs.h"

int main(){
    Time now;    // creates a new variable (or object)
    now.h = 17;  // assigns its hours field
    now.m = 45;  // assigns its minutes field 
    //printTime(now);
    //std::cout << "\n\n";

    //Part A
    std::cout << "Part A: " << std::endl;
    std::cout << minutesSinceMidnight(now) << std::endl;
    int test = minutesUntil( {10, 30}, {13, 40} );
    std::cout << test << std::endl;

    //Part B
    Time minutesAdded;
    minutesAdded = addMinutes({8, 10}, 75);
    std::cout << "\nPart B: " << std::endl;
    std::cout << getTime(minutesAdded) << std::endl;
    // ==> should return {9, 25}


    //Part C
    std::cout << "\nPart C: " << std::endl;
    Movie movie1 = {"Back to the Future", COMEDY, 116};
    Movie movie2 = {"Black Panther", ACTION, 134};

    TimeSlot morning = {movie1, {9, 15}};  
    TimeSlot daytime = {movie2, {12, 15}}; 
    TimeSlot evening = {movie2, {16, 45}}; 
    std::cout << getTimeSlot(morning) << std::endl;
    //std::string getTimeSlot(TimeSlot ts)

    //Part D
    std::cout << "\nPart D: " << std::endl;
    TimeSlot nextTime = scheduleAfter(morning, movie2);
    std::cout << getTimeSlot(nextTime) << std::endl;

    //Part E
    //Find end and start minutes and compare them
    //bool timeOverlap(TimeSlot ts1, TimeSlot ts2)
    //True = 1; False = 0;
    TimeSlot overlap1 = {movie1, {9, 15}};  
    TimeSlot overlap2 = {movie2, {10, 15}};
    bool testOne = timeOverlap(overlap1, overlap2);
    std::cout << "\nPart E: " << testOne << std::endl;

    return 0;
}
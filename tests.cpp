#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

// Tests
TEST_CASE("Task A"){
    CHECK(minutesSinceMidnight({3, 9}) == 189);
    CHECK(minutesSinceMidnight({2, 7}) == 127);
    CHECK(minutesUntil({9, 20}, {10, 20}) == 60);
    CHECK(minutesUntil({7, 30}, {8,0}) == 30);
}

TEST_CASE("Task B"){
    Time testA = addMinutes({7, 30}, 30);
    Time testB = addMinutes({6, 50}, 40);
    CHECK(getTime(testA) == "8:00");
    CHECK(getTime(testB) == "7:30");
}

TEST_CASE("Task C"){
    CHECK();
    //std::string getTimeSlot(TimeSlot ts);
}

// TEST_CASE("Task D"){
//     CHECK();
// }

// TEST_CASE("Task E"){
//     CHECK();
// }


/*

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

*/
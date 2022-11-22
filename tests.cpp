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
    //enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};
    //Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11] <-- Format
    Movie movie1 = {"Weathering With You", ROMANCE, 114};
    Movie movie2 = {"A Silent Voice", DRAMA, 129};
    TimeSlot testA = {movie1, {9, 15}};  
    TimeSlot testB = {movie2, {12, 45}}; 
    CHECK(getTimeSlot(testA) == "Weathering With You ROMANCE (114 min) [starts at 9:15, ends by 11:09]");
    CHECK(getTimeSlot(testB) == "A Silent Voice DRAMA (129 min) [starts at 12:45, ends by 14:54]");
}

TEST_CASE("Task D"){
    Movie movie1 = {"Weathering With You", ROMANCE, 114};
    Movie movie2 = {"A Silent Voice", DRAMA, 129};
    TimeSlot testA = {movie1, {9, 15}};  
    TimeSlot testB = {movie2, {12, 45}}; 
    TimeSlot resultA = scheduleAfter(testA, movie2);
    TimeSlot resultB = scheduleAfter(testB, movie1);
    CHECK(getTime(resultA.startTime) == "11:09");
    CHECK(getTime(resultB.startTime) == "14:54");
}   

TEST_CASE("Task E"){
    Movie movie1 = {"Weathering With You", ROMANCE, 114};
    Movie movie2 = {"A Silent Voice", DRAMA, 129};
    TimeSlot overlap1 = {movie1, {12, 45}};  
    TimeSlot overlap2 = {movie2, {13, 15}};
    TimeSlot overlap3 = {movie1, {17, 39}};
    bool testOne = timeOverlap(overlap1, overlap2);
    bool testTwo = timeOverlap(overlap1, overlap3);
    bool testThree = timeOverlap(overlap2, overlap3);
    CHECK(testOne == true);
    CHECK(testTwo == false);
    CHECK(testThree == false);
}

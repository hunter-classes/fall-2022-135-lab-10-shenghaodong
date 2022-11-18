#include <iostream>
#include "classes.h"

//Functions for testing
int getMinutes(Time time){
    return (time.h * 60) + time.m;
}

std::string getTime(Time time){
    int total = getMinutes(time);
    std::string returnVal = std::to_string(total/60) + ":" + std::to_string(total%60);
    return returnVal;
}

std::string getMovie(Movie mv){
    std::string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    std::string returnVal;

    returnVal = (std::string)mv.title + " " + g + " (" + std::to_string(mv.duration) + " min)";
    return returnVal;
}

//Part A
int minutesSinceMidnight(Time time){
    int returnVal = 1440 - ((time.h * 60) + time.m);
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

//Part C
//the printTimeSlot function should be renamed getTimeSlot and it should return a std::string. Run from main and test via doctests.
std::string getTimeSlot(TimeSlot ts){
    std::string returnTimeSlot;
    //Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11] <-- Format
    Movie movie = ts.movie;
    Time endTime = addMinutes(ts.startTime, movie.duration);
    returnTimeSlot = getMovie(movie) + " [starts at " + getTime(ts.startTime) + ", ends by " + getTime(endTime) + "]";
    return returnTimeSlot;

}
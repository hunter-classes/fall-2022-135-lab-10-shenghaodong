#include <iostream>
#include "classes.h"

//Functions for testing
int minutesUntilMidnight(Time time){
    int returnVal = 1440 - ((time.h * 60) + time.m);
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
    return ((time.h * 60) + time.m);
}

//Test
std::string getTime(Time time){
    int total = minutesSinceMidnight(time);
    std::string returnVal = std::to_string(total/60) + ":";
    if((total%60) < 10 && std::to_string(total%60) != "0"){
        returnVal += "0";
    }
    returnVal += std::to_string(total%60);
    if(std::to_string(total%60) == "0"){
        returnVal += "0";
    }
    return returnVal;
}
//Test

int minutesUntil(Time earlier, Time later){
    int early = minutesUntilMidnight(earlier);
    int late = minutesUntilMidnight(later);
    return early - late;
}

//Part B
Time addMinutes(Time time0, int min){
    int totalMin = minutesSinceMidnight(time0) + min;
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

//Part D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot returnVal;
    Movie movie = ts.movie;
    Time endTime = addMinutes(ts.startTime, movie.duration);
    returnVal.startTime = endTime;
    returnVal.movie = nextMovie;
    return returnVal;
}

//Part E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    Movie movie1 = ts1.movie;
    Movie movie2 = ts2.movie;
    int time1 = minutesSinceMidnight(ts1.startTime);
    int time2 = minutesSinceMidnight(ts2.startTime);
    //time, int
    int endTime1 = minutesSinceMidnight(addMinutes(ts1.startTime, movie1.duration));
    int endTime2 = minutesSinceMidnight(addMinutes(ts2.startTime, movie2.duration));
    if(time1 - time2 < 0){//Time 1 is earlier
        if(time2 < endTime1){
            return true;
        }
    }else if(time2 - time1 < 0){//Time 2 is earlier
        if(time1 < endTime2){
            return true;
        }
    }
    return false;
}
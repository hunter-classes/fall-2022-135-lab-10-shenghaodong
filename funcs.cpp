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

//Part D
TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot returnVal;
    Movie movie = ts.movie;
    Time endTime = addMinutes(ts.startTime, movie.duration);
    returnVal.startTime = endTime;
    returnVal.movie = nextMovie;
    return returnVal;
}

/*
enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Movie { 
public: 
    std::string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};
*/

//Part E
bool timeOverlap(TimeSlot ts1, TimeSlot ts2);{
    Movie movie1 = ts1.movie;
    Movie movie2 = ts2.movie;
    int time1 = getMinutes(ts1.startTime);
    int time2 = getMinutes(ts2.startTime);
    int endTime1 = addMinutes(ts.startTime, movie1.duration);
    int endTime2 = addMinutes(ts.startTime, movie2.duration);

    return true;
}
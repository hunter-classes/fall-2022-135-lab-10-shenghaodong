#include <iostream>
#include "classes.h"

//Functions for testing
void printTime(Time time){
    std::cout << time.h << ":" << time.m;
}

int getMinutes(Time time){
    return (time.h * 60) + time.m;
}

Time getTime(int minutes){
    
}

void printMovie(Movie mv){
    string g;
    switch (mv.genre) {
        case ACTION   : g = "ACTION"; break;
        case COMEDY   : g = "COMEDY"; break;
        case DRAMA    : g = "DRAMA";  break;
        case ROMANCE  : g = "ROMANCE"; break;
        case THRILLER : g = "THRILLER"; break;
    }
    cout << mv.title << " " << g << " (" << mv.duration << " min)";
}

//Part A
int minutesSinceMidnight(Time time){
    int returnVal = 1440 - ((time.h * 60) + time.m);
    // while(returnVal >= 1440){
    //     returnVal = 1440 - returnVal;
    // };
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
std::string getTimeSlot(Timeslot ts){
    std::string returnTimeSlot;
    //Back to the Future COMEDY (116 min) [starts at 9:15, ends by 11:11] <-- Format
    Movie movie = ts.Movie;
    Time time = ts.Time;
    //Back to the Future COMEDY (116 min) [starts at 9:15, ends by 
    std::string += movie.title << " " << movie.genre << " (" << movie.duration << ")" + "[starts at " << printTime(time) << ", ends by ";

}
// class Time { 
// public:
//     int h;
//     int m;
// };

// class Movie { 
// public: 
//     std::string title;
//     Genre genre;     // only one genre per movie
//     int duration;    // in minutes
// };

// class TimeSlot { 
// public: 
//     Movie movie;     // what movie
//     Time startTime;  // when it starts
// };
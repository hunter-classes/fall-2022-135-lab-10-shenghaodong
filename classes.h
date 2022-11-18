enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER};

class Time { 
public:
    int h;
    int m;
};

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
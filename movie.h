//movie.h

#include "media.h"

class movie: public media {
        char* director;         //director of movie
        int duration;           //duration of movie
        int rating;             //rating of movie
    public:
        movie(int movieYear, char* movieTitle, char* movieDirector, int movieDuration, int movieRating);
        char* getDirector();    //gets director of movie
        int getDuration();      //gets duration of movie
        int getRating();        //gets rating of movie
};

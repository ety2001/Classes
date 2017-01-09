//movie.cpp
//implements the movie class
#include "movie.h"

movie::movie(int movieYear, char* movieTitle, char* movieDirector, int movieDuration, int movieRating) : media(3, movieYear, movieTitle) {
    director = movieDirector;
    duration = movieDuration;
    rating = movieRating;
};

char* movie::getDirector() {
    return director;
};

int movie::getDuration() {
    return duration;
};

int movie::getRating() {
    return rating;
};

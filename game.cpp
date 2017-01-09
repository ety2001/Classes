//game.cpp
//implementation of game class
#include "game.h"

game::game(int gameYear, char* gameTitle, char* gamePublisher, int gameRating) : media(1, gameYear, gameTitle) {
    publisher = gamePublisher;
    rating = gameRating;
};

char* game::getPublisher() {
    return publisher;
};

int game::getRating() {
    return rating;
};

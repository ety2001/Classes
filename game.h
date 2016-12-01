//game.h

#include "media.h"

class game: public media {
        char* publisher;        //publisher of game
        int rating;             //rating of game
    public:
        game(int gameYear, char* gameTitle, char* gamePublisher, int gameRating);
        char* getPublisher();   //gets publisher of game
        int getRating();        //gets rating of game
};

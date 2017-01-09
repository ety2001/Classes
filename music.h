//music.h
//specific form of media class with artist duration publisher
#include "media.h"

class music: public media {
        char* artist;           //artist of music
        int duration;           //duration of music
        char* publisher;        //publisher of music
    public:
        music(int musicYear, char* musicTitle, char* musicArtist, int musicDuration, char* musicPublisher);
        char* getArtist();      //gets artist of music
        int getDuration();      //gets duration of music
        char* getPublisher();   //gets publisher of music
};
        

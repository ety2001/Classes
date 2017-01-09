//music.cpp
//implements the music class
#include "music.h"

music::music(int musicYear, char* musicTitle, char* musicArtist, int musicDuration, char* musicPublisher) : media(2, musicYear, musicTitle) {
    artist = musicArtist;
    duration = musicDuration;
    publisher = musicPublisher;
};

char* music::getArtist() {
    return artist;
};

int music::getDuration() {
    return duration;
};

char* music::getPublisher() {
    return publisher;
};

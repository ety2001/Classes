// music.cpp

#include <iostream>
#include <string.h>
#include "music.h"

using namespace std;

music::music(char* newtitle, char* newartist, int newyear, int newduration, char* newpublisher) {
	title = newtitle;
	artist = newartist;
	year = newyear;
	duration = newduration;
	publisher = newpublisher;
}

char music::gettitle() {
	return title;
}

char music::getartist() {
	return artist;
}

int music::getyear() {
	return year;
}

float music::getduration() {
	return duration;
}

char music::getpublisher() {
	return publisher;
}

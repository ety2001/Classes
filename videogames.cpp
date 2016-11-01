// videogames.cpp

#include <iostream>
#include <string.h>
#include "videogames.h"

using namespace std;

videogames::videogames(char* newtitle, int* newyear, char* newpublisher, float* newrating) {
	title = newtitle;
	year = newyear;
	publisher = newpublisher;
	rating = newrating;	
}

char videogames::gettitle() {
	return title;
}

int videogames::getyear() {
	return year;
}

char videogames::getpublisher() {
	return publisher;
}

float videogames::getrating() {
	return rating;
}

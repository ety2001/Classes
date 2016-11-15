//movies.cpp

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

movies::movies(char* newtitle, char* newdirector, int newyear, int newduration, int newrating) {
	title = newtitle;
	director = newdirector;
	year = newyear;
	duration = newduration;
	rating = newrating;
}

char movies::gettitle(){
	return title;
}
char movies::getdirector(){
	return director;
}
int movies::getyear(){
	return year;
}
float movies::getduration(){
	return duration;
}
float movies::getrating(){
	return rating;
}

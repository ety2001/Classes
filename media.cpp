//media.cpp

#include "media.h"

media::media(int mediaType, int mediaYear, char* mediaTitle){
	type = mediaType;
	year = mediaYear;
	title = mediaTitle;
};

media::~media(){
	cout << title << " deleted" << endl;
};

int media::getType() {
    return type;
};

int media::getYear() {
    return year;
};

char* media::getTitle() {
    return title;
};

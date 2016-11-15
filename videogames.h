// videogames.h

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class videogames {
	public:
		videogames();
		videogames(char*, int, char*, int);
		char* gettitle();
		int getyear();
		char* getpublisher();
		int getrating();
	private:
		char* publisher;
		int rating;

};

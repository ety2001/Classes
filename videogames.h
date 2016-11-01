// videogames.h

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class videogames {
	public:
		videogames();
		videogames(char*, int*, char*, float*);
		char* gettitle();
		int* getyear();
		char* getpublisher();
		float* getrating();
	private:
		char* publisher;
		float* rating;

};

// music.h

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class music {
	public:
		music();
		music(char*, char*, int*, float*, char*);
		char* gettitle();
		char* getartist();
		int* getyear();
		float* getduration();
		char* getpublisher();
	private: 
		char* getartist();
		float* getduration();
		char* getpublisher();
};

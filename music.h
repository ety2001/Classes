// music.h

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class music {
	public:
		music();
		music(char*, char*, int, int, char*);
		char* gettitle();
		char* getartist();
		int getyear();
		int getduration();
		char* getpublisher();
	private: 
		char* getartist();
		int getduration();
		char* getpublisher();
};

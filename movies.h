//movies.h

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class movies{
	public:
		movies();
		movies(char*, char*, int, int, int);
		char* gettitle();
		char* getdirector();
		int getyear();
		int getduration();
		int getrating();
	private:
		char* getdirector();
		int getduration();
		int getrating();
};

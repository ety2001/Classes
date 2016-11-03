//movies.h

#include <iostream>
#include <string.h>
#include "media.h"

using namespace std;

class movies{
	public:
		movies();
		movies(char*, char*, int*, float*, float*);
		char* gettitle();
		char* getdirector();
		int* getyear();
		float* getduration();
		float* getrating();
	private:
		char* getdirector();
		float* getduration();
		float* getrating();
};

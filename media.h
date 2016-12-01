//media.h

#ifndef MEDIA_H
#define MEDIA_H

//media class includes game, music, movie
class media {    
	int type;           //type of the media: 1 - game, 2 - music, 3 - movie
        int year;           //year media is published
        char* title;        //title of media
    public:
	media(int mediaType, int mediaYear, char* mediaTitle);
        int getType();      //gets type of media 
        int getYear();      //gets year published
        char* getTitle();   //gets title of media
};

#endif

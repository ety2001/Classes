//main.cpp

#include <iostream>
#include <vector>
#include <string.h>
#include "game.h"
#include "music.h"
#include "movie.h"

using namespace std;

int main () {
    vector<media*> storage;
	char input[100];
	int mainYear;
	char* mainTitle;
	char* mainPublisher;
	int mainRating;
	char* mainArtist;
	int mainDuration;
	char* mainDirector;

	while(true){
		cout << "What is your command? Enter QUIT ADD SEARCH or DELETE" << endl;
		cin >> input;
		if(strcmp(input, "QUIT") == 0) {
		// quit program
			break;
		}
		else if(strcmp(input, "ADD") == 0) {
		// add a media
			cout << "What type of media would you like to add? Enter game, music, or movie" << endl;
			cin >> input;
			if(strcmp(input, "game") == 0) {
				mainTitle = new char[100];
				mainPublisher = new char[100];
				cout << "Enter year, title, publisher, and rating separated by spaces" << endl;
				cin >> mainYear >> mainTitle >> mainPublisher >> mainRating;
				game* agame = new game(mainYear, mainTitle, mainPublisher, mainRating);
				storage.push_back (agame);
			}
			else if(strcmp(input, "music") == 0) {
				mainTitle = new char[100];
				mainArtist = new char[100];
				mainPublisher = new char[100];
				cout << "Enter year, title, artist, duration, and publisher separated by spaces" << endl;
				cin >> mainYear >> mainTitle >> mainArtist >> mainDuration >>  mainPublisher;
				music* amusic = new music(mainYear, mainTitle, mainArtist, mainDuration, mainPublisher);
				storage.push_back (amusic);
			}
			else if(strcmp(input, "movie") == 0) {
				mainTitle = new char[100];
				mainDirector = new char[100];
				cout << "Enter year, title, director, duration, and rating separated by spaces" << endl;
				cin >> mainYear >> mainTitle >> mainDirector >> mainDuration >> mainRating;
				movie* amovie = new movie(mainYear, mainTitle, mainDirector, mainDuration, mainRating);
				storage.push_back (amovie);
			}
		}
		else if(strcmp(input, "SEARCH") == 0 || strcmp(input, "DELETE") == 0) {
		//search for or delete a media either by title or by year
			bool delete = false;
			if(strcmp(input, "DELETE") == 0) {
				delete = true;
			}
			cout << "By title or year?" << endl;
			cin >> input;
			if(strcmp(input, "title") == 0) {
				cout << "What is the title" << endl;
				cin >> input;
				for(int i = 0; i < storage.size(); i++){
					if(strcmp(storage[i]->getTitle(), input) == 0){
						if(storage[i]->getType() == 1){
							game* agame = (game*)storage[i];
							cout << "Game: " << agame->getYear() << ", " << input << ", " << agame->getPublisher() << ", " << agame->getRating() << endl;
						}
						else if(storage[i]->getType() == 2){
							music* amusic = (music*)storage[i];
							cout << "Music: " << amusic->getYear() << ", " << input << ", " << amusic->getArtist() << ", " << amusic->getDuration() << ", " << amusic->getPublisher() << endl;
						}
						else if(storage[i]->getType() == 3){
							movie* amovie = (movie*)storage[i];
							cout << "Movie: " << amovie->getYear() << ", " << input << ", " << amovie->getDirector() << ", " << amovie->getDuration() << ", " << amovie->getRating() << endl;
						}
					}
				}
				if(delete == true){
					cout << "Are you sure you want to delete these?" << endl;
				}
			}
			else if (strcmp(input, "year") == 0) {
				cout << "What is the year" << endl;
				int inputyr;
				cin >> inputyr;
				for(int i = 0; i < storage.size(); i++) {
					if(storage[i]->getYear() == inputyr){
						if(storage[i]->getType() == 1){
							game* agame = (game*)storage[i];
							cout << "Game: " << inputyr << ", " << agame->getTitle() << ", " << agame->getPublisher() << ", " << agame->getRating() << endl;
						}
						else if(storage[i]->getType() == 2){
							music* amusic = (music*)storage[i];
							cout << "Music: " << inputyr << ", " << amusic->getTitle() << ", " << amusic->getArtist() << ", " << amusic->getDuration() << ", " << amusic->getPublisher() << endl;
						}
						else if(storage[i]->getType() == 3){
							movie* amovie = (movie*)storage[i];
							cout << "Movie: " << inputyr << ", " << amovie->getTitle() << ", " << amovie->getDirector() << ", " << amovie->getDuration() << ", " << amovie->getRating() << endl;
						}
					}
				}
			}
		}
	}
    	return 0;

}

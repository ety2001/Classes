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
				cout << "Enter year" << endl; 
				cin >> mainYear;
				cout << "Enter title" << endl;
				cin.ignore();
				cin.getline(mainTitle, 100);
				cout << "Enter publisher" << endl;
				cin >> mainPublisher; 
				cout << "Enter rating" << endl;
				cin >> mainRating;
				game* agame = new game(mainYear, mainTitle, mainPublisher, mainRating);
				storage.push_back (agame);
			}
			else if(strcmp(input, "music") == 0) {
				mainTitle = new char[100];
				mainArtist = new char[100];
				mainPublisher = new char[100];
				cout << "Enter year" << endl;
				cin >> mainYear;
				cout << "Enter title" << endl;
				cin.ignore();
				cin.getline(mainTitle, 100);
			       	cout << "Enter artist" << endl;
				cin >> mainArtist;
				cout << "Enter duration" << endl;
				cin >> mainDuration;
				cout << "Enter publisher" << endl;
				cin >> mainPublisher;
				music* amusic = new music(mainYear, mainTitle, mainArtist, mainDuration, mainPublisher);
				storage.push_back (amusic);
			}
			else if(strcmp(input, "movie") == 0) {
				mainTitle = new char[100];
				mainDirector = new char[100];
				cout << "Enter year" << endl;
				cin >> mainYear;
				cout << "Enter title" << endl;
				cin.ignore();
				cin.getline(mainTitle, 100);
				cout << "Enter director" << endl;
				cin >> mainDirector;
				cout << "Emter duration" << endl;
				cin >> mainDuration;
				cout << "Enter rating" << endl;
				cin >> mainRating;
				movie* amovie = new movie(mainYear, mainTitle, mainDirector, mainDuration, mainRating);
				storage.push_back (amovie);
			}
		}
		else if(strcmp(input, "SEARCH") == 0 || strcmp(input, "DELETE") == 0) {
		//search for or delete a media either by title or by year
			bool dodelete = false;
			vector <int> todelete;
			if(strcmp(input, "DELETE") == 0) {
				dodelete = true;
			}
			cout << "By title or year?" << endl;
			cin >> input;
			bool searchtitle = false;
			int inputyr;
			if(strcmp(input, "title") == 0) {
				searchtitle = true;
				cout << "What is the title" << endl;
				cin.ignore();
				cin.getline(input, 100);
			}
			else{	
				cout << "What is the year" << endl;
				cin >> inputyr;	
			}
			
			for(int i = 0; i < storage.size(); i++){
				if((searchtitle == true && strcmp(storage[i]->getTitle(), input) == 0) || (searchtitle == false && storage[i]->getYear() == inputyr)){
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

					if(dodelete == true){
						todelete.push_back (i);
					}
				}
			}

			if(dodelete == true){
				cout << "Are you sure you want to delete these? Enter yes or no" << endl;
				cin >> input;
				if (strcmp(input, "yes") == 0){
					for(int k = todelete.size() - 1; k>=0; k--){
						media* amedia = storage[k];
						storage.erase (storage.begin() + k);
						delete amedia;
					}
				}

			}	
		}
	}
    	return 0;
}

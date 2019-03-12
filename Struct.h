//This header stores all the structs for this project

#pragma once
#include <iostream>
#include <string>
using namespace std;

//Programming challenge 8  Movie Data
struct MovieData {
	string Title,
		   Director;
	int YearRelease,
	    RunningTime;
	MovieData() {
		Title = "Deadpool";
		Director = "Ryan Reynolds";
		YearRelease = 2016;
		RunningTime = 120;
	}

};

void displayMovieData(MovieData data) {
	cout << "Title: " << data.Title << endl;;
	cout << "Director: " << data.Director << endl;
	cout << "Year Released: " << data.YearRelease << endl;
	cout << "Running time (min): " << data.RunningTime << endl;
}


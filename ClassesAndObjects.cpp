// ClassesAndObjects.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "ClassesAndObjects.h"
#include "Struct.h"
#include <iostream>
using namespace std;

int DetermineDOM(int month) {
	int day;
	if (month == 2) {
		do {
			cout << "Enter a day between 1 - 28: ";
			cin >> day;
		} while (day < 1 || day > 28);
		return day;
	}
	if ((month == 4 || month == 6) || (month == 9 || month == 11)) {
		do {
			cout << "Enter a day between 1 - 30: ";
			cin >> day;
		} while (day < 1 || day > 30);
		return day;
	}
	else {
		do {
			cout << "Enter a day between 1 - 31: ";
			cin >> day;
		} while (day < 1 || day > 31);
		return day;
	}
	
}

int main()
{
	//Pogramming challenge 1
	int month = 1, day, year;
	Date date1;
	
	date1.print_Date1();
	date1.print_Date2();
	date1.print_Date3();

	do {
		cout << "Enter a month in numeric form (1-12): ";
		cin >> month;
	} while (month < 1 || month > 12);
	
	day = DetermineDOM(month);

	cout << "Enter a year: ";
	cin >> year;

	Date date2(month,day, year);
	date2.print_Date1();
	date2.print_Date2();
	date2.print_Date3();

	//Programming challenge 4
	Car car1;
	Car car2(2005, "Honda Civic");

	car1.accelerate();
	cout << car1.getYear() << " " << car1.getMaker() << " speed after calling acceleration once: " << 
		car1.getSpeed() << endl;
	car1.brake();
	cout << car1.getYear() << " " << car1.getMaker() << " speed after calling brake once: " << 
		car1.getSpeed() << endl;

	car2.accelerate();
	cout << car2.getYear() << " " << car2.getMaker() << " Speed after calling accerleration once: " <<
		car2.getSpeed() << endl;
	car2.brake();
	cout << car2.getYear() << " " << car2.getMaker() << " Speed after calling accerleration once: " <<
		car2.getSpeed() << endl;

	//Programming Challenge 6
	Tips Tips1;
	Tips Tips2(.1); //10 percent tax rate
	float MealCost;

	cout << "Enter the cost of total Meal 1: ";
		cin >> MealCost;
	cout << Tips1.computeTip(MealCost) << endl;

	cout << "Enter the cost of total Meal 2: ";
	cin >> MealCost;
	cout << Tips2.computeTip(MealCost) << endl;

	//Programming Challenge 7

	int inventoryNum;
	int quantity;
	double cost;

	Inventory Inventory1;
	cout << "Inventory1\n";
	cout << "Item Number: " << Inventory1.getItemNumber() << endl;
	cout << "Quantity: " << Inventory1.getQuantity() << endl;
	cout << "Cost: " << Inventory1.getCost() << endl;

	do {
		cout << "Enter the item number for Inventory2: ";
		cin >> inventoryNum;
		if (inventoryNum < 0) { cout << "Error: item number cannot be a negative"; }
	} while (inventoryNum < 0);
	
	cout << "Enter the quantity of the item: ";
	cin >> quantity;
	cout << "Enter the cost of the item: ";
	cin >> cost;

	Inventory Inventory2(inventoryNum,quantity,cost);
	cout << "Inventory2\n";
	cout << "Item Number: " << Inventory2.getItemNumber() << endl;
	cout << "Quantity: " << Inventory2.getQuantity() << endl;
	cout << "Cost: " << Inventory2.getCost() << endl;

	 //Programming Challenge 8 Movie Data
	
	MovieData movie1;
	displayMovieData(movie1);

	MovieData movie2;
	cout << "Enter the name of movie: ";
	getline(cin, movie2.Title); //able to read an entire line of string
	cout << "Enter the name of director of movie: ";
	getline(cin,movie2.Director); 
	cout << "Enter the year released of movie: ";
	cin >> movie2.YearRelease;
	cout << "Enter the runnning time of movie: ";
	cin >> movie2.RunningTime;
	displayMovieData(movie2);





	//Programming Challenge 16 Coin challenge
	Coin coin1;
	size_t headCount = 0, tailCount = 0;

	cout << coin1.getSideUp() << endl;

	for (int i = 0; i < 20; i++) {
		coin1.toss();
		if (coin1.getSideUp() == "heads") { headCount++; }
		else tailCount++;
		cout << i << " ---> " << coin1.getSideUp() << endl;
	}

	cout << "Heads: " << headCount << endl;
	cout << "Tails: " << tailCount << endl;


	//Programming Challenge 17 
	Coin quarter;
	Coin dime;
	Coin nickel;
	float dollar = 0.00;
	size_t round = 1; //will count the round
	srand(time(NULL)); // will help generate new random numbers

	cout << "welcome to coin game\n";
	do {
		cout << "Round " << round << endl;
		PlayGameCoin(quarter,dime,nickel, dollar);
		cout << dollar << endl;
		system("pause");
		round++;
	} while (dollar < 1.00);

	cout << "$" << dollar << endl;
	if (dollar == 1.00) { cout << "Congratulations, you won\n"; }
	else 
		cout << "Sorry you lose.\n";

	return 0;
}


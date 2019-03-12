//This header stores all the classes for this projecgt
#pragma once
#include <iostream>
#include <string>
#include <time.h>
using namespace std;

//Programming Challenge 1 Date
class Date {
private:
	int month; 
	int day;
	int year;
	
public:
	Date();
	Date(int,int,int);
	void print_Date1();
	void print_Date2();
	void print_Date3();
	const string MonthArr[12] = { "January", "February", "March", "April",
							"May", "June", "July", "August",
						    "September", "October", "November" ,"December" }; 

};

Date::Date() {
	month = 1;
	day = 1;
	year = 2001;
}
Date::Date(int m, int d, int y) {
	month = m;
	day = d;
	year = y;
}

void Date::print_Date1() {cout << month << "/" << day << "/" << year << endl;}
void Date::print_Date2() {cout << MonthArr[month - 1] << " " << day << "," << year << endl;}
void Date::print_Date3() {cout << day << " " << MonthArr[month - 1] << " " << year << endl; }


//Prgoramming challenge 4 Car 
class Car {
private:
	int year;
	string maker;
	int speed;

public:
	Car();
	Car(int,string); //accepts the year model and name of the maker
	int getYear();
	string getMaker();
	int getSpeed();
	void accelerate();
	void brake();

};

Car::Car() {
	year = 2015;
	maker = "Honda CRZ";
	speed = 0; //speed starts at zero
}
Car::Car(int y, string m) {
	year = y;
	maker = m;
	speed = 0;
}
int Car::getYear() {return year;}
string Car::getMaker() { return maker; }
int Car::getSpeed() { return speed; }
void Car::accelerate() {speed += 5;}
void Car::brake() {speed -= 5;}

//Programming challenge 6 : Gratuity calculator
class Tips {
private:
	float taxRate;
	float tipRate;

public:
	Tips();
	Tips(float);
	double computeTip(double);
};

Tips::Tips() {taxRate = 0.065;}
Tips::Tips(float tR) { taxRate = tR; }

double Tips::computeTip(double totalMeal) {
	
	int input;
	double tip;

	cout << "Select Tip percentage\n"; // display choices to give a certain amount of tax
	cout << "1. 10% \n";
	cout << "2. 15% \n";
	cout << "3. 20% \n";
	cin >> input;

	if (input == 1) {
		tip = .1 * (totalMeal + (totalMeal*taxRate));
		return tip;
	}
	if (input == 2) {
		tip = .15 * (totalMeal + (totalMeal*taxRate));
		return tip;
	}
	else {
		tip = .2 * (totalMeal + (totalMeal*taxRate));
		return tip;
	}

}

//Programming challenge 7 Inventory Class
class Inventory {
private:
	int itemNumber;
	int quantity;
	double cost;

public:
	Inventory();
	Inventory(int,int,double);
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	int getItemNumber();
	int getQuantity();
	double getCost();
	double getTotalCost();
};

Inventory::Inventory() {
	itemNumber = 0;
	quantity = 0;
	cost = 0;
}

Inventory::Inventory(int IN,int Q, double C) {
	itemNumber = IN;
	quantity = Q;
	cost = C;
}
void Inventory::setItemNumber(int IN) { itemNumber = IN; }
void Inventory::setQuantity(int Q) { quantity = Q; }
void Inventory::setCost(double C) { cost = C; }
int Inventory::getItemNumber() { return itemNumber; }
int Inventory::getQuantity() { return quantity; }
double Inventory::getCost() { return cost; }
double Inventory::getTotalCost() {
	double totalCost = cost * quantity;
	return totalCost;
}

//Programming challenge 16 Coin Game
const string HEADS = "heads";

class Coin {
private:
	string sideUp;
public:
	Coin();
	void toss();
	string getSideUp();
};

Coin::Coin() { sideUp = "heads"; }
void Coin::toss() {
	int tossNum = rand() % 2;
	if (tossNum == 1) { sideUp = "tails"; }
	else sideUp = "heads";
}
string Coin::getSideUp() { return sideUp; }

void PlayGameCoin(Coin q, Coin d, Coin n, float &dollar){
	const float QUARTER = 0.25;
	const float DIME = 0.10;
	const float NICKEL = 0.05;

	q.toss();
	d.toss();
	n.toss();

	if (q.getSideUp() == HEADS) { dollar += QUARTER; }
	if (d.getSideUp() == HEADS) { dollar += DIME; }
	if (n.getSideUp() == HEADS) { dollar += NICKEL; }
}
 
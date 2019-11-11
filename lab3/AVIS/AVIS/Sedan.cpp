#include "pch.h"
#include "Sedan.h"
#include <iostream>
using namespace std;


Sedan::Sedan()
{
	this->setModelName("Sedan");
	this->setNumOfSeats(5);
	this->setGasolinePerKm(75);
	this->amountOfCars = amountOfCars;
	
}


Sedan::~Sedan()
{
}
void Sedan::addVehicle() {
	int amount;
	float cost;
	cout << "Number of Sedans available" << endl;
	cin >> amount;
	setAmountOfCars(amount);
	cout << "Hourly price for renting a Sedan" << endl;
	cin >> cost;
	setHourlyPrice(cost);
}

int Sedan::getAmountOfCars()
{
	return amountOfCars;
}

void Sedan::setAmountOfCars(int amountOfCars)
{
	this->amountOfCars = amountOfCars;
}






//getters and setters


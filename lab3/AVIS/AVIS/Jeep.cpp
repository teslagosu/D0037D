#include "pch.h"
#include "Jeep.h"
#include "Vehicle.h"
#include <iostream>
using namespace std;


Jeep::Jeep()
{
	this->setNumOfSeats(6);
	this->setGasolinePerKm(120);
	this->setModelName("Jeep");
	this->amountOfCars = amountOfCars;
}


Jeep::~Jeep()
{
}

void Jeep::addVehicle() {
	int amount;
	float cost;
	cout << "Number of Jeeps available" << endl;
	cin >> amount;
	setAmountOfCars(amount);
	cout << "Hourly price for renting a Jeep" << endl;
	cin >> cost;
	setHourlyPrice(cost);
}
int Jeep::getAmountOfCars()
{
	return amountOfCars;
}

void Jeep::setAmountOfCars(int amountOfCars)
{
	this->amountOfCars = amountOfCars;
}

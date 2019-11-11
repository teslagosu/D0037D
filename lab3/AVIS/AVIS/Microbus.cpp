#include "pch.h"
#include "Microbus.h"
#include <iostream>
using namespace std;
#include "Vehicle.h"



Microbus::Microbus()
{
	this->setNumOfSeats(10);
	this->setGasolinePerKm(100);
	this->setModelName("Microbus");
	this->amountOfCars = amountOfCars;
}


Microbus::~Microbus()
{
}

void Microbus::addVehicle() {
	
	
	int amount;
	float cost;
	cout << "Number of Microbusses available" << endl;
	cin >> amount;
	setAmountOfCars(amount);
	cout << "Hourly price for renting a MicroBuss" << endl;
	cin >> cost;
	setHourlyPrice(cost);
}

int Microbus::getAmountOfCars()
{
	return amountOfCars;
}

void Microbus::setAmountOfCars(int amountOfCars)
{
	this->amountOfCars = amountOfCars;
}


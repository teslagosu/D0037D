#include "pch.h"
#include <iostream>
#include "Vehicle.h"
#include <string>
#include "Sedan.h"
#include "Jeep.h"
#include "Microbus.h"

using namespace std;
Sedan s;
Microbus m;
Jeep j;


//constrcutors
Vehicle::Vehicle() {
	//this->vehicleList = vehicleList;
	
	this->numOfSeats = numOfSeats;
	this->gasolinePerKm = gasolinePerKm;
	this->modelName = modelName;
	this->hourlyPrice = hourlyPrice;
	
}

Vehicle::Vehicle(int numOfSeats, float gasolinePerKm, std::string modelName) {
	this->numOfSeats = numOfSeats;
	this->gasolinePerKm = gasolinePerKm;
	this->modelName = modelName;
}




void Vehicle::test() {
	cout << "test123" << endl;
}
void Vehicle::addVehicle() {

}



//getters and setters;
void Vehicle::setNumOfSeats(int numOfSeats)
{
	this->numOfSeats = numOfSeats;
}

int Vehicle::getNumOfSeats()
{
	return numOfSeats;
}

void Vehicle::setHourlyPrice(float hourlyPrice)
{
	this->hourlyPrice = hourlyPrice;
}

float Vehicle::getHourlyPrice()
{
	return hourlyPrice;
}

void Vehicle::setGasolinePerKm(float gasolinePerKm)
{
	this->gasolinePerKm = gasolinePerKm;
}

float Vehicle::getGasolinePerKm()
{
	return gasolinePerKm;
}

void Vehicle::setModelName(std::string modelName)
{
	this->modelName = modelName;
}

std::string Vehicle::getModelName()
{
	return modelName;

}
int Vehicle::getAmountOfCars()
{
	return amountOfCars;
}

void Vehicle::setAmountOfCars(int amountOfCars)
{
	this->amountOfCars = amountOfCars;
}



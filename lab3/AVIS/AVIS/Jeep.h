#pragma once
#include "Vehicle.h"
class Jeep :
	public Vehicle
{
private:
	int amountOfCars;
public:
	Jeep();
	virtual ~Jeep();
	void addVehicle();
	void setAmountOfCars(int amountOfCars);
	int getAmountOfCars();
};


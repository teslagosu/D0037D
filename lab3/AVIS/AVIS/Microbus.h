#pragma once
#include "Vehicle.h"
class Microbus : public Vehicle
{
private: 
	int amountOfCars;
	
public:
	Microbus();
	virtual ~Microbus();
	void addVehicle();
	void setAmountOfCars(int amountOfCars);
	int getAmountOfCars();
};


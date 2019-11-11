#pragma once
#include "Vehicle.h"
class Sedan : public Vehicle
{
private:
	int amountOfCars;
	
public:
	
	Sedan();
	virtual ~Sedan();
	void addVehicle();
	void setAmountOfCars(int amountOfCars);
	int getAmountOfCars();
	
	
	

};


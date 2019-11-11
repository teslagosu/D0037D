#pragma once
#include <string>
#include <vector>


class Vehicle 
{
private:
	float numOfSeats;
	float hourlyPrice;
	float gasolinePerKm;
	std::string modelName;
	int amountOfCars;
	
public:
	//virtual ~Vehicle();
	
	//Vehicle(Sedan s);
	Vehicle();
	Vehicle(int setNumOfSeats, float gasolinePerKm, std::string modelName);
	std::vector <Vehicle> vehicleList;
	void setNumOfSeats(int numOfSeats);
	int getNumOfSeats();
	void setHourlyPrice(float hourlyPrice);
	float getHourlyPrice();
	void setGasolinePerKm(float gasolinePerKm);
	float getGasolinePerKm();
	void setModelName(std::string modelName);
	std::string getModelName();
	int getAmountOfCars();
	void setAmountOfCars(int s);
	
	
	void addVehicle();
	void test();
	
};

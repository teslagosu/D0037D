#include "pch.h"
#include "Car.h"
#include "Engine.h"
#include <string>
#include <iostream>
#include "Tire.h"
#include <vector>
#include "person.h"



Car::Car()
{
	
}

void  Car::setBrand(std::string s) {
	this->brand = s;
}

std::string Car::getBrand() {
	return brand;
}

std::vector<Tire> Car::getTire() {
	return tireList;
	

}





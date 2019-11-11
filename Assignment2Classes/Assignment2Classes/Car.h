#pragma once
#include <vector>
#include <string>
#include "Engine.h"
#include "Person.h"
#include "Tire.h"

class Car
{
public:
	
	Car();
	Engine engine;
	std::vector<Tire> tireList;
	std::string brand;
	Person owner;
	void setBrand(std::string s);
	std::string getBrand();
	std::vector<Tire> getTire();
	
};


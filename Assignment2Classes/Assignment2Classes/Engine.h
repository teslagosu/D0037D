#pragma once
#include <string>
class Engine
{
private:
	std::string modelname;
	float horsepower;
	int number_of_cylinder;
public:
	
	Engine();
	void setModelName(std::string s);
	std::string getModelName();
	void setHorsePower(float w);
	float getHorsePower();
	void setNumberOfCylinder(int rim_diameter);
	int getNumberOfCylinder();
	
	
};


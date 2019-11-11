#pragma once
#include <string>
class Tire
{
private:
	std::string brand_name;
	float width;
	int rim_diameter;

public:
	Tire();
	Tire(std::string name, float w, int rimdia);
	void setBrandName(std::string s);
	std::string getBrandName();
	void setWidth(float w);
	float getWidth();
	void setRimDiameter(int rim_diameter);
	int getRimDiameter();
	
};


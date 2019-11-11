#include "pch.h"
#include "Tire.h"
#include <string>


Tire::Tire()
{
}
Tire::Tire(std::string s, float w, int i) {
	this->brand_name = s;
	this->width = w;
	this->rim_diameter = i;
}

void Tire::setBrandName(std::string s) {
	this->brand_name = s;
}
std::string Tire::getBrandName() {
	return brand_name;
}
void Tire::setWidth(float w) {
	this->width = w;
}
float Tire::getWidth() {
	return width;
}
void Tire::setRimDiameter(int rimdiameter) {
	this->rim_diameter = rimdiameter;
}
int Tire::getRimDiameter() {
	return rim_diameter;
}




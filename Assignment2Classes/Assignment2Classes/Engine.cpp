#include "pch.h"
#include "Engine.h"
#include <string>




Engine::Engine()
{

}
void Engine::setModelName(std::string s) {
	this->modelname = s;
}

std::string Engine::getModelName() {
	return modelname;
}
void Engine::setHorsePower(float w) {
	this->horsepower = w;
}
float Engine::getHorsePower() {
	return horsepower;
}
void Engine::setNumberOfCylinder(int n) {
	this->number_of_cylinder = n;
}
int Engine::getNumberOfCylinder() {
	return number_of_cylinder;
}




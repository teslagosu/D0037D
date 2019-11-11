#include "pch.h"
#include "Person.h"
#include <string>



Person::Person()
{
}

void Person::setName(std::string n) {
	this->name = n;

}

std::string Person::getName() {
	return name;
}

void Person::setAdress(std::string a) {
	this->adress = a;
}

std::string Person::getAdress() {
	return adress;
}

void Person::setContactNumber(std::string ca) {
	this->contact_number = ca;
}

std::string Person::getContactNumber() {
	return contact_number;
}









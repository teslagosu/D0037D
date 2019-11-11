#pragma once
#include <string>


class Person
{
private:
	std::string name;
	std::string adress;
	std::string contact_number;
public:
	Person();
	void setName(std::string name);
	std::string getName();
	void setAdress(std::string adress);
	std::string getAdress();
	void setContactNumber(std::string cn);
	std::string getContactNumber();
	
	

};


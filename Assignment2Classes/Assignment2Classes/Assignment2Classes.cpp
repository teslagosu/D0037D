#include "pch.h"
#include <iostream>
#include "Engine.h"
#include "Person.h"
#include "Tire.h"
#include <string>
#include "Car.h"
#include <istream>
#include <ostream>

using namespace std;


int main()
{
	//Car object
	Car car;
	//variabels
	string carBrand;
	string engineModelName;
	float engineHorsePower;
	int engineNumOfCylinder;
	string tireBrandName;
	float tireWidth;
	int rim_diameter;
	string personName;
	string personAdress;
	string personContactNumber;

	//output and input from user
	cout << "enter Car brand: " << endl;
	getline(cin, carBrand);
	//set carbrand
	car.setBrand(carBrand);
	//output and input from user
	cout << "enter engine model:" << endl;
	getline(cin, engineModelName);
	//set modelname
	car.engine.setModelName(engineModelName);
	//output and input from user
	cout << "enter engines horse power :" << endl;
	cin >> engineHorsePower;
	car.engine.setHorsePower(engineHorsePower);
	//output and input from user
	cout << "enter engines number of cylinder" << endl;
	cin >> engineNumOfCylinder;
	car.engine.setNumberOfCylinder(engineNumOfCylinder);
	//output and input from user
	cout << "Enter brand of the tires" << endl;
	
	cin.ignore();
	getline(cin, tireBrandName);
	
	//output and input from user
	cout << "Enter width of the tires" << endl;
	cin >> tireWidth;
	
	//output and input from user
	cout << "Enter rim diameter of tires: " << endl;
	cin >> rim_diameter;
	Tire tire(tireBrandName,tireWidth,rim_diameter);
	car.tireList.push_back(tire);

	//output and input from user
	cout << "Enter owners name:" << endl;
	cin.ignore();
	getline(cin, personName);
	car.owner.setName(personName);
	//output and input from user
	cout << "Enter owners adress: " << endl;
	getline(cin, personAdress);
	car.owner.setAdress(personAdress);
	//output and input from user
	cout << "Enter owners Contact number:" << endl;
	getline(cin, personContactNumber);
	car.owner.setContactNumber(personContactNumber);

	//prints out everything
	cout << "---= Car Brand =---" << endl;
	cout << car.getBrand() << endl;
	cout << " " << endl;

	cout << "---= Engine Model =---" << endl;
	cout << "Model name: ";
	cout << car.engine.getModelName()<< endl;
	cout << "Horse power: ";
	cout << car.engine.getHorsePower() << endl;
	cout << "Number of cylinders: ";
	cout << car.engine.getNumberOfCylinder() << endl;
	cout << " " << endl;

	cout << "---= Tire information =---" << endl;
	//loops the tireList and print out brandname,width,rim diameter.
	for (auto v : car.tireList) {
		cout <<"Brand name: " << v.getBrandName() << endl;
		cout << "Tire width: " << v.getWidth() << endl;
		cout << "Tire rim diameter: " << v.getRimDiameter() << endl;
	}
	cout << " " << endl;

	cout << "---= Owner information =---" << endl;
	cout << "name: " << car.owner.getName() << endl;
	cout << "adress: " << car.owner.getAdress() << endl;
	cout << "contact number: " << car.owner.getContactNumber() << endl;
	
	
	
	return 0;
}


// AVIS.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Vehicle.h"
#include "Sedan.h"
#include "Microbus.h"
#include "Jeep.h"
using namespace std;

Sedan sedan;
Microbus micro;
Jeep jeep;
Vehicle v;



//printout starting menu
void printMenu() {
	cout << "--=Avis Car Rental System=--" << endl;
	cout << "1. Register Vehicle" << endl;
	cout << "2. Rent a Vehicle" << endl;
	cout << "0. Exit" << endl;
}

//runs the Main menu
void runMenu() {
	int choice;
	bool running = true;
	
	while (running) {
		printMenu();
		cout << ">> ";
		cin >> choice;
		switch (choice) {
		case 1:
			printVehicleOptions();
			RunCarRentalRegister();
			break;
		case 2:
			
			runCarRental();

			break;
		case 0:
			cout << "Exiting program " << endl;
			running = false;
			break;
		}
	}
}
// runs the Car rental menu when customer wants to rent
void runCarRental() {
	
	int choice;
	bool f = true;
	while (f) {
		cout << "Available Vehicles:" << endl;
		printCar();
		printRentOptions();
		cout << ">>";
		cin >> choice;
		switch (choice) {
		case 1:
			rentersRequest();
			break;
		case 0:
			f = false;
			break;
		}
		

	}
	
}

//recommendCars function that prints out amount of cars and recommends user based on users preference.
void recommendCars(int hourlyCost, int numOfSeats) {
	int choice;
	int currentAmount;
	cout << "" << endl;
	if (micro.getNumOfSeats() >= numOfSeats && micro.getHourlyPrice() <= hourlyCost) {
		cout << "1. " << micro.getModelName();
		cout << "(NoA:" << micro.getAmountOfCars();
		cout << ",NoP: " << micro.getNumOfSeats();
		cout << ",HR: " << micro.getHourlyPrice();
		cout << ",GKM: " << micro.getGasolinePerKm() << ")" << endl;
	}
	if (sedan.getNumOfSeats() >= numOfSeats && sedan.getHourlyPrice() <= hourlyCost) {
		cout << "2. " << sedan.getModelName();
		cout << "(NoA:" << sedan.getAmountOfCars();
		cout << ",NoP: " << sedan.getNumOfSeats();
		cout << ",HR: " << sedan.getHourlyPrice();
		cout << ",GKM: " << sedan.getGasolinePerKm() << ")" << endl;
	}
	if (jeep.getNumOfSeats() >= numOfSeats && jeep.getHourlyPrice() <= hourlyCost) {
		cout << "3. " << jeep.getModelName();
		cout << "(NoA:" << jeep.getAmountOfCars();
		cout << ",NoP: " << jeep.getNumOfSeats();
		cout << ",HR: " << jeep.getHourlyPrice();
		cout << ",GKM: " << jeep.getGasolinePerKm() << ")" << endl;
	}
	if(micro.getHourlyPrice() > hourlyCost && sedan.getHourlyPrice() > hourlyCost && jeep.getHourlyPrice() > hourlyCost){
		cout << "There is no available cars to recommend" << endl;
		return;
	}
	if (micro.getNumOfSeats() < numOfSeats && sedan.getNumOfSeats() < numOfSeats && jeep.getNumOfSeats() < numOfSeats) {
		cout << "There is no available cars to recommend" << endl;
		return;
	}

	cout << "Enter Vehicle to be rented or go back (0)" << endl;
	cin >> choice;
	switch (choice) {
	case 1:
		currentAmount = micro.getAmountOfCars();
		micro.setAmountOfCars(currentAmount - 1);
			if (currentAmount == 0) {
				micro.setAmountOfCars(0);
			}
		break;
	case 2:
		currentAmount = sedan.getAmountOfCars();
		sedan.setAmountOfCars(currentAmount - 1);
		if (currentAmount == 0) {
			sedan.setAmountOfCars(0);
		}
		break;
	case 3:
		currentAmount = jeep.getAmountOfCars();
		jeep.setAmountOfCars(currentAmount - 1);
		if (currentAmount == 0) {
			jeep.setAmountOfCars(0);
		}
		break;
	case 0:
		return;
		break;
	}


}
//prints out and takes input in the rentersrequest phase
void rentersRequest() {
	float hourlyCost;
	float numberOfSeats;
	cout << "Hourly price for renting: " << endl;
	cin >> hourlyCost;
	cout << "Number of seats:" << endl;
	cin >> numberOfSeats;
	recommendCars(hourlyCost, numberOfSeats);


}
//runs the Car rental register menu
void RunCarRentalRegister() {

	int choice;
	bool k = true;
	while (k) {
		cout << ">> ";
		cin >> choice;
		switch (choice) {
		case 1:
			micro.addVehicle();
			break;
		case 2:
			sedan.addVehicle();

			break;
		case 3:
			jeep.addVehicle();
			break;
		case 0:
			k = false;
			
			break;
		}
		printVehicleOptions();
	}
}
//prints out info about Vehicle type.
void printCar() {

	cout <<  micro.getModelName();
	cout << "(NoA:" << micro.getAmountOfCars();
	cout << ",NoP: " << micro.getNumOfSeats();
	cout << ",HR: " << micro.getHourlyPrice();
	cout << ",GKM: " << micro.getGasolinePerKm() << ")" << endl;
	cout << sedan.getModelName();
	cout << "(NoA:" << sedan.getAmountOfCars();
	cout << ",NoP: " << sedan.getNumOfSeats();
	cout << ",HR: " << sedan.getHourlyPrice();
	cout << ",GKM: " << sedan.getGasolinePerKm() << ")" << endl;
	cout << jeep.getModelName();
	cout << "(NoA:" <<jeep.getAmountOfCars();
	cout << ",NoP: " << jeep.getNumOfSeats();
	cout << ",HR: " << jeep.getHourlyPrice();
	cout << ",GKM: " << jeep.getGasolinePerKm() << ")" << endl;
	//cout << "cost/hour: " << v.getHourlyPrice() << endl;
}
//prints out vehicle options
void printVehicleOptions() {
	cout << "Select Vehicles: " << endl;
	cout << "1. Microbus " << endl;
	cout << "2. Sedan " << endl;
	cout << "3. Jeep " << endl;
	cout << "0. Go back " << endl;
}
//prints out the rent options.
void printRentOptions() {
	cout << "1. Renters requirements" << endl;
	cout << "0. Go back "<< endl;
}
int main()
{
	runMenu();
}


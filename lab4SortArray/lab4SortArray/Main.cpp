// lab4SortArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "SortArray.h"
SortArray sa;
using namespace std;

void printMenu() {
	cout << "1. Insert Integer" << endl;
	cout << "2. Remove by value" << endl;
	cout << "3. Print contents of Array " << endl;
	cout << "0. Exit" << endl;
}

void runMenu() {
	bool running = true;
	int choice;
	while (running) {
		printMenu();
		cin >> choice;
		switch (choice) {
		case 1:
			cout << "Enter an Integer to be inserted to the array" << endl;
			int number;
			cin >> number;
			sa.insertToArray(number);
			break;
		case 2:
			int numToRemove;
			cout << "Enter an Integer that should be deleted from the array" << endl;
			cin >> numToRemove;
			sa.deleteFromArray(numToRemove);
			break;
		case 3:
			sa.displayArray();
			break;
		case 0:
			running = false;
			break;
		}
	}
}

int main()
{
	runMenu();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

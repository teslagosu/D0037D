#include "pch.h"
#include <stdio.h>
#include <cctype>
#include <iostream>
using namespace std;

//prints the menu
void printMenu() {
	cout << "Menu for assignment 1" << endl;
	cout << "1: Prime Numbers" << endl;
	cout << "2: Bounce" << endl;
	cout << "3: Half Pyramid" << endl;
	cout << "4: 2d array with row/col sums" << endl;
	cout << "5: Aritmethic and output" << endl;
	cout << "6: Interest Calculation" << endl;
	cout << "0: Exit" << endl;
}

//runs the menu
void runMenu() {
	bool running = true;
	int choice = 9;
	
	while (running) {
		printMenu();
		cin >> choice;
		switch (choice) {
		case 1:
			int num;
			cout << "Enter the number of prime numbers you want to be shown: ";
			cin >> num;
			prime(num);
			break;
		case 2:
			cout << "Enter an integer: ";
			cin >> num;
			bounce(num);
			break;
		case 3:
			char input[256];
			printf("Enter the uppercase character/number you want to print in the last row");

			scanf("%s", input);
			printf("\n");

			if (isdigit(input[0])) {
				int num = input[0] - 48;
				halfPyramid(num);
				
			}
			else {
				char character = input[0];
				halfPyramid(character);
				
			}
			printf("\n");
			break;
			
		case 4:
			createArray();
			break;
		case 5:
			cout << "Sugar cake recipe for how many people?" << endl;
			cin >> num;
			sugar_cake(num);
			break;
		case 6:
			cout << "Enter Cost: ";
			float cost;
			cin >> cost;
			float percentage;
			cout << "Enter percentage: ";
			cin >> percentage;
			int years;
			cout << "Enter years: ";
			cin >> years;

			floatCost(cost, percentage, years);
			break;
		case 0:
			cout << "Good bye";
			running = false;
			break;
		default:
			cout << "input not valid" << endl;

		}

	}
}



int main()
{
	runMenu();
	//printOut2(3);

}
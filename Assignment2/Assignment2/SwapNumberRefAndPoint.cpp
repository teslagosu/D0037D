#include "pch.h"
#include "myLib.h"
#include <iostream>
using namespace std;

//swap2 function changes the values
void swap2(int** num1, int** num2) {
	//holds the value of num1
	int* temp = *num1;
	//switches num1 to the value of num2
	*num1 = *num2;
	//switches the value of num2 to num1
	*num2 = temp;

}

void swapInput2() {
	int x = 5;
	int y = 6;
	//ptr1 points to the adress of x
	int *ptr1 = &x;
	//ptr2 points to the adress of y
	int *ptr2 = &y;
	//send the adresses as argument into the parameter of swap2
	swap2(&ptr1, &ptr2);
	//print out what value ptr1 and ptr2 are pointing on.
	cout << "ptr1 is: " << *ptr1 << endl;
	cout << "ptr2 is: " << *ptr2 << endl;

}
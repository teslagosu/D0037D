// Assignment1.1SwapNumbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

//function that swaps the reference of a to b.
void swap(float &a, float &b) {
	//temporary variabel to hold a
	float temp = a;
	//a is the value of b
	a = b;
	// b is the value of temp
	b = temp;
	
}


int main()
{
	float a;
	float b;
	cout << "Enter number A:" << endl;
	cin >> a;
	cout << "Enter number B:" << endl;
	cin >> b;
	swap(a, b);
	cout << "A is " << a << " and B is " << b << endl;
}



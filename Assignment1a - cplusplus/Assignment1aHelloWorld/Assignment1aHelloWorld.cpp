// Assignment1aHelloWorld.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

//string hw contains "hello world"
string hw = "Hello, World!";

void printOut(string s) {
	cout << "for-loop" << endl;
	for (int i = 0; i < 5; i++) {
		cout << s << endl;
	}
	cout << endl;
	cout << "while-loop" << endl;
	int count = 5;
	while (count > 0){
		cout << s << endl;
		count -= 1;
	}
	cout << endl;
	cout << "do-while-loop" << endl;
	count = 5;
	do {
		cout << s << endl;
		count -= 1;
	} while (count > 0);
}
//the function for the assignment
void printOut2(int n) {
	cout << "for-loop" << endl;
	for (int i = 0; i < n; i++) {
		cout << "Hello, World!" << endl;
	}
	cout << endl;
	cout << "while-loop" << endl;
	int count = 0;
	while (count < n) {
		cout << "Hello, World!" << endl;
		count += 1;
	}
	cout << endl;
	cout << "do-while-loop" << endl;
	count = 0;
	do {
		cout << "Hello, World!" << endl;
		count += 1;
	} while (count != n);
}







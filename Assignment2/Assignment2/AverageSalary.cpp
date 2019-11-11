#include "pch.h"
#include "mylib.h"
#include <iostream>
#include <vector>
#include <iterator>
using namespace std;

//function that takes a pointer of an int in the parameter
int average_salary(int* salaryArray,int employee) {
	
	//declare sum to value 0
	long sum = 0;
	
	//add the value of each element to the sum aslong as i is smaller then the size of the array.
	for (int i = 0; i < employee; i++) {
		//cout << *(salaryArray + i) << endl;;
		sum += *(salaryArray+i);
	}
	//calculate the average
	int average = sum / employee;
	//return average
	return average;
	
}

// function that takes inputs and shows output.
void as_Input() {
	//declare employee without a value.
	int employee;
	cout << "please enter number of employees" << endl;
	//input from the user that then gives employee a value
	cin >> employee;
	//count as 1 just to give a visual effect to the user when they enter salarys.
	int count = 1;
	//pointer of an int array
	int *salaryArray = new int[employee];
	
	cout << "employees: " << employee << endl;
	//aslong as i is smaller then employee value, fill array with salary and plus count each iteration with 1
	for (int i = 0; i < employee; i++) {
		cout << "Enter salary for person " << count << endl;
		cin >> salaryArray[i];
		count++;
	}
	
	//print out the average of the salarys
	cout << "average salary:"<< average_salary(salaryArray,employee) << endl;
	delete[] salaryArray;

}
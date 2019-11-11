#include "pch.h"
#include "myLib.h"
#include <iostream>

using namespace std;

//swaps the numbers. first stores one number in a temporary variabel.
void swap(int *num1, int *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;


}
//runs the swapnumbers function with input and output.
void swapInput() {
	int a;
	int b;
	cout << "Enter number A:" << endl;
	cin >> a;
	cout << "Enter number B:" << endl;
	cin >> b;
	swap(a, b);
	cout << "A is: "<< a << endl;
	cout << "B is: " << b << endl;
}

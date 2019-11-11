#include "pch.h"
#include <iostream>
using namespace std;

//function floatCost that takes 3 arguments in its parameter
void floatCost(float P,float r,int a) {
	//calculation to get the total cost.
	int k = P + ((r*P*(a + 1)) / 2);
	//print out
	cout << "The total cost after " << a << " years is " << k << " kr" << endl;

}
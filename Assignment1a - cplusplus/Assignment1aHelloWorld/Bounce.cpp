#include "pch.h"
#include <iostream>
#include <string>

using namespace std;

void bounce(int n) {
	// make i - 1 aslong as it is bigger than -n
	for (int i = n; i >= -n; i--) {
		//print the absolute value of i. makes negatives to positives.
		cout << abs(i) << endl;
	}
}
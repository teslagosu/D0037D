#include "pch.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

//function prime that take an integer as argument
void prime(int n) {
	int primeCount = 0;
	//i starts at 2, as long as primecount is less then n i increases with one each iteration
	for (int i = 2; primeCount < n; i++) {
		//if i is a prime print it out and increase primeCount with 1.
		if (checkIfPrime(i) == 1) {
			cout << i << endl;
			primeCount++;
			
		}
	}
}
//function that checks if the integer is a prime or not
bool checkIfPrime(int n) {
	bool isPrime = true;
	//i starts at 2, aslong as i is smaller or equal to n/2, i increases +1
	for (int i = 2; i <= n/2; i++) {
		//if n%i == 0 then the integer is not a prime
		if (n%i == 0) {
			isPrime = false;
			break;
		}
	}
	return isPrime;
}









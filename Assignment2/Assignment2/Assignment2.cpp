
#include "pch.h"
#include <iostream>
#include <string>
#include "myLib.h"
using namespace std;

//returns the length of the string
int returnLength(const char* c) {
	int count = 0;
	for (int i = 0; *(c+i) != '\0'; i++) {
		count++;
	}
	return count;

}

//prints the length of the word.
void printLength() {
	
	string word = "hello0";
	const char* k;
	k = word.c_str();
	cout << returnLength(k);
	
}

int main()
{
	
	//printLength();
	//swapInput();
	//swapInput2();
	//as_Input();
	runMenu();
	


	
}



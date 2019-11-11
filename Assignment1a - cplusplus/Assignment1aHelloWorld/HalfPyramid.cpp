#include "pch.h"
#include <stdio.h>
#include <cctype>
#include <iostream>
using namespace std;

//function halfPyramid that takes an integer as argument in the parameter
void halfPyramid(int n) {
	//i starts at 1, aslong as i is less or equal to n, increase i with 1 each iteration
	for (int i = 1; i <= n; ++i)
	{
		//j starts at 1, iterate aslong as j is smaller or equal to i, increase j with 1 each iteration
		for (int j = 1; j <= i; ++j) {
			printf("%d",j);
		}
		printf("\n");

	}

}
//function halfpyramid that takes a char as argument in the parameter
void halfPyramid(char c) {
	//declar char alphabet to A
	char alphabet = 'A';
	//i starts at 1, aslong as i is smaller or equal to argument c - char A + 1, increase i with 1 
	for (int i = 1; i <= (c - 'A' + 1); ++i)
	{
		//j starts at 1, aslong as j is less or equal to i, increase j with 1
		for (int j = 1; j <= i; ++j)
		{
			//print out letters
			printf("%c", alphabet);
		}
		//plus the alphabet with 1 each iteration so we get ABCDE etc.
		alphabet++;
		printf("\n");
	}
}

void ui() {
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
}
#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

void createArray() {
	//local variabels row and col
	int row;
	int col;
	//ask user for number of rows
	cout << "Number of rows: " << endl;
	//get input and declare row
	cin >> row;
	//ask user for number of columns
	cout << "Number of columns: " << endl;
	//get input and declare columns
	cin >> col;
	//pointer of  a pointer to an int
	int ** array2D = new int*[row];
	// make the array to an 2d array at each index.
	for (int i = 0; i < row; i++) {
		array2D[i] = new int[col];
	}
	//fill the array with random numbers and modulo 10 on them so we get 1-9.
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			array2D[i][j] = rand() % 10;
			if (array2D[i][j] == 0) {
				array2D[i][j] = rand() % 10;
			}
		}
	}
	//call the printOutRows and columns function and pass array2d,row and col as arguments.
	printOutRowsAndColumns(array2D, row, col);
	//delete the 2darray
	delete[] array2D;

}

//function that prints out rows and columns.
void printOutRowsAndColumns(int **array, int row, int col) {
	//local variables
	int sum = 0;
	int total = 0;
	int x = 0;

	//calculate the sum of each row, col and print out the elements in each index.
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			sum += array[i][j];
			cout << array[i][j] << "\t";
		}
		//add the sums to total
		total += sum;
		//print out the sum
		cout << sum << endl;
		//set sum to 0 so we can get a new sum when it starts to iterate again
		sum = 0;
	}
	// print out columns and the calculated sums(x)
	for (int i = 0; i < col; i++) {
		for (int j = 0; j < row; j++) {
			x += array[j][i];

		}
		//add the sums(x) to total
		total += x;
		//print out the sum
		cout << x << "\t";
		//set x to 0 so we can get a new sum(x) when it starts to iterate again
		x = 0;

	}
	//print out the total of all elements.
	cout << total << endl;
}
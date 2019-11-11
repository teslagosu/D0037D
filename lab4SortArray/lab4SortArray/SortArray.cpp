#include "pch.h"
#include "SortArray.h"
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int SortArray::count = 0;

SortArray::SortArray()
{
	count++;
	

}


SortArray::~SortArray()
{

}
//function that inserts a number into the array
void SortArray::insertToArray(int number) {
	//temp variabel
	int temp = 0;
	//newsize becomes oldsize +1
	int newSize = oldSize + 1;
	//create new pointer array
	int *newArray = new int[newSize];
	//copy the memory from old array to new Array
	memcpy(newArray, oldArray, sizeof(int)*oldSize);
	//delete allocated memory of oldArray
	delete[] oldArray;
	//oldarray becomes newArray
	oldArray = newArray;
	//add the number last in the array
	oldArray[newSize-1] = number;
	//sort the array as ascending
	for (int i = 0; i < newSize; i++)
	{
		for (int j = 0; j < newSize -1; j++)
		{
			if (oldArray[j] > oldArray[j + 1])
			{
				//store the number at index j as a temp.
				temp = oldArray[j];
				//the value on the right of the stored value becomes this index new value.
				oldArray[j] = oldArray[j + 1];
				//switch places with the one that just moved to the index before this one.
				oldArray[j + 1] = temp;
			}
		}
	}
	//add size with 1.
	oldSize++;
	
}

//delete function
void SortArray::deleteFromArray(int num) {
	//gets the index of prefered number to be deleted.
	int index = returnIndex(num);

	for (int i = index; i < oldSize; i++) {
		//delete the number at the index and replace it with the one to its right.
		oldArray[i] = oldArray[i + 1];
	}
	//shrink the size of the array.
	oldSize--;


}
//returns the index of the number
int SortArray::returnIndex(int number) {
	for (int i = 0; i < oldSize; i++) {
		if (number == oldArray[i]) {
			return i;
		}
	}

}

void SortArray::displayArray() {
	//prints out the array
	cout << "[";
	for (int i = 0; i < oldSize; i++) {
		cout << oldArray[i];
		cout << ",";
	}
	cout << "]" << endl;



}


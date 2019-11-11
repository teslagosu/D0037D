#pragma once
class SortArray
{
private:
	int oldSize = 3;
	int *oldArray = new int[oldSize] {1,5, 4};
	static int count;
	

public:
	SortArray();
	~SortArray();
	void insertToArray(int number);
	void createArray();
	void deleteFromArray(int numToRemove);
	void displayArray();
	int returnIndex(int number);
	void setElementCount(int e);
	int getElementCount();
	int getCount();
};


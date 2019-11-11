// DictionaryMap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <map>
#include <string>
using namespace std;
//instance variabel of Map
map<string, string> dictMap;

//prints the menu
void printMenu() {
	cout << "Menu for dictionary" << endl;
	cout << "1: Insert" << endl;
	cout << "2: Lookup" << endl;
	cout << "3: Exit to Main" << endl;
}
// returns 1 if the word excist.
bool checkIfWordExcist(string word) {
	for (auto s : dictMap) {
		if (s.first == word) {
			return true;
		}

	}
}

//function insert that insert word as key and description as value
void insert() {
	string word;
	string description;
	cout << "Word to insert: ";
	cin >> word;
	//checks if the word exicst, if it does. print  error message and return to menu.
	if (checkIfWordExcist(word) == 1) {
		cout << "The word already excist in the dictionary" << endl;
		return;
	}
	cout << "Description of word" << endl;
	cin.ignore();
	getline(cin,description);
	dictMap[word] = description;

}

//function that looks up the word and print out word and description.
void lookup() {
	string word;
	string description;
	cout << "Word to lookup: ";
	cin >> word;
	//checks if word does not excist, print out error message and return to menu.
	if (checkIfWordExcist(word) != 1) {
		cout << "The word does not excist in the dictionary" << endl;
		return;
	}
	//declare description to the value of the key in map.
	description = dictMap.find(word)->second;
	//print out
	cout << "Description for " << word << ": " << description << endl;


}
// run the menu and take inputs from the user-
void runMenu() {
	bool running = true;
	int choice = 9;
	printMenu();
	while (running) {
		//user input
		cin >> choice;

		switch (choice) {
		case 1:
			//go into the insert function
			insert();
			//print out menu when done in insert function
			printMenu();
			break;
		case 2:
			//go into lookup function
			lookup();
			//print out menu when done in lookup function
			printMenu();
			break;
		case 3:
			//print out shutting down... and declare running as false to end to while loop and exit program.
			cout << "shutting down..." << endl;
			running = false;
			break;
		default:
			cout << "invalid input" << endl;
			break;
		}
	}
}


int main()
{
	runMenu();
}



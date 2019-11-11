// DictionaryVectors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <vector>
#include <string>
#include "dictionary.h"

using namespace std;

//instance variabels
vector<string> wordVector;
vector<string>descriptionVector;

//prints the menu
void printMenu() {
	cout << "Menu for dictionary" << endl;
	cout << "1: Insert" << endl;
	cout << "2: Lookup" << endl;
	cout << "3: Exit to Main" << endl;
}
//runs the menu
void runMenu() {
	bool running = true;
	int choice = 9;
	printMenu();
	while (running) {
		

			//user input
			cin >> choice;

			switch (choice) {
			case 1:
				//calls the insert function
				insert();
				//prints the menu when its done in the insert funktion
				printMenu();
				break;
			case 2:
				//calls the lookup function
				lookup();
				//prints the menu when its done in the lookup function
				printMenu();
				break;
			case 3:
				//exits the while loop
				cout << "shutting down..." << endl;
				running = false;
				break;
			default:
				//prints out invalid if user enters an integer not in the switch cases.
				cout << "invalid input" << endl;
			}
		
		
	}
}

//checks if the word exists in the wordvector and returns 1 if it does.
bool checkIfWordExcist(string &word) {
	for (auto s : wordVector) {
		if (s == word) {
			return true;
		}
	}

}
// insert function that inserts a word and description into the vectors.
void insert() {
	string word;
	string description;
	cout << "Word to insert: ";
	cin >> word;
	if (checkIfWordExcist(word) == 1) {
		cout << "The word already excist!" << endl;
		return;
	}
	cout << "" << endl;
	cout << "Description of word: ";
	cin.ignore();
	getline(cin, description);
	
	cout << "The word: \"" << word << "\" and its description: \"" << description <<  "\" has been added to the dictionary"<< endl;
	wordVector.push_back(word);
	descriptionVector.push_back(description);


}
//function that returns the index of the word
int getIndexOfWord(string word) {
	for (int i = 0; i < wordVector.size(); i++) {
		if (wordVector[i] == word) {
			return i;
		}
	}
}


//function lookup that prints out the word and the description.
void lookup() {
	string word;
	cout << "Word to lookup: ";
	cin >> word;
	if (checkIfWordExcist(word) != 1) {
		cout << "the word does not excist in the dictionary" << endl;
		return;
	}
	string description = descriptionVector[getIndexOfWord(word)];
	cout << "Description for word " << word << ": " << description << endl;

}



int main()
{
	runMenu();
}



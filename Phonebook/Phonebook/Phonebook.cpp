// Phonebook.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <assert.h>
#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <cctype>
#include <algorithm>
using namespace std;

//start of class phonebook
class Phonebook {
	//public
public:
	//instance variable map of phonebook
	map<string, string> phonebookMap;
	//function add name,number to map
	void add(string name, string number) 
	{
		//if name excist returns true
		if (checkIfNameExcist(name) == 1) 
		{
			cout << "A person with that name already excist" << endl;
			return;
		}
		//add name as key and number as value
		phonebookMap[name] = number;
		cout << "New person added to phonebook" << endl;
		
		
	}
	//void function that prints out the number to the person
	void lookup(string name) 
	{
		//checks if the person does not excist
		if (checkIfNameExcist(name) != 1) 
		{
			cout << "no person with that name could be found in the phonebook" << endl;
		}
		else {
			cout << getNumber(name) << endl;
		}
		
	}
	//function alias that adds a newName to current excisting person ish.
	void alias(string name, string newName) 
	{	
		//checks if the name does not excist
		if (checkIfNameExcist(name) != 1) 
		{
			cout << "No person with that name excist in the phonebook" << endl;
		}
		else
		{
			//if it excist get the number from the persons name
			string number = getNumber(name);
			//add newname and the number to the map
			phonebookMap[newName] = number;
		}
	}
	//function change that changes a telephone number on everyone with the same number
	void change(string name, string number) 
	{
		//checks if the person does not excist
		if (checkIfNameExcist(name) != 1) 
		{
			cout << "No person with that name excist" << endl;
		}
		else
		{
			//go into changenumber function
			changeNumber(name, number);
		}
		

	}
	//get number function returns the number if name in phonebookmap is the same as the name entered
	string getNumber(string name) 
	{
		for (auto v : phonebookMap) 
		{
			if (v.first == name) 
			{
				return v.second;
			}

		}
	}
	//function changeNumber that changes old number to new number on everyone with the same number.
	void changeNumber(string name, string number) 
	{
		//newNumber gets declared to the number entered by the user
		string newNumber = number;
		//declare oldnumber to currentNumber
		string currentNumber = getNumber(name);
		//for each v in phonebookMap, if number in map == oldnumber, change every old number to the new one
		for (auto v : phonebookMap) 
		{
			if (v.second == currentNumber) 
			{
				phonebookMap[v.first] = newNumber;
			}
			
		}
	}
	//function checks if a name excist, if it does returns true
	bool checkIfNameExcist(string name) 
	{
		for (auto s : phonebookMap) 
		{
			if (s.first == name) 
			{
				return true;
			}
		}

	}

	

};// end of class phonebook




//function split that splits a line of words into a vector and remove whitespaces and returns a vector
vector<string> split(const string& s)
{
	vector<string> ret;
	typedef string::size_type string_size;
	string_size i = 0;

	//we have processed characters [original value of i, i) 
	while (i != s.size()) {
		// ignore leading blanks
		// characters in range [original i, current i) are all spaces
		while (i != s.size() && isspace(s[i]))
			++i;

		// find end of next word
		string_size j = i;
		// none of the characters in range [original j, current j)is a space
		while (j != s.size() && !isspace(s[j]))
			j++;

		// if we found some nonwhitespace characters 
		if (i != j) {
			// copy from s starting at i and taking j - i chars
			ret.push_back(s.substr(i, j - i));
			i = j;
		}
	}
	return ret;
}

int main()
{

	bool running = true;
	string input;
	string newInput;
	Phonebook p;
	while (running) 
	{
		

			//prompt
			cout << "phonebook >>> ";
			getline(cin, input);
			vector<string> inputVector = split(input);

			//if input at index 0 is "add" and the size is not 3 put out an error message, else go into phonebook object add(name,number)
			if (inputVector[0] == "add") 
			{
				if (inputVector.size() != 3) 
				{
					cout << "invalid command! type \"add name number\"" << endl;
				}
				else 
				{
					p.add(inputVector[1], inputVector[2]);
				}

			}
			//else if input at index 0 is "lookup" and the size is not 2 put out an error message, else go into phonebook object lookup(name)
			else if (inputVector[0] == "lookup")
			{
				if (inputVector.size() != 2)
				{
					cout << "invalid command! type \"lookup name\"" << endl;
				}
				else 
				{
					p.lookup(inputVector[1]);
				}
			}
			//if input at index 0 is "alias" and the size is not 3 put out an error message, else go into phonebook object alias(name,newName)
			else if (inputVector[0] == "alias")
			{
				if (inputVector.size() != 3)
				{
					cout << "invalid command! type \"alias name newname\"" << endl;
				}
				else 
				{
					p.alias(inputVector[1], inputVector[2]);
				}
			}
			//if input at index 0 is "change" and the size is not 3 put out an error message, else go into phonebook object change(name,newNumber)
			else if (inputVector[0] == "change") 
			{
				if (inputVector.size() != 3)
				{
					cout << "invalid command! type \"change name newnumber\"" << endl;
				}
				else
				{
					p.change(inputVector[1], inputVector[2]);
				}
			}
			//if input at index 0 is "quit" and the size is not 1 put out an error message, else exit the while loop
			else if (inputVector[0] == "quit")
			{
				if (inputVector.size() != 1)
				{
					cout << "invalid command! type \"quit\"" << endl;
				}
				else
				{
					cout << "Exiting phonebook..." << endl;
					running = false;
				}
			}
			else 
			{
				cout << "invalid command" << endl;
			}
		

	}

}


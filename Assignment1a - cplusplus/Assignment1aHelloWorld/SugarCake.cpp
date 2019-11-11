#include "pch.h";
#include <iostream>
#include <string>
using namespace std;

//function sugar_cake that prints the amount of ingredients
void sugar_cake(int amount_Of_people) {
	//variabels
	string egg = "Egg";
	string sugar = "Sugar";
	string vanillasugar = "Vanilla sugar";
	string bakingpowder = "Baking powder";
	string flour = "Flour";
	string butter = "Butter";
	string water = "Water";
	//calculation on static floats multiply amount of people
	int amountOfEgg = 0.75*amount_Of_people;
	float amountOfSugar = 0.75*amount_Of_people;
	float amountOfVanillaSugar = 0.5*amount_Of_people;
	float amountOfBakingPowder = 0.5*amount_Of_people;
	float amountOfFlour = 0.75*amount_Of_people;
	int amountOfButter = 18.75*amount_Of_people;
	float amountOfWater = 0.25*amount_Of_people;

	//print outs
	cout << amountOfEgg << " " << egg << endl;
	cout << amountOfSugar << " dl " << sugar << endl;
	cout << amountOfVanillaSugar << " teaspoon " << vanillasugar << endl;
	cout << amountOfBakingPowder << " teaspoon " << bakingpowder << endl;
	cout << amountOfFlour << " dl " << flour << endl;
	cout << amountOfButter << " gram " << butter << endl;
	cout << amountOfWater << " dl " << water << endl;

}
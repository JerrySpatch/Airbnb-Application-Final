#include "GroceryStore.h"
#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "Food.h" // Food class 
using namespace std;


void GroceryStore::TallyOneFood() {
	ifstream tempFS;
	string foodToCheck;
	int foodCounter;
	foodCounter = 0; // Sets food counter to 0


	cout << "What's the name of food you'd to check the quantity sold of?" << endl;
	cin >> foodToCheck; // Gets the string of the food name the user would like to check the quantity sold of
	foodToCheck[0] = toupper(foodToCheck[0]); // Makes first letter of string uppercase in case users enters all lower case letters 

	tempFS.open("FoodPurchased.txt"); // Open document containing food purchased data 

	// Makes sure the document is successfully opened. 
	if (!tempFS.is_open()) {
		cout << "Error opening file FoodPurchased.txt" << endl;
	}

	// Checks to see if the food string entered is present in the document
	while (!tempFS.eof()) {
		string compareFood;
		tempFS >> compareFood; // Pulls strings from document
		if (foodToCheck == compareFood)
			foodCounter += 1; //Increments count 
	}
	tempFS.close(); // Close FoodPurchased.txt
	cout << "Quantity " << foodCounter << " " << foodToCheck << " sold." << endl;
	cout << endl;
}

void GroceryStore::TallyAllFood() {

	ifstream tempFS;

	// Creating a vector with all Food items included 
	vector<Food> wholeFoodVec(20);
	wholeFoodVec.at(0) = spinach;
	wholeFoodVec.at(1) = radishes;
	wholeFoodVec.at(2) = broccoli;
	wholeFoodVec.at(3) = peas;
	wholeFoodVec.at(4) = cranberries;
	wholeFoodVec.at(5) = potatoes;
	wholeFoodVec.at(6) = cucumbers;
	wholeFoodVec.at(7) = peaches;
	wholeFoodVec.at(8) = zucchini;
	wholeFoodVec.at(9) = cantaloupe;
	wholeFoodVec.at(10) = beets;
	wholeFoodVec.at(11) = cauliflower;
	wholeFoodVec.at(12) = onions;
	wholeFoodVec.at(13) = yams;
	wholeFoodVec.at(14) = apples;
	wholeFoodVec.at(15) = celery;
	wholeFoodVec.at(16) = limes;
	wholeFoodVec.at(17) = garlic;
	wholeFoodVec.at(18) = pumpkins;
	wholeFoodVec.at(19) = pears;



	for (int i = 0; i < 20; ++i) { // For loop iterates through all 20 items present in the Vector list.
		tempFS.open("FoodPurchased.txt");
		if (!tempFS.is_open()) {
			cout << "Error opening file FoodPurchased.txt" << endl;
		}


		while (!tempFS.eof()) { // Will iterate through FoodPurchased.txt until end of file is reached 
			string compareFood;
			tempFS >> compareFood; // Pulls foods purchased from FoodPurchased.txt
			if (wholeFoodVec.at(i).GetName() == compareFood) { // Checks if the name of the current Vector list item matches an item in FoodPurchased.txt
				wholeFoodVec.at(i).IncrementQuantityByOne(); // Increments Food quantity by one, if match is found
			}
		}
		cout << "Quantity " << wholeFoodVec.at(i).GetQuantity() << " " << wholeFoodVec.at(i).GetName() << " sold." << endl; // Outputs how many times the current Vector list item has been sold.
		tempFS.close(); // Close and save file
	}
	cout << endl;

}
void GroceryStore::OutputFoodHisto() {

	ifstream tempFS;

	// Creating a vector with all Food items included 
	vector<Food> wholeFoodVec(20);
	wholeFoodVec.at(0) = spinach;
	wholeFoodVec.at(1) = radishes;
	wholeFoodVec.at(2) = broccoli;
	wholeFoodVec.at(3) = peas;
	wholeFoodVec.at(4) = cranberries;
	wholeFoodVec.at(5) = potatoes;
	wholeFoodVec.at(6) = cucumbers;
	wholeFoodVec.at(7) = peaches;
	wholeFoodVec.at(8) = zucchini;
	wholeFoodVec.at(9) = cantaloupe;
	wholeFoodVec.at(10) = beets;
	wholeFoodVec.at(11) = cauliflower;
	wholeFoodVec.at(12) = onions;
	wholeFoodVec.at(13) = yams;
	wholeFoodVec.at(14) = apples;
	wholeFoodVec.at(15) = celery;
	wholeFoodVec.at(16) = limes;
	wholeFoodVec.at(17) = garlic;
	wholeFoodVec.at(18) = pumpkins;
	wholeFoodVec.at(19) = pears;


	cout << "Histogram:" << endl; // Titling Histogram 

	// For loop iterates through all 20 items present in the Vector list.
	for (int i = 0; i < 20; ++i) {

		tempFS.open("FoodPurchased.txt");
		if (!tempFS.is_open()) {
			cout << "Error opening file FoodPurchased.txt" << endl;
		}

		cout << wholeFoodVec.at(i).GetName() << ": "; // Outputting name of Food for Histogram 
		while (!tempFS.eof()) { // Will iterate until the end of the file 
			string compareFood;
			tempFS >> compareFood; // Putting lines in FoodPurchased.txt into variable 
			if (wholeFoodVec.at(i).GetName() == compareFood) {
				cout << "*"; // If the string in file is equal to the name of the food a Star will be output 
			}
		}
		cout << endl; // New line to go to next food item
		tempFS.close(); // Closing Foodpurchased.txt
	}
	cout << endl;

}



void GroceryStore::BackUpAllFood() {
	ifstream tempFS;
	ofstream tempOut;

	// Creating a vector with all Food items included 
	vector<Food> wholeFoodVec(20);
	wholeFoodVec.at(0) = spinach;
	wholeFoodVec.at(1) = radishes;
	wholeFoodVec.at(2) = broccoli;
	wholeFoodVec.at(3) = peas;
	wholeFoodVec.at(4) = cranberries;
	wholeFoodVec.at(5) = potatoes;
	wholeFoodVec.at(6) = cucumbers;
	wholeFoodVec.at(7) = peaches;
	wholeFoodVec.at(8) = zucchini;
	wholeFoodVec.at(9) = cantaloupe;
	wholeFoodVec.at(10) = beets;
	wholeFoodVec.at(11) = cauliflower;
	wholeFoodVec.at(12) = onions;
	wholeFoodVec.at(13) = yams;
	wholeFoodVec.at(14) = apples;
	wholeFoodVec.at(15) = celery;
	wholeFoodVec.at(16) = limes;
	wholeFoodVec.at(17) = garlic;
	wholeFoodVec.at(18) = pumpkins;
	wholeFoodVec.at(19) = pears;



	//Creating frenquency.dat file for backup
	tempOut.open("frequency.dat", ios::out);
	if (!tempOut.is_open()) { // Will output error message if frequency.day cannot be opened. 
		cout << "Error backing up data to file Frequency.dat" << endl;
	}

	// For loop iterates through all 20 items present in the Vector list.
	for (int i = 0; i < 20; ++i) {

		tempFS.open("FoodPurchased.txt");
		if (!tempFS.is_open()) {
			cout << "Error opening file FoodPurchased.txt" << endl;
		}


		while (!tempFS.eof()) { // Will iterate until the end of the file 
			string compareFood;
			tempFS >> compareFood; // Putting lines in FoodPurchased.txt into variable 
			if (wholeFoodVec.at(i).GetName() == compareFood) { // Checks if the name of the current Vector list item matches an item in FoodPurchased.txt
				wholeFoodVec.at(i).IncrementQuantityByOne(); // Increments Food quantity by one, if match is found
			}
		}
		tempOut << "Quantity " << wholeFoodVec.at(i).GetQuantity() << " " << wholeFoodVec.at(i).GetName() << " sold." << endl; // Outputs name and quantity sold to frequency.dat
		tempFS.close(); // Close FoodPurchased.txt 
	}
	tempOut.close(); // Close and save frequency.dat 
}

// This functions sets the name of each Food Item and the quantity sold to 0
void GroceryStore::SetAllToZero() {
	spinach.SetNameAndQuantity("Spinach", 0);
	radishes.SetNameAndQuantity("Radishes", 0);
	broccoli.SetNameAndQuantity("Broccoli", 0);
	peas.SetNameAndQuantity("Peas", 0);
	cranberries.SetNameAndQuantity("Cranberries", 0);
	potatoes.SetNameAndQuantity("Potatoes", 0);
	cucumbers.SetNameAndQuantity("Cucumbers", 0);
	peaches.SetNameAndQuantity("Peaches", 0);
	zucchini.SetNameAndQuantity("Zucchini", 0);
	cantaloupe.SetNameAndQuantity("Cantaloupe", 0);
	beets.SetNameAndQuantity("Beets", 0);
	cauliflower.SetNameAndQuantity("Cauliflower", 0);
	onions.SetNameAndQuantity("Onions", 0);
	yams.SetNameAndQuantity("Yams", 0);
	apples.SetNameAndQuantity("Apples", 0);
	celery.SetNameAndQuantity("Celery", 0);
	limes.SetNameAndQuantity("Limes", 0);
	garlic.SetNameAndQuantity("Garlic", 0);
	pumpkins.SetNameAndQuantity("Pumpkins", 0);
	pears.SetNameAndQuantity("Pears", 0);
}
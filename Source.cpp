// This entire codebase is written by Jerried Walker 

#include <fstream>
#include <iostream>
#include <string>
#include "GroceryStore.h" // Grocery Store Class
#include "Food.h" // Food Class 
using namespace std;


// This function provides a short introduction to the program for the user. 
void ProgramIntroduction() {
	cout << "This is a program that tracks all items sold during a business's day." << endl;
	cout << "A backup of all sold items will be automatically saved in the file \"frequency.dat\" when the program is started." << endl;
	cout << endl;
}

// Main operating portions of the program. Displays and executes functions based on user selection. Loops until user enters 4. 
void DisplayMenu(GroceryStore randomStore) {
	string menuSelection; // Menu selection variable, string class 
	menuSelection = "0";

	while (menuSelection != "4") {
		cout << "Please select a menu option." << endl;
		cout << "1. Find quantity sold of one item" << endl;
		cout << "2. View the quantity sold of every item" << endl;
		cout << "3. View all items sold in the form of a histogram" << endl;
		cout << "4. Exit the program." << endl;


		getline(cin, menuSelection); // Takes the entire line as input. Prevents users from enter extra characters and directs them to enter 1 single character

		// Generates quantity sold for 1 item 
		if (menuSelection == "1") {
			randomStore.SetAllToZero();
			randomStore.TallyOneFood();
			cin.ignore();
		}

		// Generates quantity sold for all items 
		else if (menuSelection == "2") {
			randomStore.SetAllToZero();
			randomStore.TallyAllFood();
		}

		// Outputs quantity sold for all items in the form of a Histogram
		else if (menuSelection == "3") {
			randomStore.SetAllToZero();
			randomStore.OutputFoodHisto();
		}

		// Exits program
		else if (menuSelection == "4") {
			cout << "Thank you for using this program!" << endl;
			break;
		}

		// Prompts user to enter a valid selection number if an invalid entry is entered
		else {
			cout << "Please enter a valid selection number" << endl;
		}
	}
}

int main() {
	GroceryStore genericStore;

	ProgramIntroduction();
	genericStore.SetAllToZero();
	genericStore.BackUpAllFood(); // Backup data in Frequency.dat
	DisplayMenu(genericStore);

	return 0;
}
#pragma once
#include <string>
using namespace std;

class Food {
public:
	void SetNameAndQuantity(string name, int quantity); // Sets the foodName and foodQuantity variables 
	void SetName(string name); // Sets the foodName variable 
	void SetQuantity(int quantity); // Sets the quantiy variable
	string GetName(); // Returns the name variable
	int GetQuantity(); // Returns the quantity variable 
	void IncrementQuantityByOne(); // Increments the quantity variable by +1

private:
	string foodName;
	int foodQuantity = 0;
};


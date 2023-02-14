#pragma once
#include <string>
#include "Food.h" // Food Class 
using namespace std;

class GroceryStore {
public:
	void TallyOneFood(); // Tallys quantity sold for one item, prompts user for input 
	void TallyAllFood(); // Tallys quantity sold for all items 
	void OutputFoodHisto(); // Outputs quantity sold for all items in the form of a Histogram 
	void BackUpAllFood(); // Backs up quantity sold of all food items into "frequency.dat
	void SetAllToZero();// Resets the Food class members to having a quantity of 0 and their standard name. 

private:
	Food spinach; // Each line is a Food Class item
	Food radishes;
	Food broccoli;
	Food peas;
	Food cranberries;
	Food potatoes;
	Food cucumbers;
	Food peaches;
	Food zucchini;
	Food cantaloupe;
	Food beets;
	Food cauliflower;
	Food onions;
	Food yams;
	Food apples;
	Food celery;
	Food limes;
	Food garlic;
	Food pumpkins;
	Food pears;
};


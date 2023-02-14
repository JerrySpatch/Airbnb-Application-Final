#include "Food.h"
#include <string>
using namespace std;

void Food::SetName(string name) {
	foodName = name;
}

void Food::SetQuantity(int quantity) {
	foodQuantity = quantity;
}

string Food::GetName() {
	return foodName;
}

int Food::GetQuantity() {
	return foodQuantity;
}

void Food::SetNameAndQuantity(string name, int quantity) {
	foodName = name;
	foodQuantity = quantity;
}

void Food::IncrementQuantityByOne() {
	foodQuantity += 1;
}
#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

string food = "";
string foodTwo = "";

int main(void)
{	
	cout << "What is your favorite food?" << endl;
	cin >> food;
	cout << "What is your next favotite food?" << endl;
	cin >> foodTwo;
	string newFood;
	newFood = string(food) + string(foodTwo);
	cout << string(newFood) << endl;
	getchar();
	return 0;
}

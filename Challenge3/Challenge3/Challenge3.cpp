#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

double car = 0.0;
double tax = 0.08;
double cleanCar = 2.50;
double BlinkerFluid = 40.69;
double Warenty = 222.22;
double cost = 0.0;

int main(void)
{
	cout << "How much is the car?";
	cin >> car;
	cost = (car*tax) + car + cleanCar + BlinkerFluid + Warenty;
	cout << "The car cost " << cost << "." << endl;
	getchar();
	return 0;
}


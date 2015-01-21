#include "stdafx.h"
#include <iostream>
using namespace std;

double bill = 0.0;
double fifteen = 0.0;
double twenty = 0.0;

int main(void)
{
	cout << "Bill Total:";
	cin >> bill;
	fifteen = bill * 0.15;
	twenty = bill * 0.20;
	cout << "For a 15% tip pay " << fifteen << endl;
	cout << "For a 20% tip pay " << twenty << endl;
	getchar();
	return 0;
}


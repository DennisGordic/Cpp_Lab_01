#include "stdafx.h"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;

string fortune1 = "You will eat a cookie soon!";
string fortune2 = "This is a lie D:";
string fortune3 = "Do you trust me? Good.";
string fortune4 = "I am trapped in the cookie... Get me out!";
string fortune5 = "Your fortune is in another cookie";

int main(void)
{
	int v1;
	srand(time(NULL));
	v1 = rand() % 5+1;
	if (v1 == 1){
		cout << fortune1;
	}
	else if (v1 == 2){
		cout << fortune2;
	}
	else if (v1 == 3){
		cout << fortune3;
	}
	else if (v1 == 4) {
		cout << fortune4;
	}
	else if (v1 == 5){
		cout << fortune5;
	}
	getchar();
	return 0;
}


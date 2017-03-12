// kuglice.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int pozicija1, pozicija2, x[5], y[5], buffer;
	cin >> pozicija1 >> pozicija2;
	for (int i = 0; i < 5; i++) {
		cin >> x[i] >> y[i];
	}
	for (int i = 0; i < 5; i++) {
		if (x[i] == pozicija1) { pozicija1 = y[i]; }
		else if (y[i] == pozicija1) { pozicija1 = x[i]; }
	}
	for (int i = 0; i < 5; i++) {
		if (x[i] == pozicija2) { pozicija2 = y[i]; }
		else if (y[i] == pozicija2) { pozicija2 = x[i]; }

	}if (pozicija1 > pozicija2) {
	cout << pozicija1 << " " << pozicija2;
	}
	else {
		cout << pozicija2 << " " << pozicija1;
 
 }

}

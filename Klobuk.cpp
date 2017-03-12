// ConsoleApplication6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int znamenkiharry, znamenkiherm, konstrukt,brojharry,brojherm;
	cin >> znamenkiharry >> znamenkiherm;
	brojharry = 0;
	brojherm = 0;
	for (int i = 0; i < znamenkiharry; i++) {
		cin >> konstrukt;
		if (konstrukt == 0 && brojharry == 0) {
			continue;
		} brojharry += (konstrukt*pow(10, znamenkiharry-1 - i));
	}
	for (int i = 0; i < znamenkiherm; i++) {
		cin >> konstrukt;
		if (konstrukt == 0 && brojherm == 0) {
			continue;
		} brojherm += (konstrukt*pow(10, znamenkiherm - 1 - i));
	}
	cout << "HARRY:" << brojharry << endl;
	cout << "HERMIONA:" << brojherm << endl;
	if (brojharry > brojherm) {
		cout << "HARRY ";
	}
	else if (brojherm > brojharry) {
		cout << "HERMIONA ";
	}
	else {
		cout << "JEDNAKO ";
	}
	cout << abs(brojharry - brojherm);
}


// Melman.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int sat0, minuta0, nmjerenja, mjerenje,minutamax,satmax,mjerenjemax;
	cin >> sat0 >> minuta0 >> nmjerenja;
	mjerenjemax = 0;
	for (int i = 0; i < nmjerenja; i++) {
		cin >> mjerenje;
		 minuta0 += 30; 
		if (minuta0 >= 60) {
			minuta0 -= 60;
			sat0 += 1;
		}
		if (mjerenje >= mjerenjemax) {
			minutamax = minuta0;
			satmax = sat0;
			mjerenjemax = mjerenje;
		}

	}
	cout << mjerenjemax << endl << satmax << endl << minutamax;
}


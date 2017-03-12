// jedanprotivsto.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int pare=0,izazivaci=100,ispali;
	char x;
	while (izazivaci > 0) {
		cin >> x >>ispali;
		switch (x) {
		case 'T':
			pare += 100000 / izazivaci *ispali;
			izazivaci -= ispali;
			break;
		case 'F':
			pare = 0;
			izazivaci = 0;
			break;
		case 'P':
			izazivaci -= ispali;
			break;
		}
		}
	cout << pare;
	}



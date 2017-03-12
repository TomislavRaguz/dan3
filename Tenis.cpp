// Tenis.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	int agem, bgem, poena, a, b;
	char x;
	bool adva = false, advb = false;
	string kr;
	a = 0;
	b = 0;
	cin >> agem >> bgem >> poena;
	for (int i = 0; i < poena; i++) {
		cin >> x;
		switch (x) {
		case 'A':
			a++;
			break;
		case 'B':
			b++;
			break;
		}
			if (a > 3 && a - b > 1) {
				agem++;
				a = 0;
				b = 0;
			}
			else if (b > 3 && b - a > 1) {
				bgem++;
				a = 0;
				b = 0;
			}
			if (agem == 6 && agem - bgem > 1 || bgem == 6 && bgem - agem > 1 || agem == 7 || bgem == 7)
			{
				goto GOTOVO;
			}
		}
	if (a > 3 && a == b) {
		string kr = "deuce";
	} else if (b > 3 && (b - a)  == 1) {
		string kr = "40:AD-B";
		advb = true;
	} else if (a > 3 && (a - b)  == 1) {
		string kr = "AD-A:40";
		adva = true;
	}
	switch (a) {
	case 1: a = 15;
		break;
	case 2: a = 30;
		break;
	case 3: a = 40;
		break;
	}
	switch (b) {
	case 1: b = 15;
		break;
	case 2: b = 30;
		break;
	case 3: b = 40;
		break;
	}
	if (a > 3 && a == b) {
		cout << agem << ":" << bgem << " " << "deuce";
	}
	else if (adva == true) {
		cout << agem << ":" << bgem << " " << "AD-A";
	}
	else if (advb == true) {
		cout << agem << ":" << bgem << " " << "AD-B";
	}
	else {
		GOTOVO:cout << agem << ":" << bgem << " " << a << ":" << b;
	}
}


	


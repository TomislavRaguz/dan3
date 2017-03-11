// Bond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f,ab,bc,cd,de,abc,bce,cde,abcd,bcde,abcde,bi,bj,bk,bl,drag;
	char operatori[4];
	cin >> a >> b >> c >> d >> e >> f;
	ab = a*b;
	bc = b*c;
	cd = c*d;
	de = d*e;
	abc = a*b*c;
	bce = b*c*e;
	cde = c*d*e;
	abcd = a*b*c*d;
	bcde = b*c*d*e;
	abcde = a*b*c*d*e;
	operatori[0] = '+';
	operatori[1] = '-';
	operatori[2] = '*';
	operatori[3] = '/';
	drag = 0;
	bi = -1;
	for (int i = 0; i < 2; i++) {
		bi++;
		bj = -1;
		switch (operatori[i]) {
		case '+':
			drag = a + b;
			break;
		case '-':
			drag = a - b;
			break;
		}
		for (int j=0; j < 2; j++) {
			bj++;
			bk = -1;
			switch (operatori[j]) {
			case '+':
				drag += c;
				break;
			case '-':
				drag -= c;
			} for (int k=0; k < 2; k++) {
				bk++;
				bl = -1;
				switch (operatori[k]) {
				case '+':
					drag += d;
					break;
				case '-':
					drag -= d;
					break;
				} for (int l = 0; l < 2; l++) {
					bl++;
					switch (operatori[l]) {
					case '+':
						drag += e;
						break;
					case '-':
						drag -= e;
						break;
					}
					if (drag == f) {
						goto GOTOVO;
					}
				}
			}
		}
	}
GOTOVO:cout << a << operatori[bi] << b << operatori[bj] << c << operatori[bk]<< d<<operatori[bl]<<e <<"="<<f;
}



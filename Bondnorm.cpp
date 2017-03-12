// Bondnorm.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d, e, f,drag,b1,b2,b3,b4,dragi,dragii,dragiii,dragiiii;
	cin >> a >> b >> c >> d >> e >> f;
	char operatori[4];
	operatori[0] = '+';
	operatori[1] = '-';
	operatori[2] = '*';
	operatori[3] = '/';
	b1 = -1;
	for (int i = 0; i < 4; i++) {
		b1++;
		b2 = -1;
		switch (i) {
		case '+':
			drag = a + b;
			break;
		case '-':
			drag = a - b;
			break;
		case '*':
			drag = a*b;
			break;
		case '/':
			drag = a / b;
			break;
		} dragi = drag;
		for (int i = 0; i < 4; i++) {
			drag = dragi;
			b2++;
			b3 = -1;
			switch (i) {
			case '+':
				drag +=c;
				break;
			case '-':
				drag -=c;
				break;
			case '*':
				drag +=c;
				break;
			case '/':
				drag /=c;
				break;
			} dragii = drag;
			for (int i = 0; i < 4; i++) {
				drag = dragii;
				b3++;
				b4 = -1;
				switch (i) {
				case '+':
					drag += d;
					break;
				case '-':
					drag -= d;
					break;
				case '*':
					drag += d;
					break;
				case '/':
					drag /= d;
					break;
				} dragiii = drag;
				for (int i = 0; i < 4; i++) {
					drag = dragiii;
					b4++;
					switch (i) {
					case '+':
						drag += e;
						break;
					case '-':
						drag -= e;
						break;
					case '*':
						drag *= e;
						break;
					case '/':
						drag /= e;
						break;
					}
					if (drag == f) { goto GOTOVO; }
				}
			}
		}
	}
GOTOVO:cout << a<<operatori[b1] <<b<<operatori[b2]<<c<<operatori[b3]<<d<<operatori[b4]<<e<<"="<<f;
}


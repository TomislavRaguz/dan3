// tune.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int btuna, maxr, p1, p2, p3,r,uvr,v;
	cin >> btuna;
	cin >> maxr;
	uvr = 0;
	for (int i = 0; i < btuna; i++) {
		cin >> p1;
		cin >> p2;
		r = abs(p1 - p2); 
		if (r > maxr) {
			cin >> p3;
			v = p3;
		}
		else if (p1 > p2) {
			v = p1;
		} else {
			v = p2;
		}
		uvr += v;
		}
	cout << uvr;
	}



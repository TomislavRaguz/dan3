// pcelac.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int polja[8], put1[8], put2[4], put3[4], put4[2],p1=50,p2=50,p3=50,p4=50;
	put1[0] = 1;
	put1[1] = 2;
	put1[2] = 3;
	put1[3] = 4;
	put1[4] = 5;
	put1[5] = 6;
	put1[6] = 7;
	put1[7] = 8;
	put2[0] = 1;
	put2[1] = 2;
	put2[2] = 3;
	put2[3] = 4;
	put3[0] = 5;
	put3[1] = 6;
	put3[2] = 7;
	put3[3] = 8;
	put4[0] = 5;
	put4[1] = 4;
	for (int i = 0; i < 8; i++) {
		cin >> polja[i];
	}
	for (int i = 0; i < 8; i++) {
		p1 += polja[put1[i]-1];
		if (p1 < 0) { break; }
	}
	for (int i = 0; i < 4; i++) {
		p2 += polja[put2[i]-1];
		if (p2 < 0) { break; }
	}
	for (int i = 0; i < 4; i++) {
		p3 += polja[put3[i]-1];
		if (p3 < 0) { break; }
	}
	for (int i = 0; i < 2; i++) {
		p4 += polja[put4[i]-1];
		if (p4 < 0) { break; }
	}
	cout << "0 ";
	if (p1 > p2 && p1 >p3 && p1 > p4) {
		for (int i = 0; i < 8; i++) {
			cout << put1[i]<<" ";
	}
		cout <<"9"<<endl<< p1;
	}
	if (p2 > p1 && p2 >p3 && p2 > p4) {
		for (int i = 0; i < 4; i++) {
			cout << put2[i]<<" ";
		}
		cout << "9" << endl << p2;
	
	}
	if (p3 > p1 && p3 >p2 && p3 > p4) {
		for (int i = 0; i < 4; i++) {
			cout << put3[i]<<" ";
		}
		cout << "9" << endl << p3;
	}
	if (p4 > p1 && p4 >p2 && p4 > p3) {
		for (int i = 0; i < 2; i++) {
			cout << put4[i] <<" ";
		}
		cout << "9" << endl << p4;
	}
}


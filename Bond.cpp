// Bond.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b, c, d, e, f, bi, bj, bk, bl, bjp, bip, bkp, blp, drag, aa, bb, cc, dd, ee, aaa, bbb, ccc, ddd, eee,bgi,di,dii,diii,diiii,ai,aii,aiii,bii,biii,ci,cii,ciii,ei;
	char operatori[103];
	cin >> a >> b >> c >> d >> e >> f;
	aa = a;
	bb = b;
	cc = c;
	dd = d;
	ee = e;
	operatori[0] = '+';
	operatori[1] = '-';
	operatori[50] = '*';
	operatori[51] = '*';
	operatori[100] = '/';
	operatori[101] = '/';
		aaa = aa;
		bbb = bb;
		ccc = cc;
		ddd = dd;
		eee = ee;
			for (int q = 0; q < 3; q++) {
				bbb = bb;
				aaa = aa;
				bip = 0;
				if (q == 1 ) { bbb = bbb*aaa; aaa = 0; bip = 50; }
				if (q == 2 && bbb%aaa == 0 && aaa != 0 ) { bbb = bbb / aaa; aaa = 0; bip = 100; }
				ai = aaa;
				bgi = bbb;
				for (int w = 0; w < 3; w++) {
					ccc = cc;
					bbb = bgi;
					bjp = 0;
					if (w == 1 ) { ccc = ccc*bbb; bbb = 0; bjp = 50; }
				    if (w == 2 && ccc%bbb == 0 && bbb != 0) { ccc = ccc / bbb; bbb = 0; bjp = 100; }
					bii = bbb;
					ci = ccc;
						for (int t = 0; t < 3; t++) {
							bkp = 0;
							ddd = dd;
						    ccc = ci;
							if (t == 1 ) { ddd = ddd*ccc; ccc = 0; bkp = 50; } 
							if (t == 2 && ddd%ccc == 0 && ccc!= 0) { ddd = ddd / ccc; ccc = 0; bkp = 100; }
							cii = ccc;
							di = ddd;
							for (int r = 0; r < 3; r++) {	
								blp = 0;
								eee = ee;
							    ddd = di;
								if (r == 1) { eee = eee*ddd; ddd = 0; blp = 50; }
								if (r == 2 && eee%ddd == 0 && ddd != 0) { eee = eee / ddd; ddd = 0; blp = 100; }
								dii = ddd;
								a = ai;
								b = bii;
								c = cii;
								d = dii;
								e = eee;
								bi = -1 + bip;
								for (int i = 0; i < 2; i++) {
									bi++;
									bj = -1 + bjp;
									switch (operatori[i]) {
									case '+':
										drag = a+ b;
										break;
									case '-':
										drag = a-b;
										break;
									} di=drag  ;
									for (int j = 0; j < 2; j++) {
										bj++;
										drag = di;
										bk = -1 + bkp;
										switch (operatori[j]) {
										case '+':
											drag += c;
											break;
										case '-':
											drag -= c;
											break;
											} 
										dii = drag;
										for (int k = 0; k < 2; k++) {
											bk++;
											drag = dii;
											bl = -1 + blp;
											switch (operatori[k]) {
											case '+':
												drag += d;
												break;
											case '-':
												drag -= d;
												break;
											}
												diii = drag;
											 for (int l = 0; l < 2; l++) {
												bl++;
												drag = diii;
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
							}
						
					}
				}
			}GOTOVO:cout << aa << operatori[bi] << bb << operatori[bj] << cc << operatori[bk] << dd << operatori[bl] << ee << "=" << f;

		}


						

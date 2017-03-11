// Go.cpp : Defines the entry point for the console application.
//



#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
int main() {
	int brojpok, slatkpoev[70], ukupnoslatk[70], evolucija[70], pokemax, evoltot;
	string imenapok[70];
	cin >> brojpok;
	for (int i = 0; i < brojpok; i++) {
		cin >> imenapok[i];
		cin >> slatkpoev[i];
		cin >> ukupnoslatk[i];
		evolucija[i] = 0;
		do {
			ukupnoslatk[i] += 2;
			ukupnoslatk[i] = ukupnoslatk[i] - slatkpoev[i];
			evolucija[i]++;
		} while (ukupnoslatk[i] >= slatkpoev[i]);
	} // radi
	evoltot = 0;
	pokemax = 0;
	for (int i = 0; i < brojpok; i++) {
		evoltot += evolucija[i];
		if (evolucija[i] > evolucija[pokemax]) {
			pokemax = i;
		}
		else {
			continue;
		}
	}
	cout << evoltot << endl << imenapok[pokemax];
}
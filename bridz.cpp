// bridz.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;
int main()
{
	int ruke, hpoints;
		char hand;
		 hpoints = 0;
		 cin >> ruke;
		 for (int g = 0; g < ruke; g++) {
			 for (int i = 0; i < 13; i++) {
				 cin >> hand;
				 switch (hand) {
				 case 'A':
					 hpoints += 4;
					 break;
				 case 'K':
					 hpoints += 3;
					 break;
				 case 'Q':
					 hpoints += 2;
					 break;
				 case 'J':
					 hpoints += 1;
					 break;
				 default:
					 continue;

				 }

			 }
		 }
		cout << hpoints;
}


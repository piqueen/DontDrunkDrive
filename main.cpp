/*
 * main.cpp
 *
 *  Created on: Nov 11, 2017
 *      Author: Zack White
 *     Purpose: driver file
 */

#include "DrunkTest.h"

int main() {
	sober test;
	int x;

	cout << "What sort of sobriety test do you want to take?\n"
		 << "\t1. logic\n" << "\t2. math\n" << "\t3. user information\n";
	cout << " \n> ";
	cin >> x;

	do {
		if (x == 1)
			bool status = test.logicPuzzle();
		else if (x == 2)
			bool status = test.mathPuzzle();
		else if (x == 3)
			bool status = test.userIDPuzzle();
		else {
			cout << "\nError, pick 1 2 or 3.\n";
		}
	} while ((x != 1)||(x != 2)||(x != 3));
}

/*
 * DrunkTest.cpp
 *
 *  Created on: Nov 11, 2017
 *      Author: Zack White
 *     Purpose: implementation for DrunkTest
 */

#include "DrunkTest.h"

sober::sober() {
	drunk = false;
	cout << "Enter your first name > ";
	cin >> firstName;
	cout << "Enter your last name > ";
	cin >> lastName;
}

void sober::outputMessage(bool drunk) {
	if (drunk) {
		cout << "You are too drunk to drive safely!" << endl;
		cout << "Please order an uber or make other travel plans.";
	}
	else {
		cout << "You are safe to drive! Good job being responsible." << endl;
	}
}

bool sober::logicPuzzle() {
	char answer;

	cout << "Alan's father has five kids: Monday, Tuesday, Wednesday,\n"
		 << " and Thursday are the first four. What is the fifth kids name?\n";
	cout << "\tA. Friday\n" << "\tB. Saturday\n" << "\tC. Alan\n" << "\tD. Sunday\n";
	cout << " > ";
	cin >> answer;
	if (answer != 'C' || answer != 'c')
		return drunk = true;

	cout << "John is twice as old as his eight-year old sister Katie,\n "
		 << "who is one-third as old as their cousin Eddie.\n "
		 << "When Eddie is thirty, how old will John be?\n";
	cout << "\tA. 19\n" << "\tB. 22\n" << "\tC. 30\n" << "\tD. 25\n";
	cout << " > ";
	cin >> answer;
	if (answer != 'B')
		return drunk = true;

	cout << "Six wolves catch six lambs in six minutes.\n"
		 << "How many wolves are needed to catch sixty lambs in one hour?\n";
	cout << "\tA. six\n" << "\tB. ten\n" << "\tC. sixty\n" << "\tD. thirty-six\n";
	cout << " > ";
	cin >> answer;
	if (answer != 'A')
		return drunk = true;

	return drunk;
}

bool sober::mathPuzzle() {
	int answer;

	cout << "40 X 7 = ";
	cout << " \n> ";
	cin >> answer;
	if (answer != (40*7)) {
		return drunk = true;
	}

	cout << "594 + 276 = " ;
	cout << " \n> ";
	cin >> answer;
	if (answer != (594+276)) {
		return drunk = true;
	}

	cout << "Dave has twelve apples. He gives five of them to "
		 << "\nEddie. Eddie gives all but one of his apples to Alex."
		 << "\nAlex then gives half of his apples back to Dave."
		 << "\nHow many apples does Dave have now?";
	cout << " \n> ";
	cin >> answer;
	if (answer != 9) {
		return drunk = true;
	}
	return drunk;
}

bool sober::userIDPuzzle() {
	string answer;

	cout << "What is your first name?\n";
	cout << " \n> ";
	cin >> answer;
	if (answer != firstName)
		return drunk = true;

	cout << "What is your last name?\n";
	cout << " \n> ";
	cin >> answer;
	if (answer != lastName)
		return drunk = true;

	return drunk;
}

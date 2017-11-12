/*
 * DrunkTest.h
 *
 *  Created on: Nov 11, 2017
 *      Author: Zack White
 *     Purpose:
 */

#ifndef DRUNKTEST_H_
#define DRUNKTEST_H_

#include <iostream>
using namespace std;

class sober {
public:
	sober();
	void outputMessage(bool);
	bool logicPuzzle();
	bool mathPuzzle();
	bool userIDPuzzle();

private:
	bool drunk;
	string firstName;
	string lastName;
	//double BAC;

};



#endif /* DRUNKTEST_H_ */

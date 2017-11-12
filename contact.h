/*
 * contact.h
 *
 *  Created on: Nov 11, 2017
 *      Author: zackwhite
 */

#ifndef CONTACT_H_
#define CONTACT_H_

#include <iostream>
#include <vector>
using namespace std;

class Contact{
	private:
		string name, number;

	public:
		Contact(){
			name = "", number = "";
		}
		void setname(string nm){name=nm;}
		string getName()
			{return name;}
		void setPhoneNum(string num){number=num;}
		string getPhoneNum()
    			{return number;}
};


#endif /* CONTACT_H_ */



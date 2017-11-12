/*
 * testing.cpp
 *
 *  Created on: Nov 11, 2017
 *      Author: zackwhite
 */

#include "contact.h"
#include <iostream>
#include <vector>
using namespace std;

int main() {
	string user;
	vector <string> contactName, contactNum;
	cout<< "Hey there, what should I call you?";
	cin >> user;
	cout<< "Hey " << user << " how's it going, good I hope. I want you to think about three people" <<
			" that you trust with your life, because they will be you emergency contacts " <<
			"in your time of trouble." << endl;
	cout<< "Please enter your first contact's name" << endl;
	Contact cont1, cont2, cont3;
	string name, num;
	cin >> name;
	cont1.setname(name);
	contactName.push_back(cont1.getName());
	cout<<"Great, and now their number" << endl;
	cin >> num;
	cont1.setPhoneNum(num);
	contactNum.push_back(cont1.getPhoneNum());
	cout<< "Got it! You've entered " << cont1.getName() << " as your first life-line, hope you chose well!" <<
			" One down, two to go! Please enter your your next contact's name."<< endl;
	cin >> name;
	cont2.setname(name);
	contactName.push_back(cont2.getName());
	cout<<"Great, and now their number"<< endl;
	cin >> num;
	cont2.setPhoneNum(num);
	contactNum.push_back(cont2.getPhoneNum());
	cout<< "Got it! You've entered " << cont2.getName() << " as your second life-line, hope you chose well!" <<
			" Two down, one to go! Please enter your your last contact's name."<< endl;
	cin >> name;
	cont3.setname(name);
	contactName.push_back(cont3.getName());
	cout<<"Great, and now their number"<< endl;
	cin >> num;
	cont3.setPhoneNum(num);
	contactNum.push_back(cont3.getPhoneNum());
	cout<< "Got it! You've entered " << cont1.getName() << " as your last life-line, hope you chose well!" <<
			" But you are all set!"<< endl << endl << user << "'s contacts"<< endl ;
	for(int i=0; i<3; i++){
		cout << "Name: " << contactName[i] <<"\t" << "Number: " << contactNum [i]<< endl;
	}

	return 0;
}


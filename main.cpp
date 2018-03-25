/*
 * main.cpp
 *
 *  Created on: Jan 23, 2018
 *      Author: f_wawros
 */

#include "customer.h"
#include <iostream>
#include <string.h>
using namespace std;

int main() {//driver testing all member functions

	Customer c1;
	cout << "Default Constructor" << endl;
	c1.printInfo();
	cout << endl << endl;

	Customer c2("Felix Wawrosz","5122 Home", "5144858790", 14,04,1996);
	cout << "Constructor" << endl;
	c2.printInfo();
	cout << endl << endl;

	Customer c3 = c2;
	cout << "Copy Constructor" << endl;
	c3.printInfo();
	cout << endl << endl;

	//getters
	cout << "c3: Address: " << c3.getAddress() << endl << "c3: Name: " << c3.getName() << endl << "c3: Tel: " << c3.getTel() << endl;
	cout << endl << endl;

	//setters
	c3.setAddress("1600 pensilvania avenue");
	c3.setName("John Doe");
	c3.setTel("51455555555");
	c3.setDate(4,4,1999);
	c3.printInfo();
	cout << endl << endl;








	return 0;
}



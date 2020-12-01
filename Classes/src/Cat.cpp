/*
 * Cat.cpp
 *
 *  Created on: 29-Nov-2020
 *      Author: vishnukumar
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	// TODO Auto-generated constructor stub

	cout << "Instantiating object" << endl;

	happy = true;

}

Cat::~Cat() {
	// TODO Auto-generated destructor stub
	cout << "Destroying the garbage";
}

void Cat::speak() {
	if (happy) {
		cout << "Meowwww!!!!" << endl;
	} else {
		cout << "Ssssshhhhh!!!!" << endl;
	}
}


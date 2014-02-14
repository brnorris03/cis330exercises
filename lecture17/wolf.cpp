/*
 * wolf.cpp
 *
 *  Created on: Feb 2, 2014
 *      Author: norris
 */

#include <iostream>
#include "wolf.hpp"

using namespace std;
/*
 * Wolf class implementation
 */
Wolf::Wolf() : Quadruped() {

}

void
Wolf::eat() {
	cout << "Wolf eating some veggies..." << endl;
}

void
Wolf::drink() {
	cout << "Wolf drinking from river..." << endl;
}

void
Wolf::sleep() {
	cout << "Wolf sleeping in the woods..." << endl;
}

void
Wolf::hunt(world::Animal *animal) {
	cout << "Wolf dining on " << animal->toString() << "..." << endl;
	delete animal;
}

string
Wolf::toString() {
	return " wolf";
}



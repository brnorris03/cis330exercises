/*
 * farmer.cpp
 *
 *  Created on: Feb 3, 2014
 *      Author: norris
 */

#include <iostream>
#include "sheep.hpp"
#include "farmer.hpp"

Farmer::Farmer() {
	// TODO Auto-generated constructor stub

}

Farmer::~Farmer() {
	// TODO Auto-generated destructor stub
}

void
Farmer::shearSheep(Sheep &s) {
	s.wool = NULL;
	std::cout << "Farmer shearing sheep "<<  std::endl;
}

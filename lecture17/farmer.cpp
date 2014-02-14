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
	std::cout << "Farmer shearing " << s.toString() <<  std::endl;
	s.wool = Wool("Sheared");  // until it grows again
}

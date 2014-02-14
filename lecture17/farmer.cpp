/*
 * farmer.cpp
 *
 *  Created on: Feb 3, 2014
 *      Author: norris
 */

#include <iostream>
#include "sheep.hpp"
#include "farmer.hpp"

Farmer::Farmer(unsigned nSheep) : numSheep(nSheep) {
}

Farmer::~Farmer() {
}

void
Farmer::countSheep(const std::vector<Sheep*> flock) {
	if (flock.size() < this->numSheep) {
		std::cout << "Farmer Joe discovers that he is missing some sheep and goes searching..." << std::endl;
	} else if (flock.size() == this->numSheep) {
		std::cout << "Farmer Joe counts his sheep -- all there!" << std::endl;
	} else {
		std::cout << "Farmer Joe is astounded to find some extra sheep..." << std::endl;
	}
}

void
Farmer::shearSheep(Sheep &s) {
	std::cout << "Farmer shearing " << s.toString() <<  std::endl;
	s.wool = Wool("Sheared");  // until it grows again
}

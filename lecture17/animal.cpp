/*
 * animal.cpp
 *
 *  Created on: Feb 2, 2014
 *      Author: norris
 */

#include "animal.hpp"

namespace world {
/*
 * Animal class implementation
 */
Animal::Animal() : legs(0), carnivorous(false) {
}

Animal::~Animal() {
	// If we had allocated memory, we would be deallocating it here
}

bool
Animal::isCarnivorous() {
	return this->carnivorous;
}

int
Animal::legCount() {
	return this->legs;
}
}; // namespace world




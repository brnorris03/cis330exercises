/*
 * quadruped.cpp
 *
 *  Created on: Feb 2, 2014
 *      Author: norris
 */

#include "animal.hpp"
#include "quadruped.hpp"
/*
 * Quadruped class implementation
 */
Quadruped::Quadruped() : world::Animal() {
	this->legs = 4;
}

Quadruped::~Quadruped() {}



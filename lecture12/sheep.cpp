/*
 * sheep.cpp
 *
 *  Created on: Feb 2, 2014
 *      Author: norris
 */

#include <string>
#include <iostream>
#include "sheep.hpp"

using namespace std;

/*
 * Wool class implementation
 */

Wool::Wool() {
	color = "White";
}

Wool::Wool(string color) {
	this->color = color;
}

void
Wool::setColor(string color) {
	this->color = color;
}

const string
Wool::getColor() {
	return this->color;
}


/*
 * Sheep class implementation
 */

Sheep::Sheep() : Quadruped() {
}

void
Sheep::eat() {
	cout << wool->getColor() << " sheep grazing some grass...baa!" << endl;
}

void
Sheep::drink() {
	cout << wool->getColor() << " sheep drinking from trough...baa!" << endl;
}

void
Sheep::sleep() {
	cout << wool->getColor() << " sheep sleeping in barn...zzz!" << endl;
}

void
Sheep::growWool(const Wool &w) {
	this->wool = const_cast<Wool*>(&w);
}

const Wool&
Sheep::getWool() {
	return *(this->wool);
}

string
Sheep::toString() {
	return this->wool->getColor() + " sheep";
}

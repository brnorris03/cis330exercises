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

Wool::Wool() : color("White") {
}

Wool::Wool(string c) : color(c) {
}

// Copy constructor:
Wool::Wool(const Wool& other) : color(other.color) {
	cout << "Wool copy constructor" << endl;
}

// Move constructor
Wool::Wool(Wool&& other) : color(other.color) {
	cout << "Wool move constructor" << endl;
}

Wool& 
Wool::operator=(const Wool& rhs)  {
	this->color = rhs.color;
	return *this;
}

Wool& 
Wool::operator=(Wool&& rhs) {
	this->color = rhs.color;
	return *this;
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

// Copy constructor
Sheep::Sheep(const Sheep& rhs) : wool(rhs.wool) {
}

// Move constructor
Sheep::Sheep(Sheep&& rhs) : wool(rhs.wool) {
}

// Destructor
Sheep::~Sheep() {
}

void
Sheep::eat() {
	cout << wool.getColor() << " sheep grazing some grass...baa!" << endl;
}

void
Sheep::drink() {
	cout << wool.getColor() << " sheep drinking from trough...baa!" << endl;
}

void
Sheep::sleep() {
	cout << wool.getColor() << " sheep sleeping in barn...zzz!" << endl;
}

void
Sheep::growWool(const Wool &w) {
	this->wool = w;
	cout << wool.getColor() << " sheep growing some wool..." << endl;
}

void
Sheep::growWool(Wool &&w) {		// rvalue reference
	this->wool = w;
	cout << "Sheep growing some " << wool.getColor() << " wool more efficiently." << endl;
}

const Wool&
Sheep::getWool() {
	return this->wool;
}

string
Sheep::toString() {
	return this->wool.getColor() + " sheep";
}

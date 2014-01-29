#include <string>
#include <iostream>
#include "allanimals.hpp"

using namespace std;

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
};

/*
 * Quadruped class implementation
 */
Quadruped::Quadruped() : world::Animal() {
	this->legs = 4;
}

Quadruped::~Quadruped() {}

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
Wolf::hunt(world::Animal &animal) {
	this->prey = &animal;
	cout << "Wolf dining on " << animal.toString() << "..." << endl;
}

string
Wolf::toString() {
	return " wolf";
}

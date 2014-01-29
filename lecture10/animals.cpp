#include <string>
#include <iostream>
#include "allanimals.hpp"

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

/*
 * Quadruped class implementation
 */
Quadruped::Quadruped() : Animal() {
	this->legs = 4;
}

/*
 * Wool class implementation
 */

Wool::Wool() {
	color = "White";
}

Wool::Wool(std::string color) {
	this->color = color;
}

void
Wool::setColor(std::string color) {
	this->color = color;
}

const std::string
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
	std::cout << wool->getColor() << " sheep grazing some grass...baa!" << std::endl;
}

void
Sheep::drink() {
	std::cout << wool->getColor() << " sheep drinking from trough...baa!" << std::endl;
}

void
Sheep::sleep() {
	std::cout << wool->getColor() << " sheep sleeping in barn..." << std::endl;
}

void
Sheep::growWool(const Wool &w) {
	this->wool = const_cast<Wool*>(&w);
}

const Wool&
Sheep::getWool() {
	return *(this->wool);
}

/*
 * Wolf class implementation
 */
Wolf::Wolf() : Quadruped() {

}

void
Wolf::eat() {
	std::cout << "Wolf eating some veggies..." << std::endl;
}

void
Wolf::drink() {
	std::cout << "Wolf drinking from river..." << std::endl;
}

void
Wolf::sleep() {
	std::cout << "Wolf sleeping in the woods..." << std::endl;
}

void
Wolf::hunt(const Animal &animal) {
	this->prey = &animal;
	std::cout << "Wolf dining on animal..." << std::endl;
}


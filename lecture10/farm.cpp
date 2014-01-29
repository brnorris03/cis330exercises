/*
 * farm.cpp
 *
 *  Created on: Jan 28, 2014
 *      Author: norris
 */

#include "allanimals.hpp"

int main() {

	Sheep sheep;
	Wolf wolf;
	Wool blackWool("Black");

	sheep.growWool(blackWool);
	sheep.eat();
	sheep.drink();
	sheep.sleep();

	wolf.drink();
	wolf.hunt(sheep);
	return 0;
}

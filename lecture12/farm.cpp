/*
 * farm.cpp
 *
 *  Created on: Jan 28, 2014
 *      Author: norris
 */

#include "allanimals.hpp"

using namespace world;

int main() {

	Sheep sheep;
	Sheep *sheepPtr = new Sheep();
	Wolf wolf;
	Wool blackWool("Black");

	sheep.growWool(blackWool);
	sheep.eat();
	sheep.drink();
	sheep.sleep();

	sheepPtr->growWool(blackWool);
	wolf.drink();
	wolf.hunt(sheepPtr);
	return 0;
}

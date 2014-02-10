/*
 * farm.cpp
 *
 *  Created on: Jan 28, 2014
 *      Author: norris
 */

#include "allanimals.hpp"
#include "farmer.hpp"

using namespace world;

int main() {

	Sheep sheep;
	Wolf wolf;
	//Wool blackWool("Black");
	Wool w = Wool("White");

	//sheep.growWool(blackWool);
	sheep.growWool(Wool("Black"));
	sheep.eat();
	sheep.drink();
	sheep.sleep();

	Farmer joe;
	joe.shearSheep(sheep);

	Sheep *unlucky = new Sheep();
	unlucky->growWool(Wool("Tan"));
	wolf.drink();
	wolf.hunt(unlucky);
	return 0;
}

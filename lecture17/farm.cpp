/*
 * farm.cpp
 *
 *  Created on: Jan 28, 2014
 *      Author: norris
 */

#include <vector>
#include <cstdlib>
#include <iostream>
#include "allanimals.hpp"
#include "farmer.hpp"

using namespace world;

int main() {

	using namespace std;

	string woolcolors[] = {"Black", "White", "Grey", "Spotted", "Green"};

	vector<Sheep*> flock;   // We could also store Sheep directly instead of pointers
	// Make 10 sheep of various colors
	for (int i = 0; i < 5; i++) {
		Sheep *newsheep = new Sheep();
		newsheep->growWool(Wool(woolcolors[i]));
		flock.push_back(newsheep);
	}

	Farmer joe(flock.size());
	joe.countSheep(flock);

	// -----
	Wolf wolf;
	wolf.drink();

	// Random sheep wonders away...
	int index = rand() % flock.size();
	Sheep *unlucky = flock[index];
	flock.erase(flock.begin()+index);
	cout << unlucky->toString() << " wonders away from flock..." << endl;

	// ... and gets eaten
	wolf.hunt(unlucky);

	// Farmer Joe checks on the flock  again
	joe.countSheep(flock);
	for (auto sheepPtr = flock.begin(); sheepPtr != flock.end(); ++sheepPtr) {
		if ((*sheepPtr) != nullptr)
			joe.shearSheep(*(*sheepPtr)); // first dereference gets a Sheep *
	}

	// Should deallocate sheep here (kill the herd)
	for (auto sheepPtr = flock.begin(); sheepPtr != flock.end(); ++sheepPtr) {
		if ((*sheepPtr) != nullptr) { // first dereference gets a Sheep *
			delete *sheepPtr;
			*sheepPtr = nullptr;
		}
	}

	return 0;
}

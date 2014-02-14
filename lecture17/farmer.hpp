/*
 * farmer.hpp
 *
 *  Created on: Feb 3, 2014
 *      Author: norris
 */

#ifndef FARMER_HPP_
#define FARMER_HPP_

#include <vector>

class Farmer {
public:
	Farmer(unsigned numSheep);
	virtual ~Farmer();
	void countSheep(const std::vector<Sheep*> flock);
	void shearSheep(Sheep &s);
private:
	unsigned numSheep;
};

#endif /* FARMER_HPP_ */

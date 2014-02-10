/*
 * farmer.hpp
 *
 *  Created on: Feb 3, 2014
 *      Author: norris
 */

#ifndef FARMER_HPP_
#define FARMER_HPP_

class Farmer {
public:
	Farmer();
	virtual ~Farmer();
	void shearSheep(Sheep &s);
};

#endif /* FARMER_HPP_ */

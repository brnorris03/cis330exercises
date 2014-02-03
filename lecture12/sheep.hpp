#ifndef SHEEP_HPP_
#define SHEEP_HPP_

#include <string>
#include "quadruped.hpp"

using namespace std;

class Wool {
public:
	Wool();
	Wool(string color);
	inline void setColor(string color);
	inline const string getColor();
private:
	string color;
};

class Sheep : public Quadruped {
public:
    Sheep();
    // Overridden functions
    virtual void eat();
    virtual void sleep();
    virtual void drink();
    virtual string toString();

    // New functions in this class
    void growWool(const Wool&);
    const Wool& getWool();

    // Make Farmer
    friend class Farmer;
private:
    Wool *wool;
};

#endif /* SHEEP_HPP_ */

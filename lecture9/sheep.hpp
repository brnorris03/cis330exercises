#ifndef SHEEP_HPP_
#define SHEEP_HPP_

#include <string>
#include "quadruped.hpp"

class Wool {
public:
	Wool();
	Wool(std::string color);
	inline void setColor(std::string color);
	inline const std::string getColor();
private:
	std::string color;
};

class Sheep : public Quadruped {
public:
    Sheep();
    // Overridden functions
    virtual void eat();
    virtual void sleep();
    virtual void drink();

    // New functions in this class
    void growWool(const Wool&);
    const Wool& getWool();
private:
    Wool *wool;
};

#endif /* SHEEP_HPP_ */

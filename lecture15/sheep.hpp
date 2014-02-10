#ifndef SHEEP_HPP_
#define SHEEP_HPP_

#include <string>
#include "quadruped.hpp"

using namespace std;

class Wool {
public:

	// Constructors
	// Default constructor
	Wool();

	// Constructor with initialization
	Wool(string color);

	// Copy constructor:
	Wool(const Wool& other);

	// Move constructor
	Wool(Wool&& other);

	// Assignment
	Wool& operator=(const Wool&);
        Wool& operator=(Wool&&);

	inline void setColor(string color);
	inline const string getColor();
private:
	string color;
};

class Sheep : public Quadruped {
public:
    Sheep();   // Default constructor
    Sheep(const Sheep& s); // copy constructor
    Sheep(Sheep&& s); // move constructor

    ~Sheep(); // destructor

    // Overridden functions
    virtual void eat();
    virtual void sleep();
    virtual void drink();
    virtual string toString();

    // New functions in this class
    void growWool(const Wool&);
    void growWool(Wool&&);     // rvalue reference
    const Wool& getWool();

    // Make Farmer
    friend class Farmer;
private:
    Wool wool;
};

#endif /* SHEEP_HPP_ */

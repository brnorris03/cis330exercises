#ifndef WOLF_HPP_
#define WOLF_HPP_

#include <string>
#include "animal.hpp"
#include "quadruped.hpp"

class Wolf : public Quadruped {
public:
    Wolf();
    Wolf(const Wolf&); // copy constructor
    Wolf(Wolf&&); // move constructor

    // Overridden functions
    virtual void eat();
    virtual void sleep();
    virtual void drink();
    virtual std::string toString();

    // New functions in this class
    void hunt(world::Animal *);
};

#endif /* WOLF_HPP_ */

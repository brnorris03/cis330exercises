#ifndef WOLF_HPP_
#define WOLF_HPP_

#include "animal.hpp"
#include "quadruped.hpp"

class Wolf : public Quadruped {
public:
    Wolf();
    // Overridden functions
    virtual void eat();
    virtual void sleep();
    virtual void drink();
    virtual string toString();

    // New functions in this class
    void hunt(world::Animal&);
private:
    const world::Animal *prey;
};

#endif /* WOLF_HPP_ */

#ifndef QUADRUPED_HPP_
#define QUADRUPED_HPP_

#include "animal.hpp"

class Quadruped : public Animal {
public:
    Quadruped();
    void walk();
    void run();
};


#endif /* QUADRUPED_HPP_ */

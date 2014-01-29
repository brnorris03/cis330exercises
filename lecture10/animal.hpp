#ifndef ANIMAL_HPP_
#define ANIMAL_HPP_

#include <string>

namespace world {
class Animal {
public: 
	Animal();
	virtual ~Animal() = 0;
    virtual void eat() = 0;
    virtual void sleep() = 0;
    virtual void drink() = 0;
    virtual std::string toString() = 0;
    inline int legCount();
    inline bool isCarnivorous();
protected:
    int legs;
    bool carnivorous;
};
};
#endif /* ANIMAL_HPP_ */

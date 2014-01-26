#ifndef QUADRUPED_H_
#define QUADRUPED_H_

using std;

class Quadruped {
public: 
    Animal();
    void eat() = 0; // pure virtual function
    void sleep() = 0;
    void run() = 0;
private:
    string speciesName;
}

#endif

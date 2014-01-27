class Animal {
public: 
    Animal() {}
    ~Animal() {}
    void eat() {}
    void sleep() {}
    void drink() {}
    bool isCarnivorous() { return carnivorous; }
protected:
    int legs;
    int arms;
    int age;
    bool carnivorous;
};

class Quadruped : public Animal {
public: 
    Quadruped() : Animal() { legs = 4; }
    void walk() {}
    void run() {}
};

class Sheep : public Quadruped {
public: 
    Sheep() : Quadruped() { carnivorous = false; }
    void growWool() {}
};

class Wolf : public Quadruped {
public:
    Wolf() : Quadruped() { carnivorous = true; }
    void hunt(Animal) {}
};

int main() {
    return 0;
}

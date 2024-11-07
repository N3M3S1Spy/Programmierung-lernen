#include <iostream>

class Tier {
public:
    virtual void makeSound() {
        std::cout << "Tier macht ein Geräusch" << std::endl;
    }
};

class Hund : public Tier {
public:
    void makeSound() override {
        std::cout << "Der Hund bellt!" << std::endl;
    }
};

int main() {
    Tier *tierPtr = new Hund();
    tierPtr->makeSound(); // Polymorphismus: Aufruf der Hund-Implementierung

    delete tierPtr;
    return 0;
}

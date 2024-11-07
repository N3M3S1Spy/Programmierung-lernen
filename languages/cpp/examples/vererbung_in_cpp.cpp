#include <iostream>

class Fahrzeug {
public:
    void fahren() {
        std::cout << "Das Fahrzeug fährt." << std::endl;
    }
};

class Auto : public Fahrzeug {
public:
    void hupen() {
        std::cout << "Hupe: Hup Hup!" << std::endl;
    }
};

int main() {
    Auto meinAuto;
    meinAuto.fahren();
    meinAuto.hupen();

    return 0;
}

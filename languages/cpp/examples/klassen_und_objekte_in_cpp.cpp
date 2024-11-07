#include <iostream>

class Auto {
public:
    std::string marke;
    int baujahr;

    void fahren() {
        std::cout << "Das Auto fährt!" << std::endl;
    }
};

int main() {
    Auto meinAuto;
    meinAuto.marke = "BMW";
    meinAuto.baujahr = 2020;

    std::cout << "Marke: " << meinAuto.marke << ", Baujahr: " << meinAuto.baujahr << std::endl;
    meinAuto.fahren();

    return 0;
}

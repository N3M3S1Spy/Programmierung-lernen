#include <iostream>

int main() {
    // Dynamische Speicherallokation
    int *ptr = new int;
    *ptr = 25;

    std::cout << "Dynamisch zugewiesener Wert: " << *ptr << std::endl;

    // Speicherfreigabe
    delete ptr;

    return 0;
}

#include <iostream>

int main() {
    int x = 10;
    int *ptr = &x;   // Zeiger
    int &ref = x;    // Referenz

    std::cout << "Wert über Zeiger: " << *ptr << std::endl;
    std::cout << "Wert über Referenz: " << ref << std::endl;

    return 0;
}

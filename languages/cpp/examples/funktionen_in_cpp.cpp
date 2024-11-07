#include <iostream>

// Funktion zur Addition
int addiere(int a, int b) {
    return a + b;
}

int main() {
    int summe = addiere(10, 20);
    std::cout << "Summe: " << summe << std::endl;

    return 0;
}

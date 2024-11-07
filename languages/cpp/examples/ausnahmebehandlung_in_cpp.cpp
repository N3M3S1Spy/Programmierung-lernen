#include <iostream>
#include <stdexcept>

int teilen(int a, int b) {
    if (b == 0) {
        throw std::invalid_argument("Division durch Null ist nicht erlaubt.");
    }
    return a / b;
}

int main() {
    try {
        int ergebnis = teilen(10, 0); // Auslöser für Ausnahme
        std::cout << "Ergebnis: " << ergebnis << std::endl;
    } catch (const std::exception &e) {
        std::cout << "Fehler: " << e.what() << std::endl;
    }

    return 0;
}

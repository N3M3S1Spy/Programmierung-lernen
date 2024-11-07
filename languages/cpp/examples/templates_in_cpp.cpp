#include <iostream>

// Template für die Addition
template <typename T>
T addiere(T a, T b) {
    return a + b;
}

int main() {
    std::cout << "Addition von ints: " << addiere(10, 20) << std::endl;
    std::cout << "Addition von doubles: " << addiere(3.14, 2.71) << std::endl;

    return 0;
}

#include <iostream>

class Punkt {
public:
    int x, y;

    Punkt(int x, int y) : x(x), y(y) {}

    // Operatorüberladung für '+'
    Punkt operator+(const Punkt &p) {
        return Punkt(x + p.x, y + p.y);
    }
};

int main() {
    Punkt p1(10, 20), p2(30, 40);
    Punkt p3 = p1 + p2; // Operator + überladen

    std::cout << "Neuer Punkt: (" << p3.x << ", " << p3.y << ")" << std::endl;

    return 0;
}

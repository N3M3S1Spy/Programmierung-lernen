#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {10, 20, 30, 40, 50};

    // Sortieren des Vektors
    std::sort(v.begin(), v.end());

    // Ausgabe des Vektors
    for (int i : v) {
        std::cout << i << " ";
    }

    std::cout << std::endl;
    return 0;
}

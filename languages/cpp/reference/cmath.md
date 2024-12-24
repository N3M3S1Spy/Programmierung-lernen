# C++ cmath-Bibliothek

Die `<cmath>`-Bibliothek stellt mathematische Funktionen bereit, die für wissenschaftliche und technische Anwendungen benötigt werden. Diese Funktionen sind Teil der Standardbibliothek und unterstützen sowohl Ganzzahlen als auch Gleitkommawerte.

---

## Enthaltene Funktionen

Die `<cmath>`-Bibliothek bietet eine Vielzahl von Funktionen. Die wichtigsten Kategorien sind:

1. **Grundlegende mathematische Operationen**
2. **Exponentielle und logarithmische Funktionen**
3. **Trigonometrische Funktionen**
4. **Hyperbolische Funktionen**
5. **Rundungs- und Restoperationen**

---

## Tabelle der wichtigsten Funktionen

### Grundlegende mathematische Funktionen

| Funktion      | Beschreibung                              | Beispiel                           |
|---------------|------------------------------------------|-----------------------------------|
| `std::abs(x)` | Absolutwert von `x`.                     | `std::abs(-5) -> 5`               |
| `std::sqrt(x)`| Quadratwurzel von `x`.                   | `std::sqrt(16) -> 4`              |
| `std::pow(x, y)` | Potenz: `x` hoch `y`.                 | `std::pow(2, 3) -> 8`             |
| `std::fmod(x, y)` | Rest der Division `x / y`.           | `std::fmod(5.5, 2) -> 1.5`        |
| `std::hypot(x, y)`| Hypotenuse eines rechtwinkligen Dreiecks. | `std::hypot(3, 4) -> 5`         |

---

### Exponentielle und logarithmische Funktionen

| Funktion         | Beschreibung                                  | Beispiel                          |
|------------------|----------------------------------------------|----------------------------------|
| `std::exp(x)`    | Exponentialfunktion: `e^x`.                  | `std::exp(1) -> 2.71828`         |
| `std::log(x)`    | Natürlicher Logarithmus von `x`.              | `std::log(2.71828) -> 1`         |
| `std::log10(x)`  | Logarithmus zur Basis 10 von `x`.             | `std::log10(100) -> 2`           |
| `std::log2(x)`   | Logarithmus zur Basis 2 von `x`.              | `std::log2(8) -> 3`              |

---

### Trigonometrische Funktionen

| Funktion         | Beschreibung                                  | Beispiel                          |
|------------------|----------------------------------------------|----------------------------------|
| `std::sin(x)`    | Sinus von `x` (in Radiant).                  | `std::sin(M_PI / 2) -> 1`        |
| `std::cos(x)`    | Kosinus von `x` (in Radiant).                | `std::cos(0) -> 1`               |
| `std::tan(x)`    | Tangens von `x` (in Radiant).                | `std::tan(M_PI / 4) -> 1`        |
| `std::asin(x)`   | Arkussinus von `x`.                          | `std::asin(1) -> M_PI / 2`       |
| `std::acos(x)`   | Arkuskosinus von `x`.                        | `std::acos(0) -> M_PI / 2`       |
| `std::atan(x)`   | Arkustangens von `x`.                        | `std::atan(1) -> M_PI / 4`       |

---

### Hyperbolische Funktionen

| Funktion         | Beschreibung                                  | Beispiel                          |
|------------------|----------------------------------------------|----------------------------------|
| `std::sinh(x)`   | Hyperbolischer Sinus von `x`.                | `std::sinh(0) -> 0`              |
| `std::cosh(x)`   | Hyperbolischer Kosinus von `x`.              | `std::cosh(0) -> 1`              |
| `std::tanh(x)`   | Hyperbolischer Tangens von `x`.              | `std::tanh(1) -> 0.7616`         |

---

### Rundungs- und Restfunktionen

| Funktion         | Beschreibung                                  | Beispiel                          |
|------------------|----------------------------------------------|----------------------------------|
| `std::ceil(x)`   | Rundet `x` auf die nächste ganze Zahl nach oben. | `std::ceil(4.2) -> 5`         |
| `std::floor(x)`  | Rundet `x` auf die nächste ganze Zahl nach unten. | `std::floor(4.7) -> 4`        |
| `std::round(x)`  | Rundet `x` auf die nächste ganze Zahl.          | `std::round(4.5) -> 5`         |

---

## Beispiele

### Beispiel 1: Grundlegende Berechnungen
```cpp
#include <iostream>
#include <cmath>

int main() {
    double a = 9.0;
    double b = 4.0;

    std::cout << "Quadratwurzel von a: " << std::sqrt(a) << std::endl;
    std::cout << "a hoch b: " << std::pow(a, b) << std::endl;
    std::cout << "Rest von a / b: " << std::fmod(a, b) << std::endl;

    return 0;
}
```

### Beispiel 2: Trigonometrische Berechnungen
```cpp
#include <iostream>
#include <cmath>

int main() {
    double winkel = M_PI / 4; // 45 Grad in Radiant

    std::cout << "Sinus von 45°: " << std::sin(winkel) << std::endl;
    std::cout << "Kosinus von 45°: " << std::cos(winkel) << std::endl;
    std::cout << "Tangens von 45°: " << std::tan(winkel) << std::endl;

    return 0;
}
```

### Beispiel 3: Logarithmische Funktionen
```cpp
#include <iostream>
#include <cmath>

int main() {
    double wert = 100.0;

    std::cout << "Logarithmus zur Basis 10 von 100: " << std::log10(wert) << std::endl;
    std::cout << "Natürlicher Logarithmus von 100: " << std::log(wert) << std::endl;

    return 0;
}
```

---

## Wichtige Hinweise
- **Header-Datei:** Die `<cmath>`-Bibliothek muss in jedem Programm durch `#include <cmath>` eingebunden werden.
- **Nutzung von Konstanten:** `cmath` bietet mathematische Konstanten wie `M_PI` für π oder `M_E` für die Basis der natürlichen Logarithmen.
- **Fehlerüberprüfung:** Einige Funktionen (z. B. `std::sqrt`) werfen undefinierte Ergebnisse oder Fehler, wenn ungültige Eingaben wie negative Zahlen verwendet werden.

---

## Weiterführende Informationen
- [cppreference.com - cmath](https://en.cppreference.com/w/cpp/header/cmath)

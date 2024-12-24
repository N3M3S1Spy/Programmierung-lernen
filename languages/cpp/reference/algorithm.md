# C++ algorithm-Bibliothek

Die `<algorithm>`-Bibliothek ist ein zentraler Bestandteil der C++ Standard Template Library (STL) und bietet eine Vielzahl von Funktionen zur Manipulation von Container-Daten. Sie umfasst Algorithmen für Suchvorgänge, Sortieren, Bearbeiten und vieles mehr.

---

## Hauptmerkmale von `std::algorithm`

- **Allgemeine Algorithmen:** Eine Vielzahl von Funktionen, die mit allen Containern und iterierbaren Objekten kompatibel sind.
- **Effiziente Operationen:** Optimierte Algorithmen für häufige Operationen wie Sortierung und Suchen.
- **Lambda-Unterstützung:** Die meisten Algorithmen unterstützen die Verwendung von Lambda-Funktionen für benutzerdefinierte Operationen.

---

## Häufig verwendete Funktionen

### Sortierung

| Funktion                  | Beschreibung                                        | Beispiel                                  |
|---------------------------|----------------------------------------------------|-------------------------------------------|
| `std::sort()`              | Sortiert ein Containerbereich in aufsteigender Reihenfolge. | `std::sort(v.begin(), v.end());`          |
| `std::stable_sort()`       | Sortiert den Container, behält jedoch die relative Reihenfolge gleichwertiger Elemente bei. | `std::stable_sort(v.begin(), v.end());` |
| `std::partial_sort()`      | Sortiert nur die ersten `n` Elemente eines Containers. | `std::partial_sort(v.begin(), v.begin() + 3, v.end());` |

### Suchen

| Funktion                  | Beschreibung                                        | Beispiel                                  |
|---------------------------|----------------------------------------------------|-------------------------------------------|
| `std::find()`              | Sucht nach einem bestimmten Element im Container.  | `auto it = std::find(v.begin(), v.end(), 5);` |
| `std::binary_search()`     | Überprüft, ob ein Element in einem sortierten Container vorhanden ist. | `bool found = std::binary_search(v.begin(), v.end(), 5);` |
| `std::lower_bound()`       | Gibt den Iterator zum ersten Element zurück, das nicht kleiner als der gesuchte Wert ist. | `auto it = std::lower_bound(v.begin(), v.end(), 5);` |
| `std::upper_bound()`       | Gibt den Iterator zum ersten Element zurück, das größer als der gesuchte Wert ist. | `auto it = std::upper_bound(v.begin(), v.end(), 5);` |

### Transformationen

| Funktion                  | Beschreibung                                        | Beispiel                                  |
|---------------------------|----------------------------------------------------|-------------------------------------------|
| `std::transform()`         | Wendet eine Funktion auf jedes Element eines Containers an. | `std::transform(v.begin(), v.end(), v.begin(), [](int x) { return x * 2; });` |
| `std::for_each()`          | Wendet eine Funktion auf jedes Element eines Containers an, gibt jedoch keinen neuen Container zurück. | `std::for_each(v.begin(), v.end(), [](int x) { std::cout << x << " "; });` |

### Berechnungen

| Funktion                  | Beschreibung                                        | Beispiel                                  |
|---------------------------|----------------------------------------------------|-------------------------------------------|
| `std::accumulate()`        | Berechnet die Summe aller Elemente in einem Container. | `int sum = std::accumulate(v.begin(), v.end(), 0);` |
| `std::count()`             | Zählt, wie oft ein bestimmtes Element im Container vorkommt. | `int count = std::count(v.begin(), v.end(), 5);` |
| `std::min_element()`       | Gibt den Iterator zum kleinsten Element im Container zurück. | `auto it = std::min_element(v.begin(), v.end());` |
| `std::max_element()`       | Gibt den Iterator zum größten Element im Container zurück. | `auto it = std::max_element(v.begin(), v.end());` |

### Vergleich

| Funktion                  | Beschreibung                                        | Beispiel                                  |
|---------------------------|----------------------------------------------------|-------------------------------------------|
| `std::equal()`             | Vergleicht zwei Container auf Gleichheit.           | `bool equal = std::equal(v1.begin(), v1.end(), v2.begin());` |
| `std::lexicographical_compare()` | Vergleicht zwei Container lexikografisch. | `bool less = std::lexicographical_compare(v1.begin(), v1.end(), v2.begin(), v2.end());` |

---

## Beispiele

### Beispiel 1: Sortieren eines Vektors
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 3, 8, 1, 2};

    std::sort(v.begin(), v.end());

    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Beispiel 2: Suchen nach einem Element
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 3, 8, 1, 2};

    auto it = std::find(v.begin(), v.end(), 8);
    if (it != v.end()) {
        std::cout << "Element gefunden: " << *it << std::endl;
    } else {
        std::cout << "Element nicht gefunden!" << std::endl;
    }

    return 0;
}
```

### Beispiel 3: Anwenden einer Transformation
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    std::transform(v.begin(), v.end(), v.begin(), [](int x) { return x * 2; });

    for (int i : v) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Beispiel 4: Berechnen der Summe der Elemente
```cpp
#include <iostream>
#include <vector>
#include <numeric>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    int sum = std::accumulate(v.begin(), v.end(), 0);
    std::cout << "Summe: " << sum << std::endl;

    return 0;
}
```

### Beispiel 5: Finden des kleinsten Elements
```cpp
#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> v = {5, 3, 8, 1, 2};

    auto it = std::min_element(v.begin(), v.end());
    std::cout << "Kleinstes Element: " << *it << std::endl;

    return 0;
}
```

---

## Wichtige Hinweise

1. **Lambda-Funktionen:** Viele Algorithmen unterstützen die Verwendung von Lambda-Ausdrücken für benutzerdefinierte Operationen. Das macht die Nutzung flexibler und komfortabler.
2. **Effizienz:** Algorithmen wie `std::sort` und `std::find` sind für große Datenmengen optimiert und bieten eine hohe Leistung.
3. **Veränderbare Container:** Bei Containern wie `std::vector` oder `std::list` werden die Algorithmen direkt auf den Container angewendet, da sie über Iteratoren zugänglich sind.

---

## Weiterführende Informationen

- [cppreference.com - algorithm](https://en.cppreference.com/w/cpp/algorithm)

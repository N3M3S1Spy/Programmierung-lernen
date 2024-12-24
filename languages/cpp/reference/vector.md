# C++ vector-Bibliothek

Die `<vector>`-Bibliothek ist Teil der C++ Standard Template Library (STL) und stellt eine dynamische, sequentielle Datenstruktur bereit, die ähnlich wie Arrays funktioniert, jedoch automatisch ihre Größe anpassen kann.

---

## Hauptmerkmale von `std::vector`

- **Dynamische Größe:** Passt sich automatisch an, wenn Elemente hinzugefügt oder entfernt werden.
- **Sequenzieller Zugriff:** Schneller Zugriff auf Elemente über den Index.
- **Komfortable Methoden:** Viele eingebaute Funktionen, die das Arbeiten mit Sequenzen erleichtern.
- **Iterator-Unterstützung:** Unterstützt die Verwendung von Iteratoren für Traversierung und Manipulation.

---

## Enthaltene Typen und Methoden

### Konstruktoren

| Konstruktor              | Beschreibung                                      | Beispiel                                    |
|--------------------------|--------------------------------------------------|-------------------------------------------|
| `vector()`               | Erstellt einen leeren Vektor.                    | `std::vector<int> v;`                     |
| `vector(size_t n)`       | Erstellt einen Vektor mit `n` Standardwerten.    | `std::vector<int> v(5);`                  |
| `vector(size_t n, const T& value)` | Erstellt einen Vektor mit `n` Kopien von `value`. | `std::vector<int> v(5, 10);`  |
| `vector(std::initializer_list<T> il)` | Erstellt einen Vektor aus einer Liste. | `std::vector<int> v{1, 2, 3};`           |

---

### Wichtige Methoden

#### Zugriffsmethoden

| Methode               | Beschreibung                                      | Beispiel                                    |
|-----------------------|--------------------------------------------------|-------------------------------------------|
| `at(size_t index)`    | Gibt das Element am angegebenen Index zurück (mit Bereichsprüfung). | `v.at(2);` |
| `operator[]`          | Gibt das Element am angegebenen Index zurück (ohne Bereichsprüfung). | `v[2];` |
| `front()`             | Gibt das erste Element zurück.                   | `v.front();` |
| `back()`              | Gibt das letzte Element zurück.                  | `v.back();` |

#### Modifikationsmethoden

| Methode               | Beschreibung                                      | Beispiel                                    |
|-----------------------|--------------------------------------------------|-------------------------------------------|
| `push_back(const T& value)` | Fügt ein Element am Ende hinzu.            | `v.push_back(42);`                        |
| `pop_back()`          | Entfernt das letzte Element.                     | `v.pop_back();`                           |
| `insert(iterator pos, const T& value)` | Fügt ein Element an der angegebenen Position ein. | `v.insert(v.begin(), 99);` |
| `erase(iterator pos)` | Entfernt ein Element an der angegebenen Position. | `v.erase(v.begin());`                     |
| `clear()`             | Entfernt alle Elemente.                          | `v.clear();`                              |

#### Kapazitätsmethoden

| Methode               | Beschreibung                                      | Beispiel                                    |
|-----------------------|--------------------------------------------------|-------------------------------------------|
| `size()`              | Gibt die Anzahl der Elemente im Vektor zurück.   | `v.size();`                                |
| `capacity()`          | Gibt die derzeitige Kapazität des Vektors zurück.| `v.capacity();`                            |
| `empty()`             | Gibt `true` zurück, wenn der Vektor leer ist.    | `v.empty();`                               |
| `reserve(size_t n)`   | Reserviert Speicherplatz für mindestens `n` Elemente. | `v.reserve(100);`                      |

#### Vergleichsmethoden

| Methode               | Beschreibung                                      | Beispiel                                    |
|-----------------------|--------------------------------------------------|-------------------------------------------|
| `operator==`          | Vergleicht zwei Vektoren auf Gleichheit.         | `v1 == v2;`                                |
| `operator!=`          | Vergleicht zwei Vektoren auf Ungleichheit.       | `v1 != v2;`                                |

---

## Beispiele

### Beispiel 1: Basisoperationen mit `std::vector`
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3};

    v.push_back(4); // Hinzufügen eines Elements
    std::cout << "Letztes Element: " << v.back() << std::endl;

    v.pop_back(); // Entfernen des letzten Elements
    std::cout << "Größe nach pop_back: " << v.size() << std::endl;

    return 0;
}
```

### Beispiel 2: Iteration mit Schleifen
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v = {1, 2, 3, 4, 5};

    // Iteration mit Range-based for-Schleife
    for (int num : v) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Iteration mit Iteratoren
    for (auto it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
```

### Beispiel 3: Dynamische Speicheranpassung
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> v;
    v.reserve(10); // Speicherplatz reservieren

    for (int i = 1; i <= 10; ++i) {
        v.push_back(i);
        std::cout << "Größe: " << v.size() << ", Kapazität: " << v.capacity() << std::endl;
    }

    return 0;
}
```

---

## Wichtige Hinweise

1. **Performance:** Die Kapazität (`capacity`) wächst automatisch, aber Reservierungen mit `reserve` können die Effizienz verbessern.
2. **Iteratoren ungültig:** Das Hinzufügen oder Entfernen von Elementen kann vorhandene Iteratoren ungültig machen.
3. **Alternative Methoden:** Nutzen Sie `emplace_back` für direkte Objekterstellung im Vektor, um unnötige Kopien zu vermeiden.

---

## Weiterführende Informationen

- [cppreference.com - vector](https://en.cppreference.com/w/cpp/container/vector)

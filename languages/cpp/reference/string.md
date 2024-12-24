# C++ string-Bibliothek

Die `<string>`-Bibliothek stellt eine leistungsstarke und flexible Möglichkeit zur Verarbeitung von Zeichenketten bereit. Sie bietet die Klasse `std::string`, die Funktionen für die Manipulation, Suche und Analyse von Zeichenketten sowie zahlreiche hilfreiche Operatoren und Methoden bereitstellt.

---

## Hauptmerkmale

- **Dynamische Länge:** Ein `std::string` kann während der Laufzeit wachsen oder schrumpfen, je nach Bedarf.
- **Einfache Bedienung:** Bietet viele eingebaute Funktionen für gängige Operationen wie Konkatination, Suche und Ersetzung.
- **Komfortabler Zugriff:** Ermöglicht den Zugriff auf Zeichenketteninhalte ähnlich wie bei Arrays.

---

## Konstruktoren

| Konstruktor                | Beschreibung                                               | Beispiel                           |
|----------------------------|-----------------------------------------------------------|------------------------------------|
| `std::string()`            | Erstellt eine leere Zeichenkette.                         | `std::string s;`                  |
| `std::string(const char*)` | Erstellt eine Zeichenkette aus einem C-String.            | `std::string s = "Hallo";`        |
| `std::string(size_t, char)`| Erstellt eine Zeichenkette mit `size_t` Wiederholungen von `char`. | `std::string s(5, '*');` |

---

## Wichtige Methoden

| Methode                        | Beschreibung                                           | Beispiel                           |
|--------------------------------|-------------------------------------------------------|------------------------------------|
| `size()` / `length()`          | Gibt die Länge der Zeichenkette zurück.               | `s.size()` oder `s.length()`      |
| `empty()`                      | Prüft, ob die Zeichenkette leer ist.                  | `s.empty()`                       |
| `append(const std::string&)`   | Hängt eine andere Zeichenkette an.                    | `s.append(" Welt");`              |
| `insert(size_t, const std::string&)` | Fügt eine Zeichenkette an einer bestimmten Position ein. | `s.insert(5, " schöne");`        |
| `erase(size_t, size_t)`        | Entfernt eine Anzahl von Zeichen ab einer bestimmten Position. | `s.erase(5, 6);`            |
| `replace(size_t, size_t, const std::string&)` | Ersetzt eine Teilzeichenkette.              | `s.replace(0, 5, "Hi");`          |
| `substr(size_t, size_t)`       | Gibt einen Teilstring zurück.                         | `s.substr(0, 5);`                 |
| `find(const std::string&)`     | Sucht nach einer Teilzeichenkette und gibt die Position zurück. | `s.find("Welt");`         |
| `at(size_t)`                   | Gibt das Zeichen an einer bestimmten Position zurück. | `s.at(0);`                        |
| `c_str()`                      | Gibt die Zeichenkette als C-String zurück.            | `s.c_str();`                      |

---

## Operatoren

| Operator        | Beschreibung                                           | Beispiel                           |
|-----------------|-------------------------------------------------------|------------------------------------|
| `+`            | Verbindet zwei Zeichenketten.                          | `std::string s = "Hallo" + " Welt";` |
| `+=`           | Fügt eine Zeichenkette an das Ende an.                 | `s += " Welt";`                   |
| `==`           | Prüft, ob zwei Zeichenketten gleich sind.              | `if (s1 == s2)`                   |
| `!=`           | Prüft, ob zwei Zeichenketten ungleich sind.            | `if (s1 != s2)`                   |
| `[]`           | Ermöglicht den Zugriff auf einzelne Zeichen.           | `char c = s[0];`                  |

---

## Beispiele

### Beispiel 1: Grundlegende Operationen
```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "Hallo";
    s += " Welt";

    std::cout << "Länge: " << s.size() << std::endl;
    std::cout << "Inhalt: " << s << std::endl;

    return 0;
}
```

### Beispiel 2: Teilzeichenketten und Suche
```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "Das ist ein Beispiel.";

    std::cout << "Teilstring: " << s.substr(8, 3) << std::endl; // "ein"
    std::cout << "Position von 'Beispiel': " << s.find("Beispiel") << std::endl;

    return 0;
}
```

### Beispiel 3: Ersetzen und Löschen
```cpp
#include <iostream>
#include <string>

int main() {
    std::string s = "Hallo Welt";

    s.replace(6, 4, "Universe");
    std::cout << "Ersetzt: " << s << std::endl;

    s.erase(6, 8);
    std::cout << "Gelöscht: " << s << std::endl;

    return 0;
}
```

---

## Wichtige Hinweise

- **Nullterminierung:** `std::string` ist nicht nullterminiert. Um eine nullterminierte Zeichenkette zu erhalten, kann `c_str()` verwendet werden.
- **Unicode-Unterstützung:** Für erweiterte Unicode-Unterstützung sollte `std::wstring` oder eine Bibliothek wie ICU verwendet werden.
- **Effizienz:** `std::string` ist speichereffizienter als manuell verwaltete C-Strings und bietet zudem Sicherheitsvorteile.

---

## Weiterführende Informationen

- [cppreference.com - std::string](https://en.cppreference.com/w/cpp/string/basic_string)

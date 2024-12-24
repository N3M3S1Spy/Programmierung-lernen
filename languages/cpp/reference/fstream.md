# C++ fstream-Objekte

Die `<fstream>`-Bibliothek bietet Klassen und Objekte, um Dateien zu lesen und zu schreiben. Sie erweitert die Funktionalität der `<iostream>`-Bibliothek und ermöglicht die Arbeit mit Dateien als Streams.

Im Folgenden findest du eine Liste der Objekte und Klassen von `fstream` sowie eine detaillierte Erklärung ihrer Verwendung.

---

## Liste der fstream-Klassen

| Klasse         | Beschreibung                                                                           |
|----------------|---------------------------------------------------------------------------------------|
| `std::ifstream` | Eingabestream-Klasse zum Lesen von Dateien.                                           |
| `std::ofstream` | Ausgabestream-Klasse zum Schreiben in Dateien.                                        |
| `std::fstream`  | Ein kombinierter Stream für Lese- und Schreiboperationen.                            |

---

## Detaillierte Beschreibung der Klassen

### `std::ifstream` – Lesen aus Dateien
Die Klasse `std::ifstream` wird verwendet, um Daten aus einer Datei zu lesen. 

#### Konstruktoren und Methoden:
- **Konstruktor:** `std::ifstream(const char* filename)` – Öffnet eine Datei direkt beim Erstellen des Objekts.
- **Methoden:** 
  - `.open(filename)`: Öffnet eine Datei.
  - `.close()`: Schließt die Datei.
  - `.is_open()`: Prüft, ob die Datei erfolgreich geöffnet wurde.

#### Beispiel:
```cpp
#include <fstream>
#include <iostream>

int main() {
    std::ifstream datei("example.txt");
    
    if (!datei.is_open()) {
        std::cerr << "Fehler: Datei konnte nicht geöffnet werden!" << std::endl;
        return 1;
    }

    std::string inhalt;
    while (std::getline(datei, inhalt)) {
        std::cout << inhalt << std::endl;
    }

    datei.close();
    return 0;
}
```

---

### `std::ofstream` – Schreiben in Dateien
Die Klasse `std::ofstream` wird verwendet, um Daten in eine Datei zu schreiben.

#### Konstruktoren und Methoden:
- **Konstruktor:** `std::ofstream(const char* filename, std::ios::mode mode = std::ios::out)`
- **Methoden:** 
  - `.open(filename, mode)`: Öffnet eine Datei.
  - `.close()`: Schließt die Datei.
  - `.is_open()`: Prüft, ob die Datei erfolgreich geöffnet wurde.

#### Beispiel:
```cpp
#include <fstream>
#include <iostream>

int main() {
    std::ofstream datei("output.txt");

    if (!datei.is_open()) {
        std::cerr << "Fehler: Datei konnte nicht geöffnet werden!" << std::endl;
        return 1;
    }

    datei << "Das ist ein Beispieltext." << std::endl;
    datei.close();

    std::cout << "Daten erfolgreich in die Datei geschrieben." << std::endl;
    return 0;
}
```

---

### `std::fstream` – Lesen und Schreiben
Die Klasse `std::fstream` kombiniert die Funktionalitäten von `std::ifstream` und `std::ofstream`. Sie ermöglicht das gleichzeitige Lesen und Schreiben in einer Datei.

#### Konstruktoren und Methoden:
- **Konstruktor:** `std::fstream(const char* filename, std::ios::mode mode)`
- **Modi:** 
  - `std::ios::in`: Datei öffnen zum Lesen.
  - `std::ios::out`: Datei öffnen zum Schreiben.
  - `std::ios::app`: Daten an das Ende der Datei anhängen.
  - `std::ios::binary`: Datei im Binärmodus öffnen.

#### Beispiel:
```cpp
#include <fstream>
#include <iostream>

int main() {
    std::fstream datei("example.txt", std::ios::in | std::ios::out | std::ios::app);

    if (!datei.is_open()) {
        std::cerr << "Fehler: Datei konnte nicht geöffnet werden!" << std::endl;
        return 1;
    }

    datei << "Neuer Text wird an die Datei angehängt." << std::endl;

    datei.seekg(0); // Zurück zum Anfang der Datei
    std::string inhalt;
    while (std::getline(datei, inhalt)) {
        std::cout << inhalt << std::endl;
    }

    datei.close();
    return 0;
}
```

---

## Datei-Modi und Flags

| Modus           | Beschreibung                                              |
|------------------|----------------------------------------------------------|
| `std::ios::in`   | Öffnet die Datei zum Lesen.                               |
| `std::ios::out`  | Öffnet die Datei zum Schreiben.                           |
| `std::ios::app`  | Schreibt Daten am Ende der Datei.                         |
| `std::ios::trunc`| Kürzt die Datei auf 0 Zeichen (standardmäßig bei `out`).  |
| `std::ios::binary` | Öffnet die Datei im Binärmodus.                         |

---

## Fehlerbehandlung

Streams in `<fstream>` verwenden dieselben Fehlerüberprüfungen wie `iostream`:
- `.fail()`: Gibt `true` zurück, wenn eine Operation fehlschlägt.
- `.eof()`: Gibt `true` zurück, wenn das Ende der Datei erreicht wurde.
- `.clear()`: Setzt den Fehlerstatus des Streams zurück.

#### Beispiel für Fehlerbehandlung:
```cpp
#include <fstream>
#include <iostream>

int main() {
    std::ifstream datei("nicht_vorhanden.txt");

    if (!datei) {
        std::cerr << "Fehler: Datei konnte nicht geöffnet werden!" << std::endl;
        return 1;
    }

    int zahl;
    while (datei >> zahl) {
        std::cout << "Gelesene Zahl: " << zahl << std::endl;
    }

    if (datei.eof()) {
        std::cout << "Ende der Datei erreicht." << std::endl;
    } else if (datei.fail()) {
        std::cerr << "Fehler: Unerwartetes Eingabeformat." << std::endl;
    }

    datei.close();
    return 0;
}
```

---

## Zusammenfassung

Die `<fstream>`-Bibliothek bietet leistungsstarke Klassen für das Arbeiten mit Dateien in C++. Sie ist flexibel genug, um mit verschiedenen Arten von Dateien (Text oder Binär) umzugehen, und unterstützt sowohl sequentielle als auch zufällige Zugriffe.

---

**Weiterführende Informationen:**
- [cppreference.com - fstream](https://en.cppreference.com/w/cpp/header/fstream)

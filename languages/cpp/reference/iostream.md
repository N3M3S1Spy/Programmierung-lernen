# C++ iostream-Objekte

Die `<iostream>`-Bibliothek stellt Objekte bereit, mit denen Benutzereingaben gelesen und Daten auf die Konsole oder in Dateien ausgegeben werden können. Sie ist eine der grundlegenden Bibliotheken in C++ und wird standardmäßig für Ein- und Ausgabeoperationen verwendet.

Im Folgenden findest du eine Liste aller Objekte der `iostream`-Bibliothek, zusammen mit einer Beschreibung ihrer Funktion.

---

## Liste der iostream-Objekte

| Objekt   | Beschreibung                                                                 |
|----------|------------------------------------------------------------------------------|
| `cerr`   | Ein ungepufferter Ausgabestream für Fehlermeldungen. Wird sofort ausgegeben. |
| `clog`   | Ein gepufferter Ausgabestream für Protokoll- und Debug-Meldungen.           |
| `cin`    | Ein Eingabestream, der standardmäßig Tastatureingaben aus der Konsole liest. |
| `cout`   | Ein Ausgabestream, der standardmäßig Daten auf die Konsole schreibt.        |
| `wcerr`  | Dasselbe wie `cerr`, aber gibt Wide-Char-Daten (`wchar_t`) aus.             |
| `wclog`  | Dasselbe wie `clog`, aber gibt Wide-Char-Daten (`wchar_t`) aus.             |
| `wcin`   | Dasselbe wie `cin`, aber interpretiert Eingaben als Wide-Char-Daten (`wchar_t`). |
| `wcout`  | Dasselbe wie `cout`, aber gibt Wide-Char-Daten (`wchar_t`) aus.             |

---

## Detaillierte Beschreibung der Objekte

### `std::cout` – Konsolenausgabe
`std::cout` ist das Standardobjekt für die Ausgabe von Daten auf die Konsole. Es wird häufig mit dem Ausgabeoperator `<<` verwendet.

**Beispiel:**
```cpp
#include <iostream>

int main() {
    std::cout << "Hallo, Welt!" << std::endl; // Ausgabe auf die Konsole
    return 0;
}
```

---

### `std::cin` – Konsoleneingabe
`std::cin` ist das Standardobjekt für das Lesen von Eingaben von der Tastatur. Es wird mit dem Eingabeoperator `>>` verwendet.

**Beispiel:**
```cpp
#include <iostream>

int main() {
    int zahl;
    std::cout << "Geben Sie eine Zahl ein: ";
    std::cin >> zahl; // Eingabe von der Tastatur
    std::cout << "Sie haben " << zahl << " eingegeben." << std::endl;
    return 0;
}
```

---

### `std::cerr` – Fehlermeldungen
`std::cerr` wird verwendet, um Fehlermeldungen auszugeben. Dieser Stream ist nicht gepuffert, was bedeutet, dass Ausgaben sofort erfolgen.

**Beispiel:**
```cpp
#include <iostream>

int main() {
    std::cerr << "Fehler: Ungültige Eingabe!" << std::endl;
    return 1;
}
```

---

### `std::clog` – Protokollierung
`std::clog` ist ein gepufferter Stream für das Protokollieren von Informationen. Im Gegensatz zu `std::cerr` werden die Ausgaben gepuffert und können leicht verzögert sein.

**Beispiel:**
```cpp
#include <iostream>

int main() {
    std::clog << "Protokoll: Das Programm startet." << std::endl;
    return 0;
}
```

---

### Wide-Char-Varianten (`wcerr`, `wclog`, `wcin`, `wcout`)
Diese Objekte funktionieren wie ihre Standardvarianten (`cerr`, `clog`, `cin`, `cout`), aber sie unterstützen die Verarbeitung von Wide-Char-Daten (`wchar_t`). Dies ist nützlich für die Arbeit mit Unicode oder internationalisierten Programmen.

**Beispiel:**
```cpp
#include <iostream>

int main() {
    std::wcout << L"Hallo, Welt!" << std::endl; // Ausgabe von Wide-Char-Daten
    return 0;
}
```

---

## Zusammenfassung

Die `iostream`-Bibliothek ist ein zentraler Bestandteil der Ein-/Ausgabefunktionen in C++. Sie bietet sowohl grundlegende Objekte für den Umgang mit Zeichen- und Zahlendaten als auch spezielle Varianten für Wide-Char-Daten. Durch ihre Flexibilität und Effizienz ist sie in praktisch jedem C++-Programm unverzichtbar.

--- 

**Weiterführende Informationen:**
- [cppreference.com - iostream](https://en.cppreference.com/w/cpp/header/iostream)

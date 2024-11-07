# Ausnahmebehandlung in C++ (Exception Handling)

Die Ausnahmebehandlung in C++ ist ein Mechanismus, um auf unerwartete Ereignisse oder Fehler zur Laufzeit zu reagieren, ohne das gesamte Programm abstürzen zu lassen. C++ bietet dafür eine spezielle Syntax mit `try`, `catch` und `throw`. Mit dieser Technik können Fehler systematisch behandelt werden, wodurch das Programm robuster und stabiler wird.

## 1. Grundlagen der Ausnahmebehandlung

Eine Ausnahme ist ein Ereignis, das während der Ausführung eines Programms auftritt und die normale Ausführung unterbricht. Wenn ein Fehler auftritt, kann dieser Fehler geworfen (`throw`) und dann in einem speziellen Block (`catch`) behandelt werden.

### Syntax der Ausnahmebehandlung:

```cpp
try {
    // Code, der eine Ausnahme auslösen könnte
} catch (Ausnahmetyp &e) {
    // Fehlerbehandlung
}
```

- Der `try`-Block enthält den Code, der möglicherweise eine Ausnahme auslöst.
- Der `catch`-Block fängt diese Ausnahme ab und behandelt sie.
- Der `catch`-Block enthält den Ausnahmetyp, den er abfangen soll (z. B. `std::exception`).

## 2. Beispiel: Grundlegende Ausnahmebehandlung

```cpp
#include <iostream>
#include <stdexcept>  // Für Standard-Ausnahmetypen

using namespace std;

int teilen(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division durch Null!");  // Ausnahme werfen
    }
    return a / b;
}

int main() {
    try {
        int x = 10, y = 0;
        int result = teilen(x, y);  // Versucht, die Funktion auszuführen
        cout << "Ergebnis: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Fehler: " << e.what() << endl;  // Fehlernachricht ausgeben
    }

    return 0;
}
```

#### Erklärung:
- In der Funktion `teilen()` wird eine Ausnahme vom Typ `runtime_error` ausgelöst, wenn der Divisor `b` gleich null ist.
- Der `try`-Block im `main()` versucht, die Division durchzuführen. Falls eine Ausnahme auftritt, wird diese im `catch`-Block behandelt.
- Die Methode `e.what()` gibt die Fehlerbeschreibung der Ausnahme aus.

## 3. Werfen von Ausnahmen (throw)

Ausnahmen werden mit dem Schlüsselwort `throw` geworfen. Du kannst jede Art von Daten als Ausnahme werfen, allerdings ist es üblich, Ausnahmen von der Standardbibliothek wie `std::exception` oder von benutzerdefinierten Klassen abzuleiten.

### Beispiel: Werfen einer eigenen Ausnahme

```cpp
#include <iostream>
#include <stdexcept>

using namespace std;

// Eigene Ausnahme-Klasse
class NegativeZahlException : public exception {
public:
    const char* what() const noexcept override {
        return "Negative Zahl ist nicht erlaubt!";
    }
};

int berechneQuadrat(int zahl) {
    if (zahl < 0) {
        throw NegativeZahlException();  // Eigene Ausnahme werfen
    }
    return zahl * zahl;
}

int main() {
    try {
        int ergebnis = berechneQuadrat(-5);
        cout << "Quadrat: " << ergebnis << endl;
    } catch (const NegativeZahlException& e) {
        cout << "Fehler: " << e.what() << endl;  // Eigene Fehlerbehandlung
    }

    return 0;
}
```

#### Erklärung:
- In diesem Beispiel werfen wir eine eigene Ausnahme, `NegativeZahlException`, wenn eine negative Zahl an die Funktion `berechneQuadrat()` übergeben wird.
- Der `catch`-Block fängt diese benutzerdefinierte Ausnahme ab und gibt die entsprechende Fehlermeldung aus.

## 4. Mehrere Catch-Blöcke

Ein `try`-Block kann mehrere `catch`-Blöcke haben, um verschiedene Arten von Ausnahmen zu behandeln. Dies ermöglicht eine genauere Fehlerbehandlung.

### Beispiel: Mehrere `catch`-Blöcke

```cpp
#include <iostream>
#include <stdexcept>

using namespace std;

int teilen(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division durch Null!");
    }
    return a / b;
}

int main() {
    try {
        int x = 10, y = 0;
        int result = teilen(x, y);
        cout << "Ergebnis: " << result << endl;
    } catch (const runtime_error& e) {
        cout << "Fehler: " << e.what() << endl;
    } catch (const exception& e) {
        cout << "Unbekannter Fehler: " << e.what() << endl;
    }

    return 0;
}
```

#### Erklärung:
- Der erste `catch`-Block fängt eine `runtime_error`-Ausnahme auf.
- Der zweite `catch`-Block behandelt alle anderen `exception`-Typen, die nicht speziell behandelt wurden.

## 5. Ausnahmebehandlung ohne `catch` (Unbehandelte Ausnahmen)

Wenn eine Ausnahme geworfen wird, aber nicht abgefangen wird, führt dies zu einem Programmabsturz. Es ist jedoch möglich, eine Ausnahme unbehandelt zu lassen, sodass sie an die aufrufende Funktion weitergegeben wird.

### Beispiel: Unbehandelte Ausnahme

```cpp
#include <iostream>

using namespace std;

int teilen(int a, int b) {
    if (b == 0) {
        throw runtime_error("Division durch Null!");
    }
    return a / b;
}

int main() {
    int x = 10, y = 0;
    // Keine Ausnahmebehandlung im main()
    int result = teilen(x, y);  // Wird zu einem Programmabsturz führen
    cout << "Ergebnis: " << result << endl;
    return 0;
}
```

#### Erklärung:
- Wenn die Ausnahme im `teilen()`-Funktionsaufruf geworfen wird und nicht im `main()` abgefangen wird, führt dies zu einem Absturz des Programms.
  
## 6. Ausnahmebehandlung in komplexeren Programmen

In größeren Programmen wird die Ausnahmebehandlung oft dazu verwendet, um Fehler in komplexeren Funktionen zu isolieren. Dies kann in Verbindung mit benutzerdefinierten Ausnahmen erfolgen, um die Fehlerursache genau zu lokalisieren und zu dokumentieren.

### Beispiel: Ausnahmebehandlung in mehreren Funktionen

```cpp
#include <iostream>
#include <stdexcept>

using namespace std;

int addiere(int a, int b) {
    if (b < 0) {
        throw invalid_argument("b darf nicht negativ sein!");
    }
    return a + b;
}

int main() {
    try {
        int x = 10, y = -5;
        int result = addiere(x, y);
        cout << "Ergebnis: " << result << endl;
    } catch (const invalid_argument& e) {
        cout << "Fehler: " << e.what() << endl;
    }
    return 0;
}
```

#### Erklärung:
- In der Funktion `addiere()` werfen wir eine Ausnahme vom Typ `invalid_argument`, wenn der Parameter `b` negativ ist.
- Diese Ausnahme wird im `catch`-Block im `main()` behandelt und der Fehler wird ausgegeben.

## 7. Zusammenfassung

In C++ ist die Ausnahmebehandlung ein sehr leistungsfähiger Mechanismus, um mit Laufzeitfehlern umzugehen. Mit den folgenden Konzepten hast du in diesem Tutorial gearbeitet:

- **`try` und `catch`**: Zum Fangen und Behandeln von Ausnahmen.
- **`throw`**: Zum Werfen von Ausnahmen.
- **Mehrere `catch`-Blöcke**: Zur gezielten Behandlung unterschiedlicher Ausnahmetypen.
- **Unbehandelte Ausnahmen**: Wenn eine Ausnahme nicht abgefangen wird, führt dies zu einem Absturz des Programms.

Die Ausnahmebehandlung hilft, Fehler zu isolieren und die Robustheit deines Programms zu verbessern.

## 8. Übung

1. Erstelle eine Funktion, die eine Division durch Null überprüft und eine entsprechende Ausnahme wirft.
2. Schreibe eine Funktion, die bei falschen Benutzereingaben eine Ausnahme wirft und diese im `main()` behandelt.

Viel Spaß beim Üben!

Mit diesem Thema sind alle Tutorials abgeschlossen.

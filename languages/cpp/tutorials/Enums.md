# C++ Enumerationen (enum)

## Einführung

Eine Enumeration (enum) in C++ ist ein benutzerdefinierter Datentyp, der es ermöglicht, symbolischen Namen ganzzahlige Werte zuzuordnen. Dies verbessert die Lesbarkeit und Wartbarkeit des Codes, indem magische Zahlen durch aussagekräftige Bezeichner ersetzt werden. Enums werden verwendet, um eine Menge von benannten Konstanten zu definieren, die logisch zusammengehören.

## Definition einer Enumeration

Um eine Enumeration zu definieren, verwenden Sie das Schlüsselwort `enum`, gefolgt vom Namen der Enumeration und einer Liste von Enumeratoren in geschweiften Klammern.

```c++
enum Level {
  LOW,
  MEDIUM,
  HIGH
};
```

Dieser Code definiert eine Enumeration namens `Level` mit den Enumeratoren `LOW`, `MEDIUM` und `HIGH`.

## Deklaration und Initialisierung von Enum-Variablen

Nach der Definition einer Enumeration können Variablen dieses Typs deklariert und initialisiert werden:

```c++
#include <iostream>

enum Level {
  LOW,
  MEDIUM,
  HIGH
};

int main() {
  Level myVar = MEDIUM; // Deklaration und Initialisierung

  std::cout << myVar << "\n"; // Gibt 1 aus (Standardwert von MEDIUM)

  return 0;
}
```

## Standardwerte und explizite Wertzuweisung

Standardmäßig beginnt der erste Enumerator mit dem Wert 0, der zweite mit 1 usw. Sie können jedoch explizit Werte zuweisen:

```c++
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};

int main() {
  Level myVar = MEDIUM;
  std::cout << myVar << "\n"; // Gibt 50 aus
  return 0;
}
```

Wenn Sie nur einem Enumerator einen Wert zuweisen, werden die nachfolgenden Enumeratoren automatisch inkrementiert:

```c++
enum Level {
  LOW = 5,
  MEDIUM, // Hat den Wert 6
  HIGH // Hat den Wert 7
};
```

## Verwendung von Enums in switch-Anweisungen

Enums sind besonders nützlich in `switch`-Anweisungen, um den Code übersichtlicher zu gestalten:

```c++
#include <iostream>

enum Level {
  LOW = 1,
  MEDIUM, // Hat den Wert 2
  HIGH // Hat den Wert 3
};

int main() {
  Level myVar = MEDIUM;

  switch (myVar) {
    case LOW:
      std::cout << "Low Level\n";
      break;
    case MEDIUM:
      std::cout << "Medium Level\n";
      break;
    case HIGH:
      std::cout << "High Level\n";
      break;
    default:
        std::cout << "Unbekanntes Level\n"; // Wichtig für die Fehlerbehandlung
  }
  return 0;
}
```

**Wichtiger Hinweis:** Im `switch`-Beispiel wurde nun `case LOW:` statt `case 1:` verwendet. Das ist der große Vorteil von Enums: Der Code wird dadurch viel lesbarer und verständlicher. Außerdem wurde ein `default`-Fall hinzugefügt, was in `switch`-Anweisungen immer eine gute Praxis ist.

## Scoped Enums (enum class) (C++11 und später)

Seit C++11 gibt es *Scoped Enums* (auch *strong Enums* oder *enum classes* genannt). Diese bieten einige Vorteile gegenüber herkömmlichen Enums:

*   **Stärkere Typisierung:** Scoped Enums sind typsicherer. Es gibt keine implizite Konvertierung in `int`.
*   **Eigener Gültigkeitsbereich:** Die Enumeratoren sind nur innerhalb des Enum-Typs sichtbar. Dadurch werden Namenskonflikte vermieden.

```c++
#include <iostream>

enum class Color {
  RED,
  GREEN,
  BLUE
};

int main() {
  Color myColor = Color::GREEN; // Zugriff mit Scope-Operator ::

  // std::cout << myColor; // Fehler: Keine implizite Konvertierung zu int
  std::cout << static_cast<int>(myColor) << "\n"; // Explizite Konvertierung notwendig

  return 0;
}
```

## Wann und warum Enums verwenden?

*   **Verbesserte Lesbarkeit:** Enums ersetzen magische Zahlen durch aussagekräftige Namen.
*   **Erhöhte Wartbarkeit:** Änderungen an den Werten müssen nur an einer Stelle (in der Enum-Definition) vorgenommen werden.
*   **Verhinderung von Fehlern:** Enums verhindern die Zuweisung ungültiger Werte.
*   **Übersichtlicherer Code:** Enums erleichtern das Verständnis des Codes, insbesondere in `switch`-Anweisungen.

Verwenden Sie Enums, wenn Sie eine feste Menge von benannten Konstanten haben, wie z.B. Wochentage, Monate, Farben, Zustände oder Optionen.

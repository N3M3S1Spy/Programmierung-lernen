## C++ Enumerationen (`enum`)

Enumerationen (`enums`) sind benutzerdefinierte Datentypen in C++, die es ermöglichen, symbolischen Namen ganzzahlige Werte zuzuordnen. Dies verbessert die Lesbarkeit, Wartbarkeit und Typsicherheit des Codes.

### Definition einer Enumeration:

```c++
enum Enumerationsname {
    Enumerator1,
    Enumerator2,
    // ...
    EnumeratorN
}; // Semikolon am Ende nicht vergessen!
```

**Beispiel:**

```c++
enum Wochentag {
    Montag,
    Dienstag,
    Mittwoch,
    Donnerstag,
    Freitag,
    Samstag,
    Sonntag
};
```

### Deklaration und Initialisierung von Enum-Variablen:

Nach der Definition können Variablen des Enum-Typs deklariert und initialisiert werden:

```c++
#include <iostream>

enum Wochentag {
    Montag, Dienstag, Mittwoch, Donnerstag, Freitag, Samstag, Sonntag
};

int main() {
    Wochentag heute = Mittwoch; // Deklaration und Initialisierung
    std::cout << heute << "\n"; // Gibt 2 aus (Indexbasiert, startet bei 0)
    return 0;
}
```

### Standardwerte und explizite Wertzuweisung:

Standardmäßig werden Enumeratoren beginnend mit 0 inkrementell zugewiesen. Es ist aber möglich, explizite Werte zuzuweisen:

```c++
enum Status {
    Offen = 1,
    InBearbeitung = 5,
    Geschlossen = 10
};
```

Wenn nur einem Enumerator ein Wert zugewiesen wird, werden die folgenden automatisch inkrementiert:

```c++
enum Priorität {
    Niedrig = 1,
    Mittel, // Hat den Wert 2
    Hoch // Hat den Wert 3
};
```

### Verwendung von Enums in `switch`-Anweisungen:

Enums sind besonders nützlich in `switch`-Anweisungen, da sie den Code lesbarer machen:

```c++
#include <iostream>

enum Richtung {
    Nord, Ost, Süd, West
};

int main() {
    Richtung aktuelleRichtung = Ost;

    switch (aktuelleRichtung) {
        case Nord:
            std::cout << "Nach Norden\n";
            break;
        case Ost:
            std::cout << "Nach Osten\n";
            break;
        case Süd:
            std::cout << "Nach Süden\n";
            break;
        case West:
            std::cout << "Nach Westen\n";
            break;
        default: // Wichtig für Fehlerbehandlung
            std::cout << "Ungültige Richtung\n";
    }
    return 0;
}
```

### Scoped Enums (`enum class`) (C++11 und später):

Scoped Enums bieten verbesserte Typsicherheit und verhindern Namenskonflikte. Sie werden mit `enum class` definiert:

```c++
#include <iostream>

enum class Farbe {
    Rot, Grün, Blau
};

enum class Frucht {
    Apfel, Banane, Orange
};

int main() {
    Farbe meineFarbe = Farbe::Grün; // Zugriff mit Scope-Operator ::
    Frucht meineFrucht = Frucht::Banane;

    // int wert = meineFarbe; // Fehler: Keine implizite Konvertierung zu int
    int farbWert = static_cast<int>(meineFarbe); // Explizite Konvertierung notwendig
    std::cout << farbWert << "\n";
    return 0;
}
```

**Vorteile von Scoped Enums:**

*   **Stärkere Typisierung:** Verhindert implizite Konvertierungen in `int`, was Typsicherheitsfehler reduziert.
*   **Eigener Gültigkeitsbereich:** Die Namen der Enumeratoren sind auf den Enum-Typ beschränkt. Dadurch werden Namenskonflikte vermieden, wenn zwei Enums Enumeratoren mit gleichen Namen haben.

### Underlying Type (Unterliegender Typ):

Standardmäßig ist der unterliegende Typ eines `enum` `int`. Mit C++11 kann der unterliegende Typ explizit festgelegt werden:

```c++
enum class Flags : unsigned char { // Unterliegender Typ ist unsigned char
    Flag1 = 1,
    Flag2 = 2,
    Flag4 = 4
};
```

Dies kann nützlich sein, um Speicherplatz zu sparen oder mit Hardware zu interagieren, die bestimmte Datentypen erwartet.

### Verwendung von Enums zusammengefasst:

*   **Lesbarkeit:** Ersetzt "magische Zahlen" durch aussagekräftige Namen.
*   **Wartbarkeit:** Änderungen an Werten müssen nur an einer Stelle vorgenommen werden.
*   **Typsicherheit:** Scoped Enums verhindern logische Fehler durch falsche Typverwendung.
*   **Übersichtlichkeit:** Erleichtert das Verständnis des Codes, insbesondere in `switch`-Anweisungen.

Enums sollten verwendet werden, wenn eine Variable nur eine begrenzte Anzahl von vordefinierten Werten annehmen kann. Dies macht den Code klarer, sicherer und einfacher zu warten. Scoped Enums (`enum class`) sind im modernen C++ den traditionellen `enum`s vorzuziehen, da sie typsicherer sind.

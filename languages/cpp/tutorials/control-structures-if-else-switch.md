# Einführung in Kontrollstrukturen: if, else und switch in C++

### Erklärung der Struktur:
1. **`if`-Anweisung**: Die grundlegende Kontrollstruktur für Entscheidungen.
2. **`else`-Anweisung**: Wie man eine alternative Aktion definiert.
3. **`else if`-Anweisung**: Wie man mehrere Bedingungen innerhalb einer `if`-Struktur prüft.
4. **`switch` -Anweisung**: Eine alternative Struktur für die Prüfung von mehreren möglichen Werten.
5. **Zusammenfassung**: Ein Überblick über alle behandelten Kontrollstrukturen.
6. **Übung**: Praktische Übungen, um die Konzepte zu vertiefen.

Dieses Tutorial hilft dir, grundlegende Entscheidungsstrukturen in C++ zu verstehen und anzuwenden.

Kontrollstrukturen sind ein grundlegender Bestandteil jedes Programms, da sie es ermöglichen, Entscheidungen basierend auf Bedingungen zu treffen. In C++ gibt es mehrere Kontrollstrukturen, aber die wichtigsten sind die **if**, **else** und **switch**-Anweisungen. In diesem Tutorial werden wir lernen, wie diese Strukturen verwendet werden, um den Ablauf des Programms zu steuern.

## Was sind Kontrollstrukturen?

Kontrollstrukturen erlauben es, den Fluss des Programms basierend auf Bedingungen zu steuern. Sie helfen dabei, unterschiedliche Aktionen auszuführen, je nachdem, ob eine Bedingung wahr oder falsch ist.

## 1. Die `if`-Anweisung

Die **if**-Anweisung ist die einfachste Form der Entscheidungsstruktur. Sie führt einen Block von Code aus, wenn eine bestimmte Bedingung wahr ist.

### Syntax der `if`-Anweisung

```cpp
if (Bedingung) {
    // Code, der ausgeführt wird, wenn die Bedingung wahr ist
}
```

Die Bedingung ist ein Ausdruck, der entweder `true` (wahr) oder `false` (falsch) ergibt.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;

    if (zahl > 5) {
        cout << "Die Zahl ist größer als 5." << endl;
    }

    return 0;
}
```

In diesem Beispiel wird überprüft, ob `zahl` größer als 5 ist. Wenn dies wahr ist, wird die Nachricht `"Die Zahl ist größer als 5."` ausgegeben.

## 2. Die `else`-Anweisung

Die **else**-Anweisung kann zusammen mit der **if**-Anweisung verwendet werden, um eine Alternative auszuführen, wenn die Bedingung falsch ist.

### Syntax der `if-else`-Anweisung

```cpp
if (Bedingung) {
    // Code, der ausgeführt wird, wenn die Bedingung wahr ist
} else {
    // Code, der ausgeführt wird, wenn die Bedingung falsch ist
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 3;

    if (zahl > 5) {
        cout << "Die Zahl ist größer als 5." << endl;
    } else {
        cout << "Die Zahl ist nicht größer als 5." << endl;
    }

    return 0;
}
```

In diesem Beispiel wird überprüft, ob `zahl` größer als 5 ist. Wenn dies nicht der Fall ist, wird die Nachricht `"Die Zahl ist nicht größer als 5."` ausgegeben.

## 3. Die `else if`-Anweisung

Wenn du mehrere Bedingungen überprüfen möchtest, kannst du die `else if`-Anweisung verwenden, um eine zusätzliche Bedingung zu prüfen, wenn die vorherige Bedingung falsch war.

### Syntax der `if-else if-else`-Anweisung

```cpp
if (Bedingung1) {
    // Code, der ausgeführt wird, wenn Bedingung1 wahr ist
} else if (Bedingung2) {
    // Code, der ausgeführt wird, wenn Bedingung2 wahr ist
} else {
    // Code, der ausgeführt wird, wenn keine Bedingung wahr ist
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 7;

    if (zahl > 10) {
        cout << "Die Zahl ist größer als 10." << endl;
    } else if (zahl == 7) {
        cout << "Die Zahl ist 7." << endl;
    } else {
        cout << "Die Zahl ist kleiner als 7 und nicht gleich 10." << endl;
    }

    return 0;
}
```

In diesem Beispiel wird zuerst überprüft, ob `zahl` größer als 10 ist. Wenn nicht, wird geprüft, ob `zahl` gleich 7 ist. Andernfalls wird die Nachricht im `else`-Block ausgegeben.

## 4. Die `switch`-Anweisung

Die **switch**-Anweisung ist eine Alternative zur Verwendung vieler `if-else if`-Anweisungen, wenn es darum geht, mehrere mögliche Bedingungen zu überprüfen, die auf einem einzelnen Wert basieren.

### Syntax der `switch`-Anweisung

```cpp
switch (Ausdruck) {
    case Wert1:
        // Code, der ausgeführt wird, wenn der Ausdruck gleich Wert1 ist
        break;
    case Wert2:
        // Code, der ausgeführt wird, wenn der Ausdruck gleich Wert2 ist
        break;
    default:
        // Code, der ausgeführt wird, wenn keine der Bedingungen zutrifft
}
```

- Der `break`-Befehl beendet die Ausführung des `switch`-Blocks, wenn eine Bedingung erfüllt wurde.
- Der `default`-Block wird ausgeführt, wenn keine der `case`-Bedingungen zutrifft.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 2;

    switch (zahl) {
        case 1:
            cout << "Die Zahl ist 1." << endl;
            break;
        case 2:
            cout << "Die Zahl ist 2." << endl;
            break;
        case 3:
            cout << "Die Zahl ist 3." << endl;
            break;
        default:
            cout << "Unbekannte Zahl." << endl;
    }

    return 0;
}
```

In diesem Beispiel wird der Wert von `zahl` überprüft. Wenn `zahl` den Wert `2` hat, wird `"Die Zahl ist 2."` ausgegeben.

## Vergleich zwischen `if-else` und `switch`

- **`if-else`** ist flexibler, da es auch komplexe Bedingungen verarbeiten kann (z. B. Vergleiche wie `>`, `<`, `==` usw.).
- **`switch`** ist besser geeignet, wenn du viele Bedingungen auf einem einzigen Wert überprüfen musst, da es den Code übersichtlicher macht und die Lesbarkeit verbessert.

## 5. Verschachtelte Kontrollstrukturen

Es ist auch möglich, Kontrollstrukturen zu verschachteln, was bedeutet, dass du innerhalb einer `if`- oder `switch`-Anweisung eine andere `if`- oder `switch`-Anweisung einfügst.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 8;

    if (zahl > 0) {
        if (zahl % 2 == 0) {
            cout << "Die Zahl ist positiv und gerade." << endl;
        } else {
            cout << "Die Zahl ist positiv und ungerade." << endl;
        }
    } else {
        cout << "Die Zahl ist negativ oder null." << endl;
    }

    return 0;
}
```

In diesem Beispiel wird zuerst überprüft, ob die Zahl positiv ist. Wenn dies zutrifft, wird weiter geprüft, ob die Zahl gerade oder ungerade ist.

## Zusammenfassung

- **`if`** führt einen Block von Code aus, wenn eine Bedingung wahr ist.
- **`else`** führt einen Block von Code aus, wenn die `if`-Bedingung falsch ist.
- **`else if`** ermöglicht es, mehrere Bedingungen in einer `if`-Anweisung zu überprüfen.
- **`switch`** ist eine strukturierte Möglichkeit, mehrere Bedingungen auf einem einzelnen Wert zu überprüfen.
- Du kannst Kontrollstrukturen **verschachteln**, um komplexere Entscheidungsbäume zu erstellen.

## Übung:

1. Erstelle ein Programm, das den Wert einer Ganzzahl überprüft und folgende Ausgaben macht:
   - `"Die Zahl ist positiv"`
   - `"Die Zahl ist negativ"`
   - `"Die Zahl ist null"`

2. Verwende eine `switch`-Anweisung, um einen Wochentag basierend auf einer Zahl (1-7) auszugeben.

```cpp
#include <iostream>
using namespace std;

int main() {
    int tag = 3;

    switch (tag) {
        case 1:
            cout << "Montag" << endl;
            break;
        case 2:
            cout << "Dienstag" << endl;
            break;
        case 3:
            cout << "Mittwoch" << endl;
            break;
        case 4:
            cout << "Donnerstag" << endl;
            break;
        case 5:
            cout << "Freitag" << endl;
            break;
        case 6:
            cout << "Samstag" << endl;
            break;
        case 7:
            cout << "Sonntag" << endl;
            break;
        default:
            cout << "Ungültiger Tag" << endl;
    }

    return 0;
}
```

Viel Spaß beim Üben!

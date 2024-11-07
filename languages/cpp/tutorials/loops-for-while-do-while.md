# Einführung in Schleifen: `for`, `while`, und `do-while` in C++

### Erklärung der Struktur:
1. **Einführung in Schleifen**: Grundlegende Erklärung und Bedeutung von Schleifen.
2. **for-Schleife**: Erklärung und Beispiel der `for`-Schleife.
3. **while-Schleife**: Erklärung und Beispiel der `while`-Schleife.
4. **do-while-Schleife**: Erklärung und Beispiel der `do-while`-Schleife.
5. **Zusätzliche Steuerbefehle**: Erklärung von `break` und `continue`.
6. **Verschachtelte Schleifen**: Erklärung und Beispiel für verschachtelte Schleifen.
7. **Zusammenfassung**: Kurze Zusammenfassung der wichtigsten Punkte.
8. **Übung**: Praktische Aufgaben zur Vertiefung des Verständnisses.

Jede dieser Sektionen enthält ausführliche Erklärungen und verständliche Beispiele, um den Lernprozess zu fördern.

Schleifen sind in jedem Programmiersprachenwerkzeugkasten ein wichtiger Bestandteil, da sie es ermöglichen, eine Reihe von Anweisungen wiederholt auszuführen, basierend auf einer bestimmten Bedingung. In C++ gibt es mehrere Arten von Schleifen, die sich in ihrer Funktionsweise unterscheiden: **for**, **while** und **do-while**. In diesem Tutorial werden wir diese drei Schleifen im Detail untersuchen.

## Was sind Schleifen?

Schleifen ermöglichen es, denselben Code mehrfach auszuführen, ohne dass dieser Code manuell wiederholt werden muss. Dies ist besonders nützlich, wenn eine Aufgabe immer wieder mit unterschiedlichen Eingabewerten ausgeführt werden soll.

## 1. Die `for`-Schleife

Die **for**-Schleife ist besonders nützlich, wenn die Anzahl der Wiederholungen im Voraus bekannt ist oder leicht berechnet werden kann. Sie besteht aus drei Teilen: Initialisierung, Bedingung und Inkrementierung/ Dekrementierung.

### Syntax der `for`-Schleife

```cpp
for (Initialisierung; Bedingung; Inkrement/ Dekrement) {
    // Code, der wiederholt wird
}
```

- **Initialisierung**: Einmalig ausgeführt, bevor die Schleife startet.
- **Bedingung**: Überprüft, ob die Schleife fortgesetzt wird.
- **Inkrement/Dekrement**: Verändert den Wert der Schleifenvariable nach jeder Iteration.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Eine Schleife, die von 0 bis 9 geht
    for (int i = 0; i < 10; i++) {
        cout << "Der Wert von i ist: " << i << endl;
    }

    return 0;
}
```

In diesem Beispiel wird die Schleife 10 Mal durchlaufen, beginnend mit `i = 0` und endend bei `i = 9`.

### Erklärungen:
- `int i = 0`: Initialisierung – die Schleifenvariable `i` wird mit 0 gestartet.
- `i < 10`: Bedingung – die Schleife läuft, solange `i` kleiner als 10 ist.
- `i++`: Inkrementierung – nach jedem Durchgang wird `i` um 1 erhöht.

## 2. Die `while`-Schleife

Die **while**-Schleife wird verwendet, wenn die Anzahl der Wiederholungen nicht im Voraus bekannt ist und stattdessen von einer Bedingung abhängt. Die Bedingung wird vor jedem Schleifendurchgang überprüft.

### Syntax der `while`-Schleife

```cpp
while (Bedingung) {
    // Code, der wiederholt wird, solange die Bedingung wahr ist
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    while (i < 10) {
        cout << "Der Wert von i ist: " << i << endl;
        i++; // i wird nach jedem Durchgang erhöht
    }

    return 0;
}
```

In diesem Beispiel wird die Schleife so lange ausgeführt, wie `i` kleiner als 10 ist. `i` wird innerhalb der Schleife erhöht.

### Erklärungen:
- `i++`: Inkrementierung der Schleifenvariablen nach jedem Schleifendurchgang.
- Die Bedingung `i < 10` wird überprüft, bevor der Code in der Schleife ausgeführt wird.

## 3. Die `do-while`-Schleife

Die **do-while**-Schleife funktioniert ähnlich wie die `while`-Schleife, aber mit einem entscheidenden Unterschied: Die Bedingung wird erst nach der ersten Ausführung des Schleifeninhalts überprüft. Das bedeutet, dass der Code innerhalb der Schleife mindestens einmal ausgeführt wird.

### Syntax der `do-while`-Schleife

```cpp
do {
    // Code, der wiederholt wird
} while (Bedingung);
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    do {
        cout << "Der Wert von i ist: " << i << endl;
        i++; // i wird nach jedem Durchgang erhöht
    } while (i < 10);

    return 0;
}
```

In diesem Beispiel wird der Code in der Schleife mindestens einmal ausgeführt, auch wenn die Bedingung anfangs falsch ist (in diesem Fall `i < 10`).

### Erklärungen:
- Die Bedingung wird nach der ersten Ausführung des Codes überprüft.
- `i++`: Die Schleifenvariable wird innerhalb der Schleife erhöht.

## 4. Schleifen mit `break` und `continue`

Es gibt zwei spezielle Steuerbefehle, die innerhalb von Schleifen verwendet werden können:

- **`break`**: Beendet die Schleife sofort und setzt die Ausführung des Programms nach der Schleife fort.
- **`continue`**: Überspringt die restlichen Anweisungen in der aktuellen Iteration und fährt mit der nächsten Iteration fort.

### Beispiel für `break`:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            break; // Die Schleife wird bei i = 5 abgebrochen
        }
        cout << "Der Wert von i ist: " << i << endl;
    }

    return 0;
}
```

In diesem Beispiel wird die Schleife abgebrochen, wenn `i` den Wert 5 erreicht.

### Beispiel für `continue`:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        if (i == 5) {
            continue; // Die Ausgabe wird bei i = 5 übersprungen
        }
        cout << "Der Wert von i ist: " << i << endl;
    }

    return 0;
}
```

In diesem Beispiel wird die Ausgabe für `i = 5` übersprungen, aber die Schleife läuft weiter.

## 5. Vergleich der Schleifenarten

- **`for`-Schleife**: Am besten geeignet, wenn die Anzahl der Iterationen bekannt oder berechenbar ist.
- **`while`-Schleife**: Ideal, wenn die Anzahl der Iterationen unbestimmt ist und die Bedingung vor der Schleifen-Ausführung überprüft werden muss.
- **`do-while`-Schleife**: Verwendet, wenn der Code mindestens einmal ausgeführt werden soll, auch wenn die Bedingung von Anfang an falsch ist.

## 6. Verschachtelte Schleifen

Es ist auch möglich, Schleifen zu verschachteln, das bedeutet, dass du eine Schleife innerhalb einer anderen Schleife platzierst. Dies ist besonders nützlich, um komplexe Aufgaben zu erledigen, bei denen eine Schleife für jede Iteration der äußeren Schleife ausgeführt wird.

### Beispiel für verschachtelte Schleifen:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }

    return 0;
}
```

In diesem Beispiel wird die innere Schleife für jede Iteration der äußeren Schleife vollständig durchlaufen.

## Zusammenfassung

- **`for`-Schleife**: Am besten geeignet, wenn die Anzahl der Wiederholungen bekannt ist.
- **`while`-Schleife**: Wird verwendet, wenn die Wiederholung von einer Bedingung abhängt und die Bedingung vor der Schleifen-Ausführung überprüft wird.
- **`do-while`-Schleife**: Wird verwendet, wenn der Schleifeninhalt mindestens einmal ausgeführt werden muss.
- **`break` und `continue`**: Spezialbefehle zum vorzeitigen Beenden oder Überspringen von Schleifeniteration.
- **Verschachtelte Schleifen**: Ermöglichen es, komplexe Aufgaben zu erledigen, bei denen eine Schleife innerhalb einer anderen ausgeführt wird.

## Übung:

1. Erstelle ein Programm, das die Zahlen von 1 bis 100 ausgibt und dabei nur die Zahlen ausgibt, die durch 3 teilbar sind.
2. Verwende eine verschachtelte Schleife, um ein Multiplikationstableau von 1 bis 5 zu erstellen.

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cout << i * j << "\t"; // Multiplikationstabelle
        }
        cout << endl;
    }

    return 0;
}
```

Viel Spaß beim Üben!

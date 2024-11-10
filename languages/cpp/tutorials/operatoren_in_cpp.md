# Operatoren in C++: Ein Überblick über grundlegende Operatoren

### Erklärung der Struktur:
1. **Einführung**: Erklärt, was Operatoren sind und warum sie wichtig sind.
2. **Arithmetische Operatoren**: Übersicht über die grundlegenden arithmetischen Operatoren in C++.
3. **Vergleichsoperatoren**: Besprechung der Operatoren, die zum Vergleichen von Werten verwendet werden.
4. **Logische Operatoren**: Erklärung von Operatoren, die für logische Ausdrücke verwendet werden.
5. **Inkrement- und Dekrementoperatoren**: Behandlung der Operatoren, die den Wert von Variablen um 1 ändern.
6. **Bitweise Operatoren**: Überblick über Operatoren zur Manipulation von Bits.
7. **Zusammenfassung**: Zusammenfassung der behandelten Operatoren.
8. **Übung**: Aufgaben zur Festigung des Gelernten.

In C++ sind **Operatoren** Symbole, die in Ausdrücken verwendet werden, um Operationen auf Variablen und Werten durchzuführen. Sie sind ein wesentlicher Bestandteil jeder Programmiersprache und bieten die Möglichkeit, mathematische, logische und bitweise Operationen auszuführen.

In diesem Tutorial werden wir die verschiedenen Arten von Operatoren in C++ kennenlernen und ihre Anwendung in einfachen Beispielen erklären.

## 1. Was sind Operatoren?

Ein **Operator** ist ein Symbol, das eine spezifische Operation auf ein oder mehrere Operanden (Variablen oder Werte) anwendet. In C++ gibt es viele verschiedene Arten von Operatoren, die wir in diesem Tutorial in Gruppen unterteilen werden.

## 2. Arithmetische Operatoren

Arithmetische Operatoren werden verwendet, um mathematische Berechnungen wie Addition, Subtraktion, Multiplikation und Division durchzuführen.

### Die grundlegenden arithmetischen Operatoren:

- `+` : Addition
- `-` : Subtraktion
- `*` : Multiplikation
- `/` : Division
- `%` : Modulo (Rest bei der Division)

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition: " << a + b << endl;         // Ausgabe: 13
    cout << "Subtraktion: " << a - b << endl;      // Ausgabe: 7
    cout << "Multiplikation: " << a * b << endl;   // Ausgabe: 30
    cout << "Division: " << a / b << endl;         // Ausgabe: 3
    cout << "Modulo: " << a % b << endl;           // Ausgabe: 1

    return 0;
}
```

#### Erklärung:
- Der `+`-Operator wird verwendet, um `a` und `b` zu addieren.
- Der `-`-Operator wird verwendet, um die Differenz zwischen `a` und `b` zu berechnen.
- Der `*`-Operator führt eine Multiplikation durch.
- Der `/`-Operator führt eine Ganzzahl-Division durch.
- Der `%`-Operator gibt den Rest der Division zurück.

## 3. Vergleichsoperatoren

Vergleichsoperatoren werden verwendet, um zwei Werte zu vergleichen. Das Ergebnis eines Vergleichs ist immer ein boolescher Wert (`true` oder `false`).

### Die Vergleichsoperatoren:

- `==` : Gleichheit
- `!=` : Ungleichheit
- `<`  : Kleiner als
- `>`  : Größer als
- `<=` : Kleiner oder gleich
- `>=` : Größer oder gleich

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "a == b: " << (a == b) << endl;   // Ausgabe: 0 (false)
    cout << "a != b: " << (a != b) << endl;   // Ausgabe: 1 (true)
    cout << "a > b: " << (a > b) << endl;     // Ausgabe: 1 (true)
    cout << "a < b: " << (a < b) << endl;     // Ausgabe: 0 (false)

    return 0;
}
```

#### Erklärung:
- Der `==`-Operator prüft, ob `a` gleich `b` ist.
- Der `!=`-Operator prüft, ob `a` ungleich `b` ist.
- Die anderen Operatoren (`<`, `>`, `<=`, `>=`) vergleichen die Größenverhältnisse der beiden Variablen.

## 4. Logische Operatoren

Logische Operatoren werden verwendet, um mehrere Bedingungen zu kombinieren und komplexe logische Ausdrücke zu erstellen.

### Die logischen Operatoren:

- `&&` : Logisches UND (AND)
- `||` : Logisches ODER (OR)
- `!`  : Logische Negation (NOT)

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;
    bool x = true, y = false;

    cout << "(a > b) && (b > 0): " << ((a > b) && (b > 0)) << endl;   // Ausgabe: 1 (true)
    cout << "(a < b) || (b > 0): " << ((a < b) || (b > 0)) << endl;    // Ausgabe: 1 (true)
    cout << "!(x && y): " << !(x && y) << endl;                         // Ausgabe: 1 (true)

    return 0;
}
```

#### Erklärung:
- Der `&&`-Operator gibt `true` zurück, wenn beide Bedingungen wahr sind.
- Der `||`-Operator gibt `true` zurück, wenn mindestens eine der Bedingungen wahr ist.
- Der `!`-Operator negiert eine Bedingung, d. h. er gibt `true` zurück, wenn die Bedingung `false` ist.

## 5. Inkrement- und Dekrementoperatoren

Die Inkrement- und Dekrementoperatoren werden verwendet, um den Wert einer Variablen um 1 zu erhöhen oder zu verringern.

### Die Operatoren:

- `++` : Inkrement (Erhöht den Wert um 1)
- `--` : Dekrement (Verringert den Wert um 1)

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "a++: " << a++ << endl;   // Ausgabe: 10, dann wird a auf 11 erhöht
    cout << "a: " << a << endl;       // Ausgabe: 11
    cout << "--a: " << --a << endl;   // Ausgabe: 10, a wird auf 10 verringert

    return 0;
}
```

#### Erklärung:
- Der Operator `a++` gibt zunächst den Wert von `a` zurück und erhöht ihn danach um 1.
- Der Operator `--a` verringert den Wert von `a` zuerst und gibt den neuen Wert zurück.

## 6. Bitweise Operatoren

Bitweise Operatoren arbeiten auf der binären Darstellung von Zahlen und ermöglichen es, auf Bits zuzugreifen und diese zu manipulieren.

### Die bitweisen Operatoren:

- `&`  : Bitweises UND
- `|`  : Bitweises ODER
- `^`  : Bitweises XOR (Exklusiv-ODER)
- `~`  : Bitweises Negieren (Komplement)
- `<<` : Linke Verschiebung
- `>>` : Rechte Verschiebung

| Operator | Name              | Beschreibung                                 |
|----------|-------------------|---------------------------------------------|
| `&`      | AND              | Vergleicht zwei Bits und gibt `1` zurück, wenn **beide** Bits `1` sind. |
| `I`      | OR               | Vergleicht zwei Bits und gibt `1` zurück, wenn **mindestens eines** der Bits `1` ist. |
| `^`      | XOR (exclusive OR) | Gibt `1` zurück, wenn **genau eines** der Bits `1` ist, aber nicht beide. |
| `~`      | NOT (Negation)   | Kehrt alle Bits um (aus `1` wird `0` und umgekehrt). |
| `<<`     | Left Shift       | Verschiebt alle Bits nach **links** um eine bestimmte Anzahl an Stellen (fügt rechts Nullen an). |
| `>>`     | Right Shift      | Verschiebt alle Bits nach **rechts** um eine bestimmte Anzahl an Stellen (fügt links Nullen an, wenn es sich um eine positive Zahl handelt). |

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // Binär: 0101
    int b = 3;  // Binär: 0011

    cout << "(a & b): " << (a & b) << endl;   // Ausgabe: 1 (Binär: 0001)
    cout << "(a | b): " << (a | b) << endl;   // Ausgabe: 7 (Binär: 0111)
    cout << "(a ^ b): " << (a ^ b) << endl;   // Ausgabe: 6 (Binär: 0110)

    return 0;
}
```

#### Erklärung:
- Der `&`-Operator führt ein bitweises UND durch.
- Der `|`-Operator führt ein bitweises ODER durch.
- Der `^`-Operator führt ein bitweises exklusives ODER (XOR) durch.

## 7. Zusammenfassung

In diesem Tutorial haben wir die wichtigsten Operatoren in C++ behandelt:
- **Arithmetische Operatoren** zur Durchführung grundlegender mathematischer Operationen.
- **Vergleichsoperatoren** zum Vergleichen von Werten.
- **Logische Operatoren** zum Kombinieren von Bedingungen.
- **Inkrement- und Dekrementoperatoren** zur Erhöhung und Verringerung von Variablenwerten.
- **Bitweise Operatoren** zur Manipulation von Bits.

## 8. Übung:

1. Erstelle ein Programm, das zwei Ganzzahlen eingibt und die Ergebnisse aller arithmetischen Operationen anzeigt.
2. Experimentiere mit logischen Operatoren und führe eine Abfrage mit mehreren Bedingungen durch.
3. Verwende bitweise Operatoren, um zwei Zahlen zu kombinieren.

Viel Spaß beim Üben!

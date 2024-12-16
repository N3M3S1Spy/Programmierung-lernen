# **Operatoren in C++: Ein Überblick über grundlegende Operatoren**

## **Inhaltsverzeichnis**
1. [Einführung](#1-einführung)  
2. [Arithmetische Operatoren](#2-arithmetische-operatoren)  
3. [Vergleichsoperatoren](#3-vergleichsoperatoren)  
4. [Logische Operatoren](#4-logische-operatoren)  
5. [Inkrement- und Dekrementoperatoren](#5-inkrement--und-dekrementoperatoren)  
6. [Bitweise Operatoren](#6-bitweise-operatoren)  
7. [Zusammenfassung](#7-zusammenfassung)  
8. [Übungen](#8-übungen)

---

## **1. Einführung**

In C++ sind **Operatoren** Symbole, die in Ausdrücken verwendet werden, um Operationen auf Variablen und Werten durchzuführen. Sie sind ein grundlegender Bestandteil jeder Programmiersprache und ermöglichen mathematische, logische sowie bitweise Manipulationen.

In diesem Tutorial betrachten wir die wichtigsten Arten von Operatoren in C++ und erklären sie anhand praktischer Beispiele.

---

## **2. Arithmetische Operatoren**

Arithmetische Operatoren werden für mathematische Berechnungen wie Addition, Subtraktion, Multiplikation und Division verwendet.

### **Die grundlegenden arithmetischen Operatoren:**
- `+` (Addition): Zum Beispiel ergibt `10 + 3` den Wert `13`.
- `-` (Subtraktion): Zum Beispiel ergibt `10 - 3` den Wert `7`.
- `*` (Multiplikation): Zum Beispiel ergibt `10 * 3` den Wert `30`.
- `/` (Division): Zum Beispiel ergibt `10 / 3` den Wert `3` (Ganzzahldivision).
- `%` (Modulo): Zum Beispiel ergibt `10 % 3` den Restwert `1`.

### **Codebeispiel:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 3;

    cout << "Addition: " << a + b << endl;
    cout << "Subtraktion: " << a - b << endl;
    cout << "Multiplikation: " << a * b << endl;
    cout << "Division: " << a / b << endl;
    cout << "Modulo: " << a % b << endl;

    return 0;
}
```

**Hinweis:** Bei der Division von Ganzzahlen in C++ wird der Rest abgeschnitten. Um genaue Ergebnisse zu erhalten, können Gleitkommatypen (`float`, `double`) verwendet werden.

---

## **3. Vergleichsoperatoren**

Vergleichsoperatoren werden verwendet, um Werte zu vergleichen. Das Ergebnis ist immer ein Boolescher Wert (`true` oder `false`).

### **Die Vergleichsoperatoren:**
- `==` (Gleichheit): Zum Beispiel ergibt `10 == 5` den Wert `false`.
- `!=` (Ungleichheit): Zum Beispiel ergibt `10 != 5` den Wert `true`.
- `<` (Kleiner als): Zum Beispiel ergibt `10 < 5` den Wert `false`.
- `>` (Größer als): Zum Beispiel ergibt `10 > 5` den Wert `true`.
- `<=` (Kleiner oder gleich): Zum Beispiel ergibt `10 <= 5` den Wert `false`.
- `>=` (Größer oder gleich): Zum Beispiel ergibt `10 >= 5` den Wert `true`.

### **Codebeispiel:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "a == b: " << (a == b) << endl;
    cout << "a != b: " << (a != b) << endl;
    cout << "a > b: " << (a > b) << endl;
    cout << "a < b: " << (a < b) << endl;

    return 0;
}
```

---

## **4. Logische Operatoren**

Logische Operatoren kombinieren mehrere Bedingungen oder negieren sie.

### **Die logischen Operatoren:**
- `&&` (Logisches UND): Gibt `true` zurück, wenn beide Bedingungen wahr sind. Beispiel: `(10 > 5) && (5 > 0)` ergibt `true`.
- `||` (Logisches ODER): Gibt `true` zurück, wenn mindestens eine Bedingung wahr ist. Beispiel: `(10 < 5) || (5 > 0)` ergibt `true`.
- `!` (Logische Negation): Kehrt den Wahrheitswert um. Beispiel: `!(10 > 5)` ergibt `false`.

### **Codebeispiel:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 5;

    cout << "(a > b) && (b > 0): " << ((a > b) && (b > 0)) << endl;
    cout << "(a < b) || (b > 0): " << ((a < b) || (b > 0)) << endl;
    cout << "!(a > b): " << !(a > b) << endl;

    return 0;
}
```

---

## **5. Inkrement- und Dekrementoperatoren**

Diese Operatoren ändern den Wert einer Variablen um 1.

### **Die Operatoren:**
- `++` (Inkrement): Erhöht den Wert um 1. Beispiel: `a++` (Postfix) gibt den aktuellen Wert zurück und erhöht danach, `++a` (Präfix) erhöht zuerst und gibt den neuen Wert zurück.
- `--` (Dekrement): Verringert den Wert um 1. Beispiel: `a--` (Postfix) oder `--a` (Präfix).

### **Codebeispiel:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10;

    cout << "Postfix-Inkrement: " << a++ << endl;
    cout << "Nach Inkrement: " << a << endl;
    cout << "Präfix-Dekrement: " << --a << endl;

    return 0;
}
```

---

## **6. Bitweise Operatoren**

Bitweise Operatoren arbeiten auf der Binärdarstellung von Zahlen.

### **Die bitweisen Operatoren:**
- `&` (Bitweises UND): Setzt jedes Bit auf `1`, wenn es in beiden Operanden `1` ist.
- `|` (Bitweises ODER): Setzt jedes Bit auf `1`, wenn mindestens eines der Bits `1` ist.
- `^` (Exklusives ODER): Setzt jedes Bit auf `1`, wenn die Bits unterschiedlich sind.
- `~` (NOT): Kehrt alle Bits um.
- `<<` (Linke Verschiebung): Verschiebt die Bits nach links, fügt rechts Nullen ein.
- `>>` (Rechte Verschiebung): Verschiebt die Bits nach rechts, fügt links Nullen ein.

### **Codebeispiel:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5; // Binär: 0101
    int b = 3; // Binär: 0011

    cout << "a & b: " << (a & b) << endl; // Ausgabe: 1
    cout << "a | b: " << (a | b) << endl; // Ausgabe: 7
    cout << "a ^ b: " << (a ^ b) << endl; // Ausgabe: 6

    return 0;
}
```

---

## **7. Zusammenfassung**

In diesem Tutorial wurden folgende Operatoren behandelt:
1. Arithmetische Operatoren (`+`, `-`, `*`, `/`, `%`)
2. Vergleichsoperatoren (`==`, `!=`, `<`, `>`, `<=`, `>=`)
3. Logische Operatoren (`&&`, `||`, `!`)
4. Inkrement-/Dekrementoperatoren (`++`, `--`)
5. Bitweise Operatoren (`&`, `|`, `^`, `~`, `<<`, `>>`)

---

## **8. Übungen**

1. Schreibe ein Programm, das zwei Zahlen eingibt und deren Summe, Differenz, Produkt, Quotient und Modulo ausgibt.
2. Erstelle ein Programm, das zwei Zahlen vergleicht und verschiedene logische Kombinationen testet.
3. Experimentiere mit bitweisen Operatoren und verschiebe Bits in verschiedene Richtungen.

Viel Spaß beim üben!

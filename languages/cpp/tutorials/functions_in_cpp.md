# Funktionen in C++: Modularisierung deines Codes

### Erklärung der Struktur:
1. **Was ist eine Funktion?**: Einführung in Funktionen.
2. **Eine einfache Funktion**: Beispiel einer einfachen Funktion mit Rückgabewert.
3. **Rückgabewerte und void-Funktionen**: Funktionen ohne Rückgabewert (`void`).
4. **Parameter und Argumente**: Wie Parameter in Funktionen verwendet werden.
5. **Funktionsüberladung (Function Overloading)**: Mehrere Funktionen mit dem gleichen Namen.
6. **Pass-by-Value vs. Pass-by-Reference**: Unterschied zwischen Wertübergabe und Referenzübergabe.
7. **Rekursion**: Einführung in rekursive Funktionen.
8. **Zusammenfassung**: Überblick über alle behandelten Themen.
9. **Übung**: Aufgaben zur Vertiefung des Gelernten.

Funktionen sind ein grundlegender Bestandteil jeder Programmiersprache. Sie ermöglichen es dir, wiederverwendbaren Code zu erstellen, der bestimmte Aufgaben übernimmt. In C++ erleichtern Funktionen das Strukturieren von Programmen und verbessern die Lesbarkeit sowie Wartbarkeit des Codes.

In diesem Tutorial werden wir uns mit den grundlegenden Konzepten von Funktionen in C++ beschäftigen: Definition, Deklaration und Aufruf von Funktionen, Funktionsparameter, Rückgabewerte und der Unterschied zwischen pass-by-value und pass-by-reference.

## 1. Was ist eine Funktion?

Eine Funktion ist ein Block von Code, der eine bestimmte Aufgabe erfüllt. Funktionen können Werte entgegennehmen (Parameter) und Werte zurückgeben (Rückgabewerte). Sie können auch ohne Parameter oder Rückgabewert existieren.

### Syntax einer Funktion:

```cpp
Rückgabewert Funktionsname(Parameter1, Parameter2, ...) {
    // Funktionskörper
    return rückgabewert; // Falls ein Rückgabewert erforderlich ist
}
```

- **Rückgabewert**: Der Typ des Wertes, den die Funktion zurückgibt (z.B. `int`, `float`, `void`).
- **Funktionsname**: Der Name der Funktion, den du zum Aufrufen der Funktion verwendest.
- **Parameter**: Variablen, die an die Funktion übergeben werden (optional).
- **Funktionskörper**: Der Code, der ausgeführt wird, wenn die Funktion aufgerufen wird.

## 2. Eine einfache Funktion

Hier ist ein einfaches Beispiel, das zeigt, wie man eine Funktion erstellt, die zwei Zahlen addiert:

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration
int addiere(int a, int b);

int main() {
    int ergebnis = addiere(3, 4);
    cout << "Das Ergebnis der Addition ist: " << ergebnis << endl;
    return 0;
}

// Funktionsdefinition
int addiere(int a, int b) {
    return a + b;
}
```

#### Erklärung:
- Die Funktion `addiere` nimmt zwei Ganzzahlen `a` und `b` entgegen und gibt deren Summe zurück.
- Die Funktion wird in `main()` aufgerufen und das Ergebnis wird ausgegeben.

## 3. Rückgabewerte und void-Funktionen

Funktionen können einen Rückgabewert liefern, der im Code verwendet wird. Es ist jedoch auch möglich, dass eine Funktion keinen Rückgabewert hat. In diesem Fall verwenden wir das Schlüsselwort `void`.

### Beispiel: Funktion ohne Rückgabewert

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration
void ausgabeBegruessung();

int main() {
    ausgabeBegruessung();
    return 0;
}

// Funktionsdefinition
void ausgabeBegruessung() {
    cout << "Hallo, willkommen im C++ Tutorial!" << endl;
}
```

#### Erklärung:
- Die Funktion `ausgabeBegruessung` gibt eine Begrüßungsnachricht aus, hat aber keinen Rückgabewert (`void`).

## 4. Parameter und Argumente

Funktionen können Parameter haben, die beim Aufruf mit Argumenten versehen werden. Dies ermöglicht es, dass Funktionen mit verschiedenen Eingabewerten arbeiten.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration
void multipliziere(int a, int b);

int main() {
    multipliziere(4, 5); // Übergabe von 4 und 5 als Argumente
    return 0;
}

// Funktionsdefinition
void multipliziere(int a, int b) {
    cout << "Das Produkt ist: " << a * b << endl;
}
```

#### Erklärung:
- Die Funktion `multipliziere` erhält zwei Parameter `a` und `b`, die als Argumente beim Aufruf übergeben werden.

## 5. Funktionsüberladung (Function Overloading)

In C++ ist es möglich, mehrere Funktionen mit dem gleichen Namen zu haben, solange sie unterschiedliche Parameterlisten haben. Dies wird als Funktionsüberladung bezeichnet.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int addiere(int a, int b) {
    return a + b;
}

double addiere(double a, double b) {
    return a + b;
}

int main() {
    cout << "Summe der Ganzzahlen: " << addiere(3, 4) << endl;
    cout << "Summe der Dezimalzahlen: " << addiere(3.5, 4.5) << endl;
    return 0;
}
```

#### Erklärung:
- Wir haben zwei Funktionen mit dem Namen `addiere`, aber sie unterscheiden sich in den Parametertypen (`int` vs. `double`).

## 6. Pass-by-Value vs. Pass-by-Reference

In C++ werden Parameter standardmäßig durch **Wertübergabe (pass-by-value)** an eine Funktion übergeben. Das bedeutet, dass die Funktion eine Kopie des Wertes erhält und Änderungen an diesem Wert keine Auswirkungen auf die ursprüngliche Variable haben.

Es gibt jedoch auch die Möglichkeit, Parameter **durch Referenz (pass-by-reference)** zu übergeben. Dadurch können Änderungen an den Parametern in der Funktion auch die ursprünglichen Variablen außerhalb der Funktion beeinflussen.

### Pass-by-Value:

```cpp
#include <iostream>
using namespace std;

void verdoppeln(int x) {
    x = x * 2;
}

int main() {
    int zahl = 5;
    verdoppeln(zahl); // Pass-by-Value
    cout << "Wert von zahl: " << zahl << endl; // bleibt 5
    return 0;
}
```

### Pass-by-Reference:

```cpp
#include <iostream>
using namespace std;

void verdoppeln(int &x) {
    x = x * 2;
}

int main() {
    int zahl = 5;
    verdoppeln(zahl); // Pass-by-Reference
    cout << "Wert von zahl: " << zahl << endl; // wird 10
    return 0;
}
```

#### Erklärung:
- Bei **Pass-by-Value** wird eine Kopie der Variablen an die Funktion übergeben, Änderungen wirken sich nicht auf die ursprüngliche Variable aus.
- Bei **Pass-by-Reference** wird die Adresse der Variablen an die Funktion übergeben, sodass Änderungen in der Funktion die ursprüngliche Variable beeinflussen.

## 7. Rekursion

Rekursion ist der Prozess, bei dem eine Funktion sich selbst aufruft. Rekursive Funktionen sind besonders nützlich für Probleme, die sich in kleinere Teilprobleme zerlegen lassen.

### Beispiel: Fakultät berechnen (Rekursion)

```cpp
#include <iostream>
using namespace std;

int fakultaet(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * fakultaet(n - 1);
}

int main() {
    int zahl = 5;
    cout << "Die Fakultät von " << zahl << " ist: " << fakultaet(zahl) << endl;
    return 0;
}
```

#### Erklärung:
- Die Funktion `fakultaet` ruft sich selbst auf, bis die Basisbedingung (`n <= 1`) erreicht ist.

## 8. Zusammenfassung

In diesem Tutorial haben wir die Grundlagen von Funktionen in C++ behandelt:

- **Funktionen**: Modularisieren deinen Code und machen ihn wiederverwendbar.
- **Rückgabewerte**: Funktionen können Werte zurückgeben oder auch keine Rückgabewerte haben (`void`).
- **Parameter**: Funktionen können mit verschiedenen Parametern arbeiten.
- **Funktionsüberladung**: Es ist möglich, mehrere Funktionen mit dem gleichen Namen zu haben, solange sie unterschiedliche Parameterlisten haben.
- **Pass-by-Value vs. Pass-by-Reference**: Unterscheidung zwischen Wertübergabe und Referenzübergabe von Parametern.
- **Rekursion**: Funktionen können sich selbst aufrufen, um Probleme zu lösen.

## 9. Übung

1. Erstelle eine Funktion, die zwei Strings vergleicht und `true` zurückgibt, wenn sie gleich sind, und `false`, wenn sie unterschiedlich sind.
2. Schreibe eine rekursive Funktion, die die Fibonacci-Zahlen berechnet.
3. Teste Funktionsüberladung, indem du zwei Funktionen erstellst, die denselben Namen haben, aber verschiedene Parameterlisten.

Viel Spaß beim Üben!

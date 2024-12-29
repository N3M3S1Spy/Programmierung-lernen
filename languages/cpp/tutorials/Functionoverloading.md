## C++ Funktionsüberladung

### Überladen von Funktionen

Die **Funktionsüberladung** ermöglicht es, mehrere Funktionen mit demselben Namen zu definieren, solange sie sich in ihrer Parameterliste unterscheiden. Die Unterschiede können in der Anzahl der Parameter, den Datentypen der Parameter oder beidem liegen. Der Compiler verwendet die Signatur der Funktion (Name und Parameterliste), um die richtige Funktion beim Aufruf auszuwählen.

### Beispiel:

```c++
int meineFunktion(int x);           // Funktion mit einem int-Parameter
float meineFunktion(float x);         // Funktion mit einem float-Parameter
double meineFunktion(double x, double y); // Funktion mit zwei double-Parametern
```

Betrachten wir ein Beispiel, das zunächst zwei separate Funktionen zum Addieren von Zahlen unterschiedlichen Typs verwendet:

### Beispiel (ohne Überladung):

```c++
#include <iostream>
using namespace std;

int plusFuncInt(int x, int y) {
    return x + y;
}

double plusFuncDouble(double x, double y) {
    return x + y;
}

int main() {
    int myNum1 = plusFuncInt(8, 5);
    double myNum2 = plusFuncDouble(4.3, 6.26);
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}

// Ausgabe:
// Int: 13
// Double: 10.56
```

Anstatt separate Funktionsnamen für ähnliche Operationen mit unterschiedlichen Datentypen zu verwenden, ist es übersichtlicher und effizienter, die Funktionsüberladung zu nutzen.

Im folgenden Beispiel wird die Funktion `plusFunc` überladen, um sowohl `int` als auch `double` zu verarbeiten:

### Beispiel (mit Überladung):

```c++
#include <iostream>
using namespace std;

int plusFunc(int x, int y) {
    return x + y;
}

double plusFunc(double x, double y) {
    return x + y;
}

int main() {
    int myNum1 = plusFunc(8, 5);       // Ruft die int-Version von plusFunc auf
    double myNum2 = plusFunc(4.3, 6.26); // Ruft die double-Version von plusFunc auf
    cout << "Int: " << myNum1 << "\n";
    cout << "Double: " << myNum2;
    return 0;
}

// Ausgabe:
// Int: 13
// Double: 10.56
```

> **Wichtiger Hinweis:** Mehrere Funktionen können denselben Namen haben, *solange* sich ihre Parameterlisten unterscheiden. Die Unterschiede können in der *Anzahl* der Parameter, den *Datentypen* der Parameter oder der *Reihenfolge* der Datentypen liegen. Der Rückgabetyp allein reicht *nicht* aus, um Funktionen zu überladen.

**Beispiele für gültige Überladungen:**

```c++
void print(int i);
void print(double d);
void print(string s);
void print(int i, double d); // Unterschiedliche Anzahl und Typen
void print(double d, int i); // Unterschiedliche Reihenfolge der Typen
```

**Beispiele für ungültige Überladungen (Kompilierfehler):**

```c++
void print(int i);
int print(int i); // Fehler: Nur der Rückgabetyp unterscheidet sich
```

Die Funktionsüberladung trägt zur besseren Lesbarkeit und Wartbarkeit des Codes bei, da logisch zusammengehörige Operationen mit demselben Namen, aber unterschiedlichen Datentypen abgebildet werden können.

## C++ Ausnahmen (Exceptions)

### C++ Ausnahmen

Bei der Ausführung von C++-Code können verschiedene Fehler auftreten: Programmierfehler, Fehler aufgrund falscher Eingaben oder andere unvorhersehbare Ereignisse.

Wenn ein Fehler auftritt, stoppt C++ normalerweise und gibt eine Fehlermeldung aus. Der Fachbegriff dafür ist: C++ wirft eine **Ausnahme** (engl. *exception*, wirft einen Fehler).

### C++ `try` und `catch`

Die Ausnahmebehandlung in C++ besteht aus drei Schlüsselwörtern: `try`, `throw` und `catch`:

Die `try`-Anweisung ermöglicht es, einen Codeblock zu definieren, der während der Ausführung auf Fehler überprüft wird.

Das Schlüsselwort `throw` wirft eine Ausnahme, wenn ein Problem erkannt wird, wodurch wir einen benutzerdefinierten Fehler erzeugen können.

Die `catch`-Anweisung ermöglicht es, einen Codeblock zu definieren, der ausgeführt wird, wenn im `try`-Block ein Fehler auftritt.

Die Schlüsselwörter `try` und `catch` treten immer paarweise auf:

### Beispiel:

```c++
try {
    // Codeblock, der getestet wird
    throw ausnahme; // Wirft eine Ausnahme, wenn ein Problem auftritt
}
catch () {
    // Codeblock zur Fehlerbehandlung
}
```

Betrachten wir das folgende Beispiel:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
    try {
        int alter = 15;
        if (alter >= 18) {
            cout << "Zugriff gewährt – du bist alt genug.\n";
        } else {
            throw (alter); // Wirft eine Ausnahme vom Typ int
        }
    }
    catch (int meinWert) { // Fängt Ausnahmen vom Typ int
        cout << "Zugriff verweigert – Du musst mindestens 18 Jahre alt sein.\n";
        cout << "Dein Alter: " << meinWert << "\n";
    }
    return 0;
}

// Ausgabe:
// Zugriff verweigert – Du musst mindestens 18 Jahre alt sein.
// Dein Alter: 15
```

#### Erläuterung des Beispiels

Wir verwenden den `try`-Block, um Code zu testen: Wenn die Variable `alter` kleiner als `18` ist, `throw`en wir eine Ausnahme und behandeln sie in unserem `catch`-Block.

Im `catch`-Block fangen wir den Fehler ab und reagieren darauf. Die `catch`-Anweisung nimmt einen **Parameter** entgegen: In unserem Beispiel verwenden wir eine `int`-Variable (`meinWert`) (weil wir im `try`-Block eine Ausnahme vom Typ `int` (`alter`) werfen), um den Wert von `alter` auszugeben.

Wenn kein Fehler auftritt (z. B. wenn `alter` `20` statt `15` ist, also größer als 18), wird der `catch`-Block übersprungen:

### Beispiel (ohne Ausnahme):

```c++
#include <iostream>
using namespace std;

int main() {
    try {
        int alter = 20;
        if (alter >= 18) {
            cout << "Zugriff gewährt – du bist alt genug.\n";
        } else {
            throw (alter);
        }
    }
    catch (int meinWert) {
        cout << "Dieser Code wird nicht ausgeführt.\n";
    }
    cout << "Programmende.\n";
    return 0;
}

// Ausgabe:
// Zugriff gewährt – du bist alt genug.
// Programmende.
```

Du kannst das Schlüsselwort `throw` auch verwenden, um eine Referenznummer auszugeben, z. B. eine benutzerdefinierte Fehlernummer/einen Fehlercode für organisatorische Zwecke (505 in unserem Beispiel):

### Beispiel (mit Fehlercode):

```c++
#include <iostream>
using namespace std;

int main() {
    try {
        int alter = 15;
        if (alter >= 18) {
            cout << "Zugriff gewährt – du bist alt genug.\n";
        } else {
            throw 505; // Wirft den Fehlercode 505
        }
    }
    catch (int fehlercode) {
        cout << "Zugriff verweigert – Du musst mindestens 18 Jahre alt sein.\n";
        cout << "Fehlernummer: " << fehlercode << "\n";
    }
    return 0;
}

// Ausgabe:
// Zugriff verweigert – Du musst mindestens 18 Jahre alt sein.
// Fehlernummer: 505
```

### Behandlung beliebiger Ausnahmetypen (`...`)

Wenn du den Typ der im `try`-Block geworfenen Ausnahme nicht kennst, kannst du die Syntax mit den drei Punkten (`...`) im `catch`-Block verwenden, die *jeden* Ausnahmetyp abfängt:

### Beispiel (beliebiger Ausnahmetyp):

```c++
#include <iostream>
using namespace std;

int main() {
    try {
        // Hier könnte jede Art von Ausnahme geworfen werden
        throw "Ein Fehler ist aufgetreten!"; // Wirft einen String
    }
    catch (...) { // Fängt jede Ausnahme ab
        cout << "Ein Fehler ist aufgetreten.\n";
    }
    return 0;
}

// Ausgabe:
// Ein Fehler ist aufgetreten.
```

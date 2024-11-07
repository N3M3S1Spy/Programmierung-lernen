# Funktionen in C++: Grundlagen und Anwendung

### Erklärung der Struktur:
1. **Was ist eine Funktion?**: Einführung in Funktionen mit einer einfachen `void`-Funktion.
2. **Funktionen mit Rückgabewerten**: Erklärt, wie Funktionen Werte zurückgeben.
3. **Funktionen mit Parametern**: Verwendet Parameter in Funktionen, um sie flexibler zu gestalten.
4. **Rückgabewert und Parameter im Detail**: Erklärt, wie Rückgabewerte und Parameter zusammenarbeiten.
5. **Funktionsüberladung**: Einführung in das Konzept der Funktionsüberladung in C++.
6. **Zusammenfassung**: Kurze Zusammenfassung der behandelten Themen.
7. **Übung**: Aufgaben zur Festigung des Gelernten.

Funktionen sind ein grundlegendes Konzept in der Programmierung und ermöglichen es, Code in wiederverwendbare, logisch getrennte Abschnitte zu unterteilen. In C++ sind Funktionen entscheidend, um den Code übersichtlicher, modularer und einfacher zu warten.

In diesem Tutorial werden wir uns mit der **Deklaration**, **Definition** und **Verwendung** von Funktionen in C++ beschäftigen. Wir werden außerdem das Konzept der **Rückgabewerte** und **Parameter** untersuchen.

## 1. Was ist eine Funktion?

Eine Funktion ist ein Codeblock, der eine bestimmte Aufgabe ausführt. Funktionen ermöglichen es, Code zu wiederverwenden und komplexe Probleme in kleinere, besser verständliche Teile zu unterteilen.

### Grundstruktur einer Funktion in C++:

```cpp
Rückgabetyp Funktionsname(Parameter) {
    // Funktionskörper
    // Code, der ausgeführt wird, wenn die Funktion aufgerufen wird
}
```

- **Rückgabetyp**: Gibt an, welchen Typ von Wert die Funktion zurückgibt. Wenn die Funktion keinen Wert zurückgibt, wird der Rückgabetyp als `void` festgelegt.
- **Funktionsname**: Der Name, mit dem die Funktion aufgerufen wird.
- **Parameter**: Die Eingabewerte, die an die Funktion übergeben werden. Diese sind optional.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration
void begruessung() {
    cout << "Hallo, Welt!" << endl;
}

int main() {
    // Funktionsaufruf
    begruessung();
    return 0;
}
```

#### Erklärung:
- Die Funktion `begruessung()` gibt den Text "Hallo, Welt!" aus. Sie hat keinen Rückgabewert, daher ist der Rückgabetyp `void`.

## 2. Funktionen mit Rückgabewerten

Funktionen können auch Werte zurückgeben. Der Rückgabewert muss den in der Funktionsdeklaration angegebenen Typ haben.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration mit Rückgabewert
int addiere(int a, int b) {
    return a + b;
}

int main() {
    int ergebnis = addiere(5, 3);
    cout << "Ergebnis: " << ergebnis << endl;
    return 0;
}
```

#### Erklärung:
- Die Funktion `addiere` nimmt zwei Ganzzahlen (`a` und `b`) als Parameter und gibt deren Summe zurück.

## 3. Funktionen mit Parametern

Funktionen können Eingabewerte (Parameter) annehmen, die zur Ausführung der Funktion verwendet werden. Parameter ermöglichen es, Funktionen flexibel zu gestalten, damit sie auf verschiedene Daten angewendet werden können.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration mit Parametern
void zeigeAlter(int alter) {
    cout << "Du bist " << alter << " Jahre alt." << endl;
}

int main() {
    zeigeAlter(20); // Funktionsaufruf mit Parameter
    return 0;
}
```

#### Erklärung:
- Die Funktion `zeigeAlter` nimmt einen Parameter `alter` und gibt eine entsprechende Nachricht aus.

## 4. Rückgabewert und Parameter im Detail

- **Rückgabewert**: Eine Funktion kann genau einen Wert zurückgeben. Der Rückgabetyp bestimmt den Typ dieses Werts (z. B. `int`, `double`, `string`). Wenn eine Funktion keinen Wert zurückgibt, wird der Rückgabetyp als `void` festgelegt.
  
- **Parameter**: Parameter sind Platzhalter, die beim Aufruf der Funktion mit konkreten Werten belegt werden. Funktionen können eine beliebige Anzahl von Parametern haben, aber der Rückgabetyp und die Anzahl der Parameter müssen übereinstimmen, wenn die Funktion aufgerufen wird.

### Beispiel mit mehreren Parametern:

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration mit mehreren Parametern
double berechneDurchschnitt(double a, double b, double c) {
    return (a + b + c) / 3;
}

int main() {
    double durchschnitt = berechneDurchschnitt(5.0, 7.0, 10.0);
    cout << "Durchschnitt: " << durchschnitt << endl;
    return 0;
}
```

#### Erklärung:
- Die Funktion `berechneDurchschnitt` nimmt drei `double`-Werte als Parameter und gibt deren Durchschnitt zurück.

## 5. Funktionsüberladung

C++ unterstützt die **Funktionsüberladung**, d. h. du kannst mehrere Funktionen mit demselben Namen definieren, solange sie sich durch die Anzahl oder den Typ der Parameter unterscheiden.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Funktionsüberladung
int addiere(int a, int b) {
    return a + b;
}

double addiere(double a, double b) {
    return a + b;
}

int main() {
    int ergebnisInt = addiere(5, 3);
    double ergebnisDouble = addiere(5.5, 3.3);

    cout << "Ergebnis (int): " << ergebnisInt << endl;
    cout << "Ergebnis (double): " << ergebnisDouble << endl;

    return 0;
}
```

#### Erklärung:
- Hier gibt es zwei `addiere`-Funktionen: Eine für Ganzzahlen und eine für Gleitkommazahlen. Die Funktionen haben denselben Namen, aber unterschiedliche Parameter.

## 6. Zusammenfassung

In diesem Tutorial haben wir die grundlegenden Konzepte von **Funktionen in C++** behandelt:

- Eine Funktion ermöglicht es dir, wiederverwendbare Codeblöcke zu erstellen.
- Funktionen können Rückgabewerte haben und Eingabewerte in Form von Parametern annehmen.
- C++ unterstützt **Funktionsüberladung**, mit der du mehrere Funktionen mit dem gleichen Namen, aber unterschiedlichen Parametern definieren kannst.

## 7. Übung

1. Erstelle eine Funktion, die den größten Wert aus drei Zahlen ermittelt und zurückgibt.
2. Schreibe eine Funktion, die einen String als Parameter nimmt und die Länge dieses Strings zurückgibt.
3. Erstelle eine überladene Funktion, die entweder zwei `int`-Werte oder zwei `double`-Werte addiert und das Ergebnis zurückgibt.

Viel Spaß beim Üben!

# Einführung in Funktionen und Parameter in C++

### Erklärung der Struktur:
1. **Was ist eine Funktion?**: Eine Einführung in die grundlegende Funktionsweise von Funktionen in C++.
2. **Funktionen mit Rückgabewert**: Erklärung, wie Funktionen Werte zurückgeben.
3. **Funktionen mit Parametern**: Wie man Funktionen mit Parametern definiert und verwendet.
4. **Standardwerte für Parameter**: Wie man Standardwerte für Parameter festlegt.
5. **Rückgabe von Werten aus Funktionen**: Erläuterung, wie man komplexe Werte aus Funktionen zurückgibt.
6. **Funktionsüberladung**: Was Funktionsüberladung bedeutet und wie sie funktioniert.
7. **Zusammenfassung**: Eine kurze Zusammenfassung des gesamten Themas.
8. **Übung**: Eine praktische Übung zur Anwendung des Gelernten.

Dieses Tutorial sollte eine solide Grundlage für den Umgang mit Funktionen und Parametern in C++ bieten.

In C++ sind **Funktionen** grundlegende Bausteine, die es ermöglichen, wiederverwendbaren Code zu schreiben. Eine Funktion ist ein benannter Codeblock, der eine bestimmte Aufgabe ausführt. Funktionen können Parameter entgegennehmen, um Daten zu verarbeiten, und einen Wert zurückgeben. In diesem Tutorial werden wir uns mit der Erstellung von Funktionen und der Übergabe von Parametern beschäftigen.

## Was ist eine Funktion?

Eine **Funktion** ist eine Gruppe von Anweisungen, die zusammen eine Aufgabe ausführen. Sie hat einen Namen, eine Rückgabewert (optional) und kann Parameter empfangen (optional).

### Die allgemeine Syntax einer Funktion

Die grundlegende Syntax einer Funktion sieht so aus:

```cpp
<return_type> function_name(<parameter_list>) {
    // Funktionskörper
}
```

- `<return_type>` gibt den Typ des Werts an, den die Funktion zurückgibt. Wenn die Funktion keinen Wert zurückgibt, wird `void` verwendet.
- `function_name` ist der Name der Funktion.
- `<parameter_list>` ist eine durch Kommas getrennte Liste von Parametern (optional).

### Eine einfache Funktion

Hier ein Beispiel für eine einfache Funktion, die keine Parameter hat und keinen Wert zurückgibt:

```cpp
#include <iostream>
using namespace std;

void helloWorld() {
    cout << "Hallo Welt!" << endl;
}

int main() {
    helloWorld();  // Aufruf der Funktion
    return 0;
}
```

In diesem Beispiel gibt die Funktion `helloWorld()` die Nachricht `"Hallo Welt!"` auf der Konsole aus. Der Rückgabewert ist `void`, was bedeutet, dass die Funktion nichts zurückgibt.

## Funktionen mit Rückgabewert

Funktionen können auch Werte zurückgeben. Der Rückgabewert wird durch den Funktionsnamen bestimmt und muss mit dem angegebenen Rückgabetyp übereinstimmen.

### Beispiel einer Funktion mit Rückgabewert

Hier ist eine Funktion, die zwei Zahlen addiert und das Ergebnis zurückgibt:

```cpp
#include <iostream>
using namespace std;

int addiere(int a, int b) {
    return a + b;
}

int main() {
    int ergebnis = addiere(5, 3);  // Funktionsaufruf mit zwei Parametern
    cout << "Das Ergebnis ist: " << ergebnis << endl;
    return 0;
}
```

In diesem Beispiel gibt die Funktion `addiere()` den Wert der Summe der beiden Eingabewerte zurück. Die Rückgabewert-Variable `ergebnis` speichert das Ergebnis des Funktionsaufrufs.

## Funktionen mit Parametern

Ein Parameter ist eine Eingabe für eine Funktion. Die Funktion verwendet diese Eingaben, um ihre Aufgabe zu erledigen.

### Übergabe von Parametern

Die Übergabe von Parametern erfolgt beim Funktionsaufruf. In der Funktionsdefinition werden die Parameter in Klammern angegeben. Die Werte, die du übergibst, werden als Argumente bezeichnet.

### Beispiel einer Funktion mit Parametern

Hier ist ein Beispiel für eine Funktion, die zwei Ganzzahlen als Parameter akzeptiert und deren Produkt zurückgibt:

```cpp
#include <iostream>
using namespace std;

int multipliziere(int a, int b) {
    return a * b;
}

int main() {
    int ergebnis = multipliziere(4, 6);  // Funktionsaufruf mit Parametern
    cout << "Das Produkt ist: " << ergebnis << endl;
    return 0;
}
```

Die Funktion `multipliziere()` akzeptiert zwei Parameter (`a` und `b`), multipliziert diese und gibt das Ergebnis zurück.

## Standardwerte für Parameter

C++ ermöglicht es, **Standardwerte** für Parameter festzulegen. Wenn der Benutzer beim Aufruf der Funktion keinen Wert für den Parameter übergibt, wird der Standardwert verwendet.

### Beispiel mit Standardwerten

```cpp
#include <iostream>
using namespace std;

void begruessung(string name = "Gast") {
    cout << "Hallo, " << name << "!" << endl;
}

int main() {
    begruessung();            // Standardwert wird verwendet
    begruessung("Magnus");    // Benutzer gibt einen Wert an
    return 0;
}
```

In diesem Beispiel wird der Standardwert `"Gast"` verwendet, wenn kein Argument übergeben wird. Andernfalls wird der Wert `"Magnus"` übergeben.

## Rückgabe von Werten aus Funktionen

Funktionen können auch andere Datenstrukturen oder komplexere Datentypen zurückgeben. Zum Beispiel kann eine Funktion ein Array oder eine Struktur zurückgeben. Dies wird jedoch in späteren Tutorials behandelt.

### Beispiel mit einer Funktion, die ein Array zurückgibt

Obwohl es nicht möglich ist, ein Array direkt als Rückgabewert zu übergeben (wegen der Speicherproblematik), kannst du einen Zeiger auf ein Array zurückgeben. Hier ist ein einfaches Beispiel, wie du dies tun könntest:

```cpp
#include <iostream>
using namespace std;

int* gibArray() {
    static int arr[3] = {1, 2, 3};  // Das Array muss static sein, um außerhalb der Funktion zugänglich zu bleiben
    return arr;
}

int main() {
    int* array = gibArray();  // Funktionsaufruf, der einen Zeiger auf das Array zurückgibt
    cout << "Erstes Element: " << array[0] << endl;  // Zugriff auf das erste Element des Arrays
    return 0;
}
```

## Funktionsüberladung

In C++ ist es möglich, **Funktionen zu überladen**, was bedeutet, dass du mehrere Funktionen mit dem gleichen Namen, aber unterschiedlichen Parametertypen oder -zahlen haben kannst. Der Compiler wählt die passende Funktion basierend auf den übergebenen Argumenten aus.

### Beispiel der Funktionsüberladung

```cpp
#include <iostream>
using namespace std;

void ausgabe(int a) {
    cout << "Ganzzahl: " << a << endl;
}

void ausgabe(double a) {
    cout << "Gleitkommazahl: " << a << endl;
}

int main() {
    ausgabe(5);    // Aufruf der Funktion mit einer Ganzzahl
    ausgabe(3.14); // Aufruf der Funktion mit einer Gleitkommazahl
    return 0;
}
```

In diesem Beispiel gibt es zwei `ausgabe()`-Funktionen, die sich nur im Datentyp des Parameters unterscheiden.

## Zusammenfassung

- **Funktionen** sind Codeblöcke, die eine Aufgabe ausführen und einen Rückgabewert haben können.
- **Parameter** sind Eingaben, die an Funktionen übergeben werden.
- Funktionen können mit **Rückgabewerten** arbeiten und **Standardwerte** für Parameter festlegen.
- **Funktionsüberladung** ermöglicht es, mehrere Funktionen mit dem gleichen Namen, aber unterschiedlichen Parametern zu erstellen.

## Übung:

Erstelle ein Programm, das:
1. Eine Funktion `berechneQuadrat()` erstellt, die das Quadrat einer Zahl berechnet und zurückgibt.
2. Eine Funktion `berechneSumme()` erstellt, die zwei Zahlen als Parameter entgegennimmt und deren Summe zurückgibt.
3. Beide Funktionen im `main()`-Programm aufruft.

```cpp
#include <iostream>
using namespace std;

int berechneQuadrat(int x) {
    return x * x;
}

int berechneSumme(int x, int y) {
    return x + y;
}

int main() {
    int zahl1 = 4;
    int zahl2 = 6;
    
    cout << "Das Quadrat von " << zahl1 << " ist: " << berechneQuadrat(zahl1) << endl;
    cout << "Die Summe von " << zahl1 << " und " << zahl2 << " ist: " << berechneSumme(zahl1, zahl2) << endl;
    
    return 0;
}
```

Dieses Programm verwendet Funktionen, um die Quadrat- und Summenberechnungen durchzuführen und zu veranschaulichen, wie man Parameter und Rückgabewerte effizient nutzt.

Viel Spaß beim Üben!

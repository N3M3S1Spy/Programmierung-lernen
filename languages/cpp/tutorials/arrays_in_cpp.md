# Arrays in C++: Grundlagen und Anwendung

### Erklärung der Struktur:
1. **Was ist ein Array?**: Einführung in Arrays mit einer einfachen Deklaration und Initialisierung.
2. **Arrays mit festen und variablen Größen**: Unterschiede zwischen statischen und dynamischen Arrays.
3. **Zugriff auf Array-Elemente**: Erklärung, wie man auf Array-Elemente zugreift.
4. **Mehrdimensionale Arrays**: Einführung in mehrdimensionale Arrays (2D-Arrays).
5. **Array-Referenzen und Pointer**: Wie Arrays und Zeiger zusammenarbeiten.
6. **Zusammenfassung**: Kurze Zusammenfassung der behandelten Themen.
7. **Übung**: Aufgaben zur Festigung des Gelernten.

In C++ ist ein **Array** eine Datenstruktur, die es ermöglicht, mehrere Werte desselben Typs unter einem gemeinsamen Namen zu speichern. Arrays sind besonders nützlich, wenn du mit einer festen Anzahl von Daten arbeiten möchtest.

In diesem Tutorial werden wir uns mit der Deklaration, Initialisierung und Verwendung von Arrays in C++ befassen.

## 1. Was ist ein Array?

Ein **Array** ist eine Sammlung von Elementen des gleichen Typs, die nacheinander im Speicher gespeichert werden. Du kannst auf jedes Element eines Arrays über seinen Index zugreifen.

### Grundstruktur eines Arrays:

```cpp
Typ Name[Größe];
```

- **Typ**: Der Datentyp der Elemente im Array (z. B. `int`, `double`, `char`).
- **Name**: Der Name des Arrays.
- **Größe**: Die Anzahl der Elemente im Array. Die Größe muss zur Kompilierzeit bekannt sein.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[5] = {1, 2, 3, 4, 5}; // Deklaration und Initialisierung eines Arrays

    // Zugriff auf Elemente des Arrays
    cout << "Das erste Element: " << zahlen[0] << endl;
    cout << "Das zweite Element: " << zahlen[1] << endl;

    return 0;
}
```

#### Erklärung:
- In diesem Beispiel haben wir ein Array namens `zahlen`, das 5 `int`-Werte speichert. Der Index des ersten Elements ist `0`, und der Index des letzten Elements ist `4`.

## 2. Arrays mit festen und variablen Größen

Arrays können mit einer festen Größe oder mit einer variablen Größe erstellt werden. In C++ müssen statische Arrays jedoch immer eine feste Größe haben, die zur Kompilierzeit bekannt ist.

### Beispiel mit festem Array:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[3] = {10, 20, 30};  // Ein statisches Array mit 3 Elementen

    for (int i = 0; i < 3; i++) {
        cout << "Element " << i + 1 << ": " << zahlen[i] << endl;
    }

    return 0;
}
```

#### Erklärung:
- In diesem Beispiel ist die Größe des Arrays `zahlen` fest auf 3 gesetzt, und wir greifen mit einer Schleife auf die einzelnen Elemente zu.

### Beispiel mit dynamischem Array (mit `new`):

```cpp
#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int* zahlen = new int[n];  // Dynamisches Array

    // Initialisierung der Array-Elemente
    for (int i = 0; i < n; i++) {
        zahlen[i] = i + 1;
    }

    // Ausgabe der Array-Elemente
    for (int i = 0; i < n; i++) {
        cout << "Element " << i + 1 << ": " << zahlen[i] << endl;
    }

    delete[] zahlen;  // Speicherfreigabe

    return 0;
}
```

#### Erklärung:
- Hier wird ein dynamisches Array mit dem Operator `new` erstellt. Wir geben dem Array eine Größe von `n`, die zur Laufzeit festgelegt wird. Am Ende wird der Speicher mit `delete[]` wieder freigegeben.

## 3. Zugriff auf Array-Elemente

Arrays in C++ verwenden **Indizes**, um auf einzelne Elemente zuzugreifen. Der Index des ersten Elements ist immer `0`, der Index des zweiten Elements ist `1` und so weiter. Es ist wichtig zu beachten, dass der Index niemals außerhalb des gültigen Bereichs des Arrays liegen darf.

### Beispiel mit Schleifen:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[5] = {1, 2, 3, 4, 5};

    // Ausgabe der Array-Elemente mit einer Schleife
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << zahlen[i] << endl;
    }

    return 0;
}
```

#### Erklärung:
- Mit einer Schleife greifen wir auf jedes Element des Arrays `zahlen` zu und geben es aus.

## 4. Mehrdimensionale Arrays

C++ ermöglicht es, **mehrdimensionale Arrays** zu erstellen, wie z. B. ein **2D-Array** (Matrix). Diese Arrays bestehen aus Arrays von Arrays.

### Beispiel eines 2D-Arrays:

```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};  // 2D-Array mit 2 Zeilen und 3 Spalten

    // Zugriff auf Elemente des 2D-Arrays
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
    }

    return 0;
}
```

#### Erklärung:
- Ein 2D-Array `matrix` mit 2 Zeilen und 3 Spalten wird erstellt. Der Zugriff auf die einzelnen Elemente erfolgt mit zwei Indizes.

## 5. Array-Referenzen und Pointer

In C++ sind Arrays eng mit **Zeigern (Pointers)** verbunden. Der Name eines Arrays ist im Wesentlichen ein Zeiger auf das erste Element des Arrays.

### Beispiel mit Zeiger:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[3] = {10, 20, 30};
    int* ptr = zahlen;  // Zeiger auf das erste Element des Arrays

    // Zugriff auf Array-Elemente über den Zeiger
    cout << "Erstes Element: " << *ptr << endl;
    cout << "Zweites Element: " << *(ptr + 1) << endl;

    return 0;
}
```

#### Erklärung:
- Der Zeiger `ptr` zeigt auf das erste Element des Arrays. Durch den Dereferenzierungsoperator `*` können wir auf die Array-Elemente zugreifen.

## 6. Zusammenfassung

In diesem Tutorial haben wir die grundlegenden Konzepte von **Arrays in C++** behandelt:

- Arrays sind eine Sammlung von Elementen des gleichen Typs.
- Die Größe von Arrays kann sowohl fest als auch dynamisch sein.
- Du kannst auf die Elemente eines Arrays mit Indizes zugreifen und mehrdimensionale Arrays erstellen.
- Arrays und Zeiger sind in C++ eng miteinander verbunden und ermöglichen eine effiziente Speicherverwaltung.

## 7. Übung

1. Erstelle ein Array, das die 10 ersten Fibonacci-Zahlen speichert und gebe es aus.
2. Erstelle ein 2D-Array, das eine Matrix mit 3 Zeilen und 3 Spalten darstellt und berechne die Summe aller Elemente.
3. Verwende einen Zeiger, um auf die Elemente eines Arrays zuzugreifen und gebe sie aus.

Viel Spaß beim Üben!

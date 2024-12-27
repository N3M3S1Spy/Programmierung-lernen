## C++ Arrays

Arrays dienen dazu, mehrere Werte desselben Datentyps in einer einzigen Variablen zu speichern. Statt für jeden Wert eine eigene Variable zu deklarieren, verwendest du ein Array.

### Deklaration eines Arrays:

```c++
Datentyp Arrayname[Anzahl der Elemente];
```

**Beispiele:**

```c++
string cars[4]; // Array für 4 Strings
int myNum[3];   // Array für 3 Integers
```

### Initialisierung eines Arrays mit Werten (Array-Literal):

```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
int myNum[3] = {10, 20, 30};
```

### Zugriff auf Array-Elemente:

Array-Indizes beginnen bei 0. Das erste Element hat den Index 0, das zweite den Index 1 usw.

```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cout << cars[0]; // Gibt "Volvo" aus
cout << cars[2]; // Gibt "Ford" aus
```

### Ändern eines Array-Elements:

```c++
string cars[4] = {"Volvo", "BMW", "Ford", "Mazda"};
cars[0] = "Opel";
cout << cars[0]; // Gibt jetzt "Opel" aus
```

-----

## C++ Arrays und Schleifen

Schleifen sind sehr nützlich, um Arrays zu durchlaufen und deren Elemente zu verarbeiten.

### `for`-Schleife zum Durchlaufen eines Arrays:

```c++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};

    for (int i = 0; i < 5; i++) {
        cout << cars[i] << "\n"; // Gibt jedes Auto in einer neuen Zeile aus
    }
    // Mit Indexausgabe:
        for (int i = 0; i < 5; i++) {
        cout << i << " = " << cars[i] << "\n"; // Gibt Index und Auto aus
    }

        int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++) {
        cout << myNumbers[i] << "\n"; // Gibt jede Zahl in einer neuen Zeile aus
    }
    return 0;
}
```

### Bereichsbasierte `for`-Schleife (`for-each`-Schleife):

Seit C++11 gibt es die bereichsbasierte `for`-Schleife, die das Durchlaufen von Arrays und anderen Containern vereinfacht.

```c++
#include <iostream>
#include <string>

using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << i << "\n";
    }

    string cars[5] = {"Volvo", "BMW", "Ford", "Mazda", "Tesla"};
    for (string car : cars) {
        cout << car << "\n";
    }
    return 0;
}
```

-----

## C++ Array-Größe weglassen:

Du kannst die Größe eines Arrays bei der Deklaration weglassen, wenn du es direkt initialisierst. Der Compiler ermittelt die Größe anhand der Anzahl der angegebenen Elemente.

```c++
string cars[] = {"Volvo", "BMW", "Ford"}; // Der Compiler setzt die Größe auf 3
string cars2[3] = {"Volvo", "BMW", "Ford"}; // Explizite Angabe der Größe
```

Beide Deklarationen sind äquivalent. Die explizite Angabe der Größe gilt jedoch als bessere Praxis.

### Elemente bei der Deklaration weglassen (mit vorheriger Größenangabe):

Wenn du die Größe des Arrays angibst, kannst du die Elemente zunächst weglassen und sie später zuweisen:

```c++
string cars[5];
cars[0] = "Volvo";
cars[1] = "BMW";
// ...
```

**Wichtig:** Wenn du die Größe nicht angibst, musst du das Array bei der Deklaration initialisieren. Andernfalls tritt ein Kompilierfehler auf.

```c++
string cars[]; // Fehler: Array size missing
```

## Feste Größe (Arrays) vs. Dynamische Größe (Vektoren)

Arrays in C++ haben eine *feste Größe*. Das bedeutet, dass die Größe nach der Erstellung nicht mehr verändert werden kann. Um Elemente hinzuzufügen oder zu entfernen, musst du einen neuen, größeren oder kleineren Array erstellen und die Daten kopieren.

**Vektoren** (`std::vector` aus der `<vector>`-Bibliothek) bieten *dynamische Größe*. Sie können nach Bedarf wachsen und schrumpfen.

```c++
#include <vector>
#include <iostream>

using namespace std;

int main() {
    vector<string> cars = {"Volvo", "BMW", "Ford"};
    cars.push_back("Tesla"); // Fügt "Tesla" hinzu
    cout << cars.size(); // Gibt 4 aus
    return 0;
}
```

-----

## C++ Array Size (Größe eines Arrays ermitteln)

`sizeof()` gibt die Größe in *Bytes* zurück. Um die Anzahl der Elemente zu erhalten, musst du die Gesamtgröße durch die Größe eines einzelnen Elements teilen.

```c++
#include <iostream>

using namespace std;

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    cout << sizeof(myNumbers);           // Gibt 20 (5 Elemente * 4 Bytes/int) aus
    cout << sizeof(myNumbers[0]);        // Gibt 4 (Größe eines int) aus
    int arrayLength = sizeof(myNumbers) / sizeof(myNumbers[0]);
    cout << arrayLength;               // Gibt 5 (Anzahl der Elemente) aus

    //Schleife mit sizeof()
    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        cout << myNumbers[i] << "\n";
    }
    return 0;
}
```

Die bereichsbasierte `for`-Schleife ist in diesem Fall jedoch die sauberste und sicherste Lösung.

-----

## C++ Mehrdimensionale Arrays

Ein mehrdimensionales Array ist ein Array von Arrays.

### Deklaration:

```c++
Datentyp Arrayname[Größe1][Größe2]...[GrößeN];
```

**Beispiel (2D-Array):**

```c++
string letters[2][4]; // 2 Zeilen, 4 Spalten
```

### Initialisierung:

```c++
string letters[2][4] = {
    {"A", "B", "C", "D"},
    {"E", "F", "G", "H"}
};
```

### Zugriff auf Elemente:

```c++
cout << letters[0][2]; // Gibt "C" aus
```

### Schleifen durch mehrdimensionale Arrays:

Du benötigst verschachtelte Schleifen.

```c++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string letters[2][4] = {
        {"A", "B", "C", "D"},
        {"E", "F", "G", "H"}
    };

    for (int i = 0; i < 2; i++) {       // Äußere Schleife (Zeilen)
        for (int j = 0; j < 4; j++) {   // Innere Schleife (Spalten)
            cout << letters[i][j] << "\n";
        }
    }

    //Beispiel 3D-Array:
    string letters3D[2][2][2] = {
        {
            {"A", "B"},
            {"C", "D"}
        },
        {
            {"E", "F"},
            {"G", "H"}
        }
    };
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << letters3D[i][j][k] << "\n";
            }
        }
    }
    return 0;
}
```

### Anwendung von mehrdimensionalen Arrays (Beispiel Battleship):

Das Battleship-Beispiel im Originaltext ist ein gutes Beispiel für die Verwendung mehr

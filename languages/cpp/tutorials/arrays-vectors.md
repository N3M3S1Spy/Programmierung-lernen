# Einführung in Arrays und Vektoren in C++

### Erklärung der Struktur:

Dieses Tutorial gibt einen umfassenden Überblick über Arrays und Vektoren und ist eine gute Grundlage für das Arbeiten mit Listen von Daten in C++.
1. **Was sind Arrays?**: Einführung in die grundlegenden Eigenschaften von Arrays in C++.
2. **Deklaration und Initialisierung von Arrays**: Erklärung, wie Arrays deklariert und initialisiert werden.
3. **Zugriff auf Array-Elemente**: Wie man auf die Elemente eines Arrays zugreift.
4. **Arrays in Schleifen verwenden**: Verwendung von Arrays in Schleifen zur Verarbeitung mehrerer Elemente.
5. **Was sind Vektoren?**: Einführung in die Flexibilität und Dynamik von Vektoren.
6. **Deklaration und Initialisierung von Vektoren**: Wie man Vektoren erstellt und initialisiert.
7. **Hinzufügen von Elementen zu einem Vektor**: Erklärung, wie man Vektoren dynamisch erweitert.
8. **Zugriff auf Vektor-Elemente**: Unterschied zwischen Arrays und Vektoren bei der Nutzung des Indexes.
9. **Größe eines Vektors**: Wie man die Größe eines Vektors abruft.
10. **Vektoren in Schleifen verwenden**: Beispiel, wie man Vektoren mit Schleifen verarbeitet.
11. **Vergleich zwischen Arrays und Vektoren**: Ein klarer Vergleich der beiden Datentypen.
12. **Übung**: Eine praktische Übung, um das Gelernte anzuwenden.

Arrays und Vektoren sind wichtige Datenstrukturen in C++, mit denen du eine Sammlung von Werten speichern und darauf zugreifen kannst. Während Arrays eine feste Größe haben, bieten Vektoren mehr Flexibilität, da sie dynamisch wachsen können. In diesem Tutorial werden wir lernen, wie man Arrays und Vektoren verwendet, ihre Unterschiede und die Vor- und Nachteile jeder Methode.

## Was sind Arrays?

Ein **Array** ist eine Sammlung von gleichartigen Elementen (z. B. alle vom gleichen Datentyp), die im Speicher in aufeinanderfolgender Reihenfolge gespeichert sind. Arrays haben eine feste Größe, die zur Kompilierzeit festgelegt wird und nicht zur Laufzeit geändert werden kann.

### Deklaration und Initialisierung eines Arrays

Ein Array wird in C++ durch die Angabe der gewünschten Größe und des Datentyps deklariert.

```cpp
int zahlen[5];  // Array mit 5 Ganzzahlen
```

Dieses Array kann fünf `int`-Werte speichern, wobei jeder Wert über einen Index (0 bis 4) aufgerufen werden kann.

#### Initialisierung eines Arrays:

Du kannst ein Array mit Werten beim Deklarieren initialisieren.

```cpp
int zahlen[5] = {1, 2, 3, 4, 5};  // Array mit Werten initialisieren
```

Wenn du weniger Werte als die Array-Größe angibst, werden die nicht angegebenen Werte auf `0` gesetzt.

```cpp
int zahlen[5] = {1, 2};  // Array mit Werten, die nicht angegebenen werden auf 0 gesetzt
```

#### Zugriff auf Array-Elemente:

Du greifst auf die Elemente eines Arrays über den Index zu. Der Index beginnt bei `0` und geht bis `n-1`, wobei `n` die Größe des Arrays ist.

```cpp
cout << zahlen[0];  // Gibt den ersten Wert des Arrays aus (1)
cout << zahlen[4];  // Gibt den letzten Wert des Arrays aus (5)
```

### Arrays in Schleifen verwenden

Arrays sind oft nützlich, wenn du mit vielen Werten arbeiten musst, die du in einer Schleife verarbeiten möchtest.

```cpp
int zahlen[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; i++) {
    cout << zahlen[i] << " ";
}
```

In diesem Beispiel wird jedes Element des Arrays `zahlen` in einer Schleife ausgegeben.

## Was sind Vektoren?

Ein **Vektor** ist ein Container in der C++ Standardbibliothek, der ähnliche Funktionen wie ein Array hat, aber dynamisch in der Größe wachsen kann. Vektoren bieten mehr Flexibilität als Arrays, da sie zur Laufzeit wachsen und schrumpfen können.

### Deklaration und Initialisierung eines Vektors

Vektoren werden aus der Standardbibliothek `<vector>` genutzt. Du musst einen Vektor deklarieren, indem du den Datentyp angibst.

```cpp
#include <vector>
using namespace std;

vector<int> zahlen;  // Vektor, der Ganzzahlen speichert
```

#### Initialisierung eines Vektors:

Du kannst einen Vektor beim Erstellen mit Werten initialisieren.

```cpp
vector<int> zahlen = {1, 2, 3, 4, 5};
```

### Hinzufügen von Elementen zu einem Vektor

Im Gegensatz zu Arrays kannst du Vektoren zur Laufzeit ändern. Du kannst Elemente mit der Methode `push_back()` zum Vektor hinzufügen.

```cpp
zahlen.push_back(6);  // Fügt 6 zum Ende des Vektors hinzu
```

### Zugriff auf Vektor-Elemente

Du greifst auf Vektorelemente wie auf Arrays zu, allerdings bietet der Vektor auch eine Methode namens `at()`, die eine Grenze für den Index überprüft.

```cpp
cout << zahlen[0];   // Gibt das erste Element aus (1)
cout << zahlen.at(4); // Gibt das fünfte Element aus (5)
```

Die Methode `at()` verhindert, dass du mit einem ungültigen Index arbeitest und gibt im Falle eines Fehlers eine Ausnahme aus.

### Größe eines Vektors

Die Größe eines Vektors kannst du mit der Methode `size()` abrufen. Diese Methode gibt die Anzahl der Elemente im Vektor zurück.

```cpp
cout << zahlen.size();  // Gibt die Anzahl der Elemente im Vektor aus
```

### Vektoren in Schleifen verwenden

Wie bei Arrays kannst du Vektoren in Schleifen verwenden, um ihre Elemente zu verarbeiten.

```cpp
vector<int> zahlen = {1, 2, 3, 4, 5};
for (int i = 0; i < zahlen.size(); i++) {
    cout << zahlen[i] << " ";
}
```

Oder du kannst einen Bereich von Vektor-Elementen mit einer Range-basierten Schleife durchlaufen:

```cpp
for (int zahl : zahlen) {
    cout << zahl << " ";
}
```

## Vergleich zwischen Arrays und Vektoren

| Merkmal               | Array                               | Vektor                                  |
|-----------------------|-------------------------------------|-----------------------------------------|
| Größe                 | Fest, zur Kompilierzeit festgelegt  | Dynamisch, kann zur Laufzeit wachsen    |
| Initialisierung       | Muss beim Deklarieren festgelegt werden | Kann während der Programmausführung geändert werden |
| Zugriff auf Elemente  | Direkt über Index                  | Direkt über Index oder `at()`          |
| Flexibilität          | Wenig flexibel, feste Größe        | Sehr flexibel, wächst dynamisch        |

## Vorteile von Arrays:
- Schnell in Bezug auf Speicherzugriff und Effizienz.
- Weniger Overhead, wenn die Größe des Arrays bekannt und konstant bleibt.

## Vorteile von Vektoren:
- Sehr flexibel und dynamisch.
- Einfach zu erweitern und Elemente hinzuzufügen.
- Automatische Speicherverwaltung.

## Zusammenfassung:
- **Arrays** sind eine einfache und schnelle Möglichkeit, mehrere Werte zu speichern, wenn die Größe des Containers zur Kompilierzeit festgelegt ist.
- **Vektoren** bieten mehr Flexibilität, da sie zur Laufzeit wachsen können und einfacher zu handhaben sind, wenn du eine variable Anzahl von Werten speichern möchtest.

## Übung:
Erstelle ein Programm, das:
1. Ein Array mit 5 Zahlen initialisiert und diese ausgibt.
2. Einen Vektor mit 3 Zahlen erstellt, der Vektor wird um zwei weitere Zahlen erweitert und anschließend ausgegeben.
3. Beide Datentypen in einer Schleife ausgibt.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Array
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Vektor
    vector<int> vec = {10, 20, 30};
    vec.push_back(40);
    vec.push_back(50);
    cout << "Vektor: ";
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;

    return 0;
}
```

Dieses Programm zeigt, wie man sowohl mit Arrays als auch mit Vektoren in C++ arbeiten kann.

Viel Spaß beim Üben!

# STL (Standard Template Library) in C++

Die **Standard Template Library (STL)** ist eine leistungsstarke Bibliothek in C++, die eine Sammlung von generischen Klassen und Funktionen für gängige Datenstrukturen und Algorithmen bietet. Sie enthält vordefinierte Klassen für Container, Iteratoren, Algorithmen und Funktionsobjekte.

In diesem Tutorial werden wir uns mit den verschiedenen Bestandteilen der STL beschäftigen und wie man sie in C++ verwendet.

## 1. Was ist die STL?

Die STL stellt vordefinierte Templates für viele grundlegende Datenstrukturen zur Verfügung, die in den meisten Programmen benötigt werden. Diese Datenstrukturen umfassen:

- **Container**: Vektoren, Listen, Maps, Sets, Stacks, Queues, etc.
- **Iteratoren**: Mechanismen, um über Container zu iterieren.
- **Algorithmen**: Eine Sammlung von Standardalgorithmen wie Sortieren, Suchen und Modifizieren von Elementen.
- **Funktionsobjekte**: Objekte, die wie Funktionen verwendet werden können.

## 2. Container in der STL

Container sind Datenstrukturen, die verwendet werden, um Objekte zu speichern. Es gibt verschiedene Arten von Containern in der STL, die je nach Bedarf verwendet werden können:

### 2.1. `vector`

Ein `vector` ist ein dynamisches Array, das seine Größe zur Laufzeit anpassen kann. Es ist der am häufigsten verwendete Container in C++.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v;  // Ein Vector von Ganzzahlen

    // Elemente zum Vector hinzufügen
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    // Iteration über den Vector
    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";  // Gibt 10 20 30 aus
    }

    return 0;
}
```

#### Erklärung:
- Der `vector` wächst dynamisch, wenn neue Elemente mit `push_back()` hinzugefügt werden.
- Wir können mit der `size()`-Methode die Anzahl der Elemente im Vector abrufen.
- Der Zugriff auf Elemente erfolgt über den Index, ähnlich wie bei einem normalen Array.

### 2.2. `list`

Eine `list` ist eine doppelt verkettete Liste. Sie ermöglicht das Hinzufügen und Entfernen von Elementen an beliebiger Stelle in der Liste ohne eine komplette Neuordnung der anderen Elemente.

```cpp
#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l;  // Eine Liste von Ganzzahlen

    // Elemente zur Liste hinzufügen
    l.push_back(10);
    l.push_back(20);
    l.push_back(30);

    // Iteration über die Liste
    for(int val : l) {
        cout << val << " ";  // Gibt 10 20 30 aus
    }

    return 0;
}
```

#### Erklärung:
- `list` eignet sich gut für häufige Einfügungen und Löschungen von Elementen an beliebigen Stellen.
- Anders als `vector` hat `list` keine feste Größe und ist langsamer bei der Zufallsindizierung, aber schneller beim Einfügen und Löschen von Elementen.

### 2.3. `map` und `unordered_map`

Ein `map` ist ein Container, der Schlüssel-Wert-Paare speichert. Die Elemente sind nach dem Schlüssel in einer sortierten Reihenfolge angeordnet. `unordered_map` hingegen speichert die Paare ohne bestimmte Reihenfolge.

```cpp
#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;

    // Elemente zum Map hinzufügen
    m["Apfel"] = 5;
    m["Banane"] = 10;
    m["Orange"] = 7;

    // Iteration über das Map
    for(const auto& pair : m) {
        cout << pair.first << " : " << pair.second << endl;
    }

    return 0;
}
```

#### Erklärung:
- In einem `map` sind die Schlüssel eindeutig und werden in aufsteigender Reihenfolge gespeichert.
- Die `unordered_map` speichert Paare ohne bestimmte Reihenfolge, was schnelleren Zugriff auf die Elemente ermöglicht.

## 3. Iteratoren in der STL

Iteratoren sind Objekte, die verwendet werden, um durch die Elemente eines Containers zu iterieren. Sie ähneln Zeigern, können jedoch für eine Vielzahl von Container-Typen verwendet werden.

### Beispiel mit Iteratoren:

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Iterator initialisieren
    vector<int>::iterator it;

    // Iteration über den Vector mit Iterator
    for(it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";  // Gibt 10 20 30 40 aus
    }

    return 0;
}
```

#### Erklärung:
- `begin()` gibt einen Iterator auf das erste Element des Containers zurück.
- `end()` gibt einen Iterator, der auf das Element nach dem letzten Element verweist.
- Mit `++it` wird der Iterator auf das nächste Element verschoben, und `*it` gibt das aktuelle Element des Iterators zurück.

## 4. Algorithmen in der STL

Die STL bietet eine Vielzahl von vordefinierten Algorithmen, die auf Container angewendet werden können. Zu den bekanntesten gehören:

- `sort()`: Sortiert einen Container.
- `find()`: Sucht nach einem bestimmten Element in einem Container.
- `reverse()`: Dreht die Reihenfolge der Elemente um.

### Beispiel:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>  // Für die Algorithmen
using namespace std;

int main() {
    vector<int> v = {10, 30, 20, 40, 50};

    // Sortiere den Vector
    sort(v.begin(), v.end());

    // Ausgabe des sortierten Vectors
    for(int val : v) {
        cout << val << " ";  // Gibt 10 20 30 40 50 aus
    }

    return 0;
}
```

#### Erklärung:
- Die Funktion `sort()` sortiert den `vector` in aufsteigender Reihenfolge.
- Algorithmen in der STL wie `sort()`, `find()` oder `reverse()` können mit jedem Container verwendet werden, der Iteratoren unterstützt.

## 5. Funktionsobjekte in der STL

Funktionsobjekte sind Objekte, die wie Funktionen aufgerufen werden können. Sie können verwendet werden, um benutzerdefinierte Operationen in Algorithmen oder Containern zu definieren.

### Beispiel:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Addieren {
public:
    int operator()(int a, int b) {
        return a + b;
    }
};

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Funktionsobjekt verwenden
    Addieren add;
    cout << add(2, 3) << endl;  // Gibt 5 aus

    return 0;
}
```

#### Erklärung:
- Die Klasse `Addieren` definiert einen Funktionsaufruf-Operator (`operator()`), der zwei Zahlen addiert.
- Funktionsobjekte können in STL-Algorithmen verwendet werden, um benutzerdefinierte Operationen durchzuführen.

## 6. Zusammenfassung

Die STL ist eine unverzichtbare Sammlung von vordefinierten Templates in C++, die uns hilft, gängige Datenstrukturen und Algorithmen effizient zu verwenden. Sie ermöglicht es uns, schneller und sicherer zu programmieren, indem wir uns auf gut getestete Implementierungen verlassen können. 

Die wichtigsten Komponenten der STL sind:
- **Container** (z.B. `vector`, `list`, `map`),
- **Iteratoren**, um durch die Container zu navigieren,
- **Algorithmen**, die auf die Container angewendet werden können,
- **Funktionsobjekte**, die benutzerdefinierte Operationen ermöglichen.

## 7. Übung

1. Erstelle ein Programm, das einen `vector` von Zahlen sortiert und dann den höchsten Wert findet.
2. Implementiere ein benutzerdefiniertes Funktionsobjekt und wende es auf einen `vector` an, um Elemente zu filtern, die eine bestimmte Bedingung erfüllen (z. B. alle Zahlen größer als 10).

Viel Spaß beim Üben!

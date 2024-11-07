# Dynamische Speicherverwaltung in C++

### Erklärung der Struktur:
1. **Was ist dynamische Speicherverwaltung?**: Einführung in die Technik der dynamischen Speicherzuweisung.
2. **Speicherzuweisung mit `new`**: Verwendung von `new` zur Zuweisung von Speicher.
3. **Speicherfreigabe mit `delete`**: Erklärt, wie Speicher mit `delete` und `delete[]` freigegeben wird.
4. **Gefährliche Fehler und ihre Vermeidung**: Häufige Fehler wie doppelte Freigabe oder Speicherlecks und wie man sie vermeidet.
5. **Smart Pointers**: Verwendung von Smart Pointers zur sicheren Speicherverwaltung.
6. **Zusammenfassung**: Überblick über alle Themen.
7. **Übung**: Aufgaben zur Vertiefung des Themas.

In C++ ist die dynamische Speicherverwaltung eine mächtige Technik, die es ermöglicht, während der Laufzeit des Programms Speicherplatz zu reservieren und freizugeben. Sie spielt eine wichtige Rolle, wenn du mit variablen Datenmengen oder sehr großen Datenmengen arbeitest. In diesem Tutorial lernst du, wie du dynamischen Speicher mit `new` und `delete` verwaltest und worauf du dabei achten musst.

## 1. Was ist dynamische Speicherverwaltung?

Im Gegensatz zur statischen Speicherverwaltung, bei der der Speicherplatz zur Kompilierungszeit festgelegt wird, ermöglicht die dynamische Speicherverwaltung, dass der Speicher zur Laufzeit des Programms nach Bedarf zugewiesen und wieder freigegeben wird. Dies ist besonders nützlich, wenn du nicht weißt, wie viele Daten du im Voraus speichern musst.

### Vorteile der dynamischen Speicherverwaltung:
- **Flexibilität**: Der Speicher wird erst bei Bedarf zugewiesen.
- **Effiziente Ressourcennutzung**: Der Speicher kann so lange genutzt werden, wie er gebraucht wird, und danach wieder freigegeben werden.
- **Komplexe Datenstrukturen**: Erforderlich für komplexe Datenstrukturen wie verkettete Listen, Bäume und Graphen.

## 2. Speicherzuweisung mit `new`

In C++ verwendest du das Schlüsselwort `new`, um Speicher für ein einzelnes Objekt oder ein Array von Objekten dynamisch zu reservieren.

### Beispiel für die Zuweisung von Speicher für ein einzelnes Objekt:

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // Zuweisung von Speicher für eine einzelne Ganzzahl

    *ptr = 42;  // Wert zuweisen

    cout << "Der Wert ist: " << *ptr << endl;

    delete ptr;  // Speicher freigeben

    return 0;
}
```

#### Erklärung:
- Mit `new int` wird Speicher für eine einzelne Ganzzahl zugewiesen, und `ptr` zeigt auf diesen Speicher. Wir können auf den Speicher über den Zeiger `ptr` zugreifen und ihm einen Wert zuweisen. Am Ende wird der Speicher mit `delete` wieder freigegeben.

### Beispiel für die Zuweisung von Speicher für ein Array:

```cpp
#include <iostream>
using namespace std;

int main() {
    int* arr = new int[5];  // Zuweisung von Speicher für ein Array mit 5 Ganzzahlen

    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;  // Werte zuweisen
    }

    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << " ist: " << arr[i] << endl;  // Array ausgeben
    }

    delete[] arr;  // Speicher für das Array freigeben

    return 0;
}
```

#### Erklärung:
- Hier wird Speicher für ein Array von 5 Ganzzahlen zugewiesen. Nach der Nutzung wird der Speicher mit `delete[]` freigegeben, da es sich um ein Array handelt.

## 3. Speicherfreigabe mit `delete`

Es ist wichtig, dass der Speicher, der mit `new` zugewiesen wurde, am Ende wieder freigegeben wird, um Speicherlecks zu vermeiden. Die Freigabe des Speichers erfolgt mit `delete` für einzelne Objekte und `delete[]` für Arrays.

### Beispiel für `delete`:

```cpp
delete ptr;  // Freigabe des Speichers für ein einzelnes Objekt
```

### Beispiel für `delete[]`:

```cpp
delete[] arr;  // Freigabe des Speichers für ein Array
```

#### Erklärung:
- Wenn du `delete` aufrufst, wird der Speicher für das einzelne Objekt freigegeben. Bei Arrays ist `delete[]` erforderlich, um den gesamten Speicherbereich korrekt freizugeben.

## 4. Gefährliche Fehler und ihre Vermeidung

### 4.1. **Doppelte Speicherfreigabe (Double Free)**

Wenn du den gleichen Speicherbereich zweimal freigibst, führt dies zu undefiniertem Verhalten, was schwerwiegende Fehler verursachen kann.

#### Beispiel:

```cpp
int* ptr = new int;
delete ptr;
delete ptr;  // Falsche Verwendung: der Speicher wurde bereits freigegeben
```

### 4.2. **Zugriff auf bereits freigegebenen Speicher (Dangling Pointer)**

Ein "hängender Zeiger" tritt auf, wenn du auf einen Zeiger zugreifst, dessen Speicher bereits mit `delete` freigegeben wurde.

#### Beispiel:

```cpp
int* ptr = new int;
delete ptr;
cout << *ptr << endl;  // Falsche Verwendung: Zugriff auf einen hängenden Zeiger
```

### 4.3. **Vergessen, den Speicher freizugeben (Memory Leak)**

Wenn du den dynamisch zugewiesenen Speicher nicht freigibst, bleibt dieser Speicher belegt, selbst nachdem das Programm beendet ist. Dies führt zu einem "Memory Leak".

#### Beispiel:

```cpp
int* ptr = new int;
// Keine delete-Anweisung, wodurch ein Memory Leak entsteht
```

### Tipps zur Vermeidung von Fehlern:
- Achte darauf, dass jeder `new`-Aufruf auch mit einem `delete`-Aufruf versehen wird.
- Verwende Zeiger mit Bedacht und vermeide, nach der Freigabe auf sie zuzugreifen.
- In modernen C++-Versionen (ab C++11) empfiehlt es sich, **Smart Pointers** wie `std::unique_ptr` oder `std::shared_ptr` zu verwenden, um die manuelle Speicherfreigabe zu vermeiden.

## 5. Smart Pointers (ab C++11)

Smart Pointers sind Zeiger, die automatisch den Speicher freigeben, wenn sie nicht mehr benötigt werden. Dadurch werden viele Probleme der manuellen Speicherverwaltung, wie etwa Speicherlecks oder doppelte Speicherfreigabe, vermieden.

- **`std::unique_ptr`**: Ein Zeiger, der den Besitz des Objekts exklusiv verwaltet.
- **`std::shared_ptr`**: Ein Zeiger, der den Besitz des Objekts teilt.
- **`std::weak_ptr`**: Ein Zeiger, der keine Referenzzählung beeinflusst und oft in Kombination mit `shared_ptr` verwendet wird.

### Beispiel mit `std::unique_ptr`:

```cpp
#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Erstellen eines Smart Pointers
    unique_ptr<int> ptr = make_unique<int>(42);

    cout << "Der Wert ist: " << *ptr << endl;
    // Kein need for delete, da der Smart Pointer automatisch den Speicher freigibt
    return 0;
}
```

## 6. Zusammenfassung

In diesem Tutorial haben wir uns mit der dynamischen Speicherverwaltung in C++ beschäftigt:

- **Speicherzuweisung**: Mit `new` kannst du Speicher für einzelne Objekte oder Arrays zuweisen.
- **Speicherfreigabe**: Mit `delete` und `delete[]` kannst du den zugewiesenen Speicher wieder freigeben.
- **Gefährliche Fehler**: Achte darauf, dass du Speicher nur einmal freigibst und nicht auf bereits freigegebenen Speicher zugreifst.
- **Smart Pointers**: Nutze Smart Pointers, um die manuelle Speicherverwaltung zu vereinfachen und Fehler zu vermeiden.

## 7. Übung

1. Erstelle ein Programm, das mit dynamisch zugewiesenem Speicher eine einfache verkettete Liste erstellt.
2. Experimentiere mit Smart Pointers, indem du ein einfaches Beispiel mit `std::unique_ptr` und `std::shared_ptr` implementierst.

Viel Erfolg beim Üben!

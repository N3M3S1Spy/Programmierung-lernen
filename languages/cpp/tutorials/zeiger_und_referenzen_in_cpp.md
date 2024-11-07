# Zeiger in C++: Grundlagen und Anwendung

### Erklärung der Struktur:
1. **Was ist ein Zeiger?**: Einführung in Zeiger und deren Verwendung.
2. **Zeiger und Referenzen**: Unterschiede zwischen Zeigern und Referenzen.
3. **Dereferenzierung eines Zeigers**: Wie man den Wert eines Zeigers über Dereferenzierung erhält.
4. **Zeigerarithmetik**: Wie man Zeiger zur Navigation durch Arrays verwendet.
5. **Zeiger auf Zeiger**: Verwendung von Zeigern auf Zeiger, um auf Zeiger zuzugreifen.
6. **Dynamische Speicherzuweisung**: Verwendung von `new` und `delete` zur dynamischen Speicherverwaltung.
7. **Zusammenfassung**: Überblick über die behandelten Themen.
8. **Übung**: Aufgaben zur Festigung des Gelernten.

In C++ sind **Zeiger** (engl. "Pointers") Variablen, die die Speicheradresse einer anderen Variablen speichern. Zeiger sind eines der mächtigsten und zugleich herausforderndsten Konzepte in C++. Sie ermöglichen eine effiziente Speicherverwaltung und sind in vielen fortgeschrittenen Programmierszenarien unverzichtbar.

In diesem Tutorial werden wir uns mit der Deklaration, Verwendung und den grundlegenden Konzepten von Zeigern in C++ befassen.

## 1. Was ist ein Zeiger?

Ein **Zeiger** ist eine Variable, die die Adresse einer anderen Variable speichert. Anstatt auf den Wert einer Variablen direkt zuzugreifen, kannst du mit einem Zeiger auf die Adresse der Variablen zugreifen und den Wert indirekt ändern oder darauf zugreifen.

### Deklaration eines Zeigers:

Die Deklaration eines Zeigers erfolgt durch Hinzufügen eines `*` vor dem Variablennamen. Dieser Stern zeigt an, dass die Variable ein Zeiger auf einen bestimmten Typ ist.

```cpp
int* ptr;  // Zeiger auf einen Integer
```

#### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;      // Eine normale Variable
    int* ptr = &zahl;   // Zeiger, der die Adresse von zahl speichert

    cout << "Adresse von zahl: " << &zahl << endl;   // Adresse von zahl
    cout << "Wert von ptr: " << ptr << endl;         // Adresse, die ptr speichert
    cout << "Wert, auf den ptr zeigt: " << *ptr << endl; // Wert an der Adresse, auf die ptr zeigt

    return 0;
}
```

#### Erklärung:
- Der Operator `&` gibt die Adresse einer Variablen zurück.
- Der Operator `*` (Dereferenzierung) gibt den Wert an der Adresse zurück, auf die der Zeiger zeigt.

## 2. Zeiger und Referenzen

Es gibt einen wichtigen Unterschied zwischen **Zeigern** und **Referenzen** in C++:

- **Zeiger**: Speichern die Adresse einer Variablen.
- **Referenzen**: Sind Aliasnamen für bestehende Variablen und erfordern keinen expliziten Dereferenzierungsoperator.

### Beispiel für Referenzen:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;
    int& ref = zahl;   // Referenz auf zahl

    cout << "Wert von zahl: " << zahl << endl;
    cout << "Wert der Referenz: " << ref << endl;

    ref = 20;  // Ändert die Zahl über die Referenz
    cout << "Neuer Wert von zahl: " << zahl << endl;

    return 0;
}
```

#### Erklärung:
- **Referenzen** ermöglichen es dir, auf eine Variable direkt zuzugreifen, ohne explizit ihre Adresse zu verwenden.

## 3. Dereferenzierung eines Zeigers

Die **Dereferenzierung** eines Zeigers bedeutet, auf den Wert an der Adresse zuzugreifen, auf die der Zeiger zeigt. Dies geschieht durch den `*` Operator.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;
    int* ptr = &zahl;   // Zeiger auf zahl

    // Dereferenzierung
    cout << "Wert von ptr: " << *ptr << endl;   // Gibt den Wert von zahl aus (10)

    *ptr = 20;  // Wert von zahl über den Zeiger ändern
    cout << "Neuer Wert von zahl: " << zahl << endl;  // Gibt 20 aus

    return 0;
}
```

#### Erklärung:
- Der Zeiger `ptr` zeigt auf die Adresse von `zahl`. Mit der Dereferenzierung können wir den Wert von `zahl` über den Zeiger ändern.

## 4. Zeigerarithmetik

In C++ kannst du auch mit Zeigern rechnen. Zeigerarithmetik bezieht sich auf das Hinzufügen oder Subtrahieren von Ganzzahlen zu Zeigern. Dies ist besonders nützlich beim Arbeiten mit Arrays.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int* ptr = arr;  // Zeiger auf das erste Element des Arrays

    cout << "Erstes Element: " << *ptr << endl;  // Gibt 10 aus
    ptr++;  // Zeiger auf das nächste Element verschieben
    cout << "Zweites Element: " << *ptr << endl;  // Gibt 20 aus

    return 0;
}
```

#### Erklärung:
- Zeigerarithmetik wird verwendet, um durch ein Array zu navigieren. Das Hinzufügen von `1` zu einem Zeiger verschiebt ihn auf das nächste Element im Array (auf Basis der Größe des Datentyps).

## 5. Zeiger auf Zeiger

Ein **Zeiger auf einen Zeiger** ist ein Zeiger, der die Adresse eines anderen Zeigers speichert. Dies ist besonders nützlich, wenn du mit Arrays von Zeigern oder dynamisch allokiertem Speicher arbeitest.

### Beispiel für Zeiger auf Zeiger:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;
    int* ptr1 = &zahl;        // Zeiger auf int
    int** ptr2 = &ptr1;       // Zeiger auf einen Zeiger

    cout << "Wert von zahl: " << zahl << endl;
    cout << "Wert von ptr1: " << *ptr1 << endl;  // Dereferenzierung von ptr1
    cout << "Wert von ptr2: " << **ptr2 << endl; // Dereferenzierung von ptr2 (doppelt)

    return 0;
}
```

#### Erklärung:
- Ein **Zeiger auf Zeiger** wird durch Hinzufügen eines zweiten `*` vor der Variablendeklaration erstellt. Durch doppelte Dereferenzierung können wir auf den Wert zugreifen, auf den der ursprüngliche Zeiger zeigt.

## 6. Dynamische Speicherzuweisung

C++ erlaubt die dynamische Zuweisung von Speicher während der Programmausführung mit den Operatoren `new` und `delete`.

### Beispiel für `new` und `delete`:

```cpp
#include <iostream>
using namespace std;

int main() {
    int* ptr = new int;  // Dynamische Speicherzuweisung für einen int-Wert
    *ptr = 10;           // Wert zuweisen

    cout << "Dynamisch zugewiesener Wert: " << *ptr << endl;

    delete ptr;  // Speicher freigeben

    return 0;
}
```

#### Erklärung:
- Mit `new` wird dynamisch Speicher auf dem Heap zugewiesen. Der Speicher muss nach der Verwendung mit `delete` wieder freigegeben werden, um Speicherlecks zu vermeiden.

## 7. Zusammenfassung

In diesem Tutorial haben wir die grundlegenden Konzepte von **Zeigern in C++** behandelt:

- Zeiger speichern die Adresse einer Variablen und ermöglichen den indirekten Zugriff auf deren Wert.
- Zeiger und Referenzen unterscheiden sich darin, wie sie auf Variablen zugreifen.
- Zeigerarithmetik ermöglicht es, durch Arrays und andere Datenstrukturen zu navigieren.
- Zeiger auf Zeiger und dynamische Speicherzuweisung bieten erweiterte Möglichkeiten für die Speicherverwaltung.

## 8. Übung

1. Schreibe ein Programm, das mit einem Zeiger auf ein Array zugreift und alle Elemente des Arrays ausgibt.
2. Erstelle ein Programm, das mit einem Zeiger auf einen Zeiger arbeitet und die Adresse eines anderen Zeigers speichert.
3. Verwende `new` und `delete`, um dynamischen Speicher für ein Array zuzuweisen und den Speicher korrekt wieder freizugeben.

Viel Spaß beim Üben!

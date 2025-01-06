## C++-Listen (`std::list`)

Eine Liste in C++ (genauer gesagt `std::list`) ähnelt insofern einem Vektor, als sie mehrere Elemente desselben Typs speichern und ihre Größe dynamisch anpassen kann.

Es gibt jedoch zwei wesentliche Unterschiede zwischen Listen und Vektoren:

1.  Elemente können sowohl am Anfang als auch am Ende einer Liste hinzugefügt und entfernt werden, während Vektoren im Allgemeinen für das Hinzufügen und Entfernen am Ende optimiert sind.
2.  Im Gegensatz zu Vektoren unterstützen Listen keinen direkten Zugriff über den Index (Random Access). Das bedeutet, dass du nicht direkt zu einem bestimmten Index springen oder auf Elemente über Indexnummern zugreifen kannst.

Um eine Liste zu verwenden, musst du die Headerdatei `<list>` einbinden:

```c++
#include <iostream>
#include <list>
#include <string> // Für das Beispiel mit Strings
using namespace std;
```

## Eine Liste erstellen

Um eine Liste zu erstellen, verwendest du das Schlüsselwort `list` und gibst den **Datentyp** der zu speichernden Werte innerhalb von spitzen Klammern `<>` an, gefolgt vom Namen der Liste: `list<Datentyp> listenName;`.

### Beispiel:

```c++
// Eine Liste namens 'autos' erstellen, die Strings speichert
list<string> autos;

// Eine Liste namens 'zahlen' erstellen, die Integers speichert
list<int> zahlen;
```

Wenn du beim Erstellen der Liste bereits Elemente hinzufügen möchtest, kannst du diese in geschweifte Klammern `{}` und durch Kommas getrennt angeben:

### Beispiel:

```c++
// Eine Liste namens 'autos' erstellen und initialisieren
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Die Listenelemente ausgeben (mit bereichsbasierter for-Schleife)
for (const string& autoName : autos) { // const & für Effizienz
    cout << autoName << "\n";
}
```

> **Hinweis:** Der Datentyp der Liste (im Beispiel `string`) kann nach der Deklaration nicht mehr geändert werden.

## Auf eine Liste zugreifen

Du kannst nicht über Indexnummern auf Listenelemente zugreifen, wie bei Arrays und Vektoren.

Du kannst jedoch mit den Funktionen `.front()` und `.back()` auf das erste bzw. letzte Element zugreifen:

### Beispiel:

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Das erste Element abrufen
cout << autos.front() << "\n"; // Gibt "Volvo" aus

// Das letzte Element abrufen
cout << autos.back() << "\n"; // Gibt "Mazda" aus
```

## Ein Listenelement ändern

Du kannst den Wert des ersten oder letzten Elements mit den Funktionen `.front()` und `.back()` ändern:

### Beispiel:

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Den Wert des ersten Elements ändern
autos.front() = "Opel";

// Den Wert des letzten Elements ändern
autos.back() = "Toyota";

cout << autos.front() << "\n"; // Gibt jetzt "Opel" aus
cout << autos.back() << "\n"; // Gibt jetzt "Toyota" aus
```

## Listenelemente hinzufügen

Um Elemente zu einer Liste hinzuzufügen, kannst du `.push_front()` verwenden, um ein Element am Anfang der Liste einzufügen, und `.push_back()`, um ein Element am Ende hinzuzufügen:

### Beispiel:

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Ein Element am Anfang hinzufügen
autos.push_front("Tesla");

// Ein Element am Ende hinzufügen
autos.push_back("VW");

for (const string& autoName : autos) {
    cout << autoName << "\n";
}
```

## Listenelemente entfernen

Um Elemente aus einer Liste zu entfernen, verwendest du `.pop_front()`, um ein Element vom Anfang der Liste zu entfernen, und `.pop_back()`, um ein Element am Ende zu entfernen:

### Beispiel:

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Das erste Element entfernen
autos.pop_front();

// Das letzte Element entfernen
autos.pop_back();

for (const string& autoName : autos) {
    cout << autoName << "\n";
}
```

## Listengröße

Um herauszufinden, wie viele Elemente eine Liste enthält, verwendest du die Funktion `.size()`:

### Beispiel:

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};
cout << "Anzahl der Autos: " << autos.size() << "\n"; // Gibt "Anzahl der Autos: 4" aus
```

## Überprüfen, ob eine Liste leer ist

Verwende die Funktion `.empty()`, um herauszufinden, ob eine Liste leer ist oder nicht.

Die Funktion `.empty()` gibt `true` (1) zurück, wenn die Liste leer ist, und `false` (0), wenn sie mindestens ein Element enthält:

### Beispiel:

```c++
list<string> autos;
cout << "Ist die Liste leer? " << autos.empty() << "\n"; // Gibt "Ist die Liste leer? 1" aus (true)

list<string> weitereAutos = {"Audi"};
cout << "Ist die Liste leer? " << weitereAutos.empty() << "\n"; // Gibt "Ist die Liste leer? 0" aus (false)
```

## Durch eine Liste iterieren

Du kannst nicht mit einer traditionellen `for`-Schleife in Kombination mit der Funktion `.size()` durch die Listenelemente iterieren, da es nicht möglich ist, auf Elemente in einer Liste über den Index zuzugreifen:

```c++
// FALSCH! Funktioniert nicht bei Listen!
// list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};
// for (int i = 0; i < autos.size(); i++) {
//     cout << autos[i] << "\n";
// }
```

Der einfachste Weg, durch eine Liste zu iterieren, ist die **bereichsbasierte `for`-Schleife** (Range-based for loop):

### Beispiel (bereichsbasiert):

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

for (const string& autoName : autos) { // const & für Effizienz
    cout << autoName << "\n";
}
```

### Beispiel (mit Iteratoren):

Die korrekte und allgemeinere Methode zum Durchlaufen einer Liste ist die Verwendung von **Iteratoren**:

```c++
list<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Explizite Iterator-Deklaration
for (list<string>::iterator it = autos.begin(); it != autos.end(); ++it) {
    cout << *it << "\n"; // *it dereferenziert den Iterator
}

// Mit auto (empfohlen)
for (auto it = autos.begin(); it != autos.end(); ++it) {
    cout << *it << "\n";
}

// const_iterator für konstantes Durchlaufen (verhindert unbeabsichtigte Änderungen)
for (list<string>::const_iterator it = autos.cbegin(); it != autos.cend(); ++it) {
    cout << *it << "\n";
}

// Bereichsbasierte for-Schleife (einfachste und oft beste Option)
for (const auto& autoName : autos) {
    cout << autoName << "\n";
}
```

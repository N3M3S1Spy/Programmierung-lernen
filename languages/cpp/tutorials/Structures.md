## C++ Strukturen (`struct`)

Strukturen (`structs`) in C++ ermöglichen es, mehrere Variablen unterschiedlichen Datentyps unter einem einzigen Namen zusammenzufassen. Dies ist besonders nützlich, um zusammengehörige Daten logisch zu gruppieren und komplexe Datentypen zu erstellen.

### Definition einer Struktur:

```c++
struct Strukturname {
    Datentyp1 Mitglied1;
    Datentyp2 Mitglied2;
    // ...
    DatentypN MitgliedN;
}; // Semikolon am Ende nicht vergessen!
```

**Beispiel:**

```c++
#include <string> // Für std::string

struct Person {
    std::string name;
    int alter;
    std::string adresse;
}; // Semikolon ist wichtig!
```

Dieser Code definiert einen neuen Datentyp namens `Person`, der aus einem Namen (`name`), einem Alter (`alter`) und einer Adresse (`adresse`) besteht.

### Deklaration von Strukturvariablen:

Nachdem eine Struktur definiert wurde, können Variablen dieses Typs deklariert werden:

```c++
Person person1;
Person person2;
```

### Zugriff auf Strukturmitglieder:

Auf die einzelnen Mitglieder einer Struktur wird mit dem Punktoperator (`.`) zugegriffen:

```c++
#include <iostream>
#include <string>

struct Person {
    std::string name;
    int alter;
    std::string adresse;
};

int main() {
    Person person1;
    person1.name = "Max Mustermann";
    person1.alter = 30;
    person1.adresse = "Musterstraße 1";

    std::cout << "Name: " << person1.name << "\n";
    std::cout << "Alter: " << person1.alter << "\n";
    std::cout << "Adresse: " << person1.adresse << "\n";
    return 0;
}
```

**Ausgabe:**

```
Name: Max Mustermann
Alter: 30
Adresse: Musterstraße 1
```

### Initialisierung bei der Deklaration:

Strukturvariablen können auch direkt bei der Deklaration initialisiert werden:

```c++
Person person1 = {"Max Mustermann", 30, "Musterstraße 1"}; // Reihenfolge beachten!
Person person2 {"Erika Müller", 25, "Beispielweg 2"}; // C++11 Initialisierung
```

### Mehrere Strukturvariablen:

Es können mehrere Variablen desselben Strukturtyps gleichzeitig deklariert werden:

```c++
Person person1, person2, person3;
```

### Beispiel mit `car`-Struktur:

```c++
#include <iostream>
#include <string>

struct Car {
    std::string brand;
    std::string model;
    int year;
};

int main() {
    Car myCar1 = {"BMW", "X5", 1999};
    Car myCar2 = {"Ford", "Mustang", 1969};

    std::cout << myCar1.brand << " " << myCar1.model << " (" << myCar1.year << ")\n";
    std::cout << myCar2.brand << " " << myCar2.model << " (" << myCar2.year << ")\n";
    return 0;
}
```

**Ausgabe:**

```
BMW X5 (1999)
Ford Mustang (1969)
```

### Verschachtelte Strukturen:

Eine Struktur kann auch andere Strukturen als Mitglieder enthalten.

```c++
#include <iostream>
#include <string>

struct Engine {
    int horsepower;
    int cylinders;
};

struct Car {
    std::string brand;
    std::string model;
    int year;
    Engine engine; // Verschachtelte Struktur
};

int main() {
    Car myCar;
    myCar.brand = "Porsche";
    myCar.model = "911";
    myCar.year = 2023;
    myCar.engine.horsepower = 450;
    myCar.engine.cylinders = 6;

    std::cout << myCar.brand << " " << myCar.model << " hat "
              << myCar.engine.horsepower << " PS und "
              << myCar.engine.cylinders << " Zylinder.\n";
    return 0;
}
```

**Ausgabe:**

```
Porsche 911 hat 450 PS und 6 Zylinder.
```

Auf die Mitglieder der verschachtelten Struktur wird mit einer verketteten Punktnotation zugegriffen (`myCar.engine.horsepower`).

### Strukturen und Funktionen:

Strukturen können auch an Funktionen übergeben und von Funktionen zurückgegeben werden:

```c++
#include <iostream>
#include <string>

struct Person {
    std::string name;
    int alter;
};

void printPerson(Person p) {
    std::cout << "Name: " << p.name << ", Alter: " << p.alter << "\n";
}

int main() {
    Person person1 = {"Max", 30};
    printPerson(person1);
    return 0;
}
```

### Verwendung von `typedef` (Optional, aber nützlich):

Mit `typedef` kann ein kürzerer Alias für einen Strukturtyp erstellt werden:

```c++
typedef struct Person PersonType; // Nun kann PersonType anstelle von struct Person verwendet werden

// Oder kürzer (häufiger verwendet):
typedef struct {
    std::string name;
    int alter;
} Person;

int main() {
    Person person1 = {"Max", 30}; // Keine Notwendigkeit mehr für struct vor Person
    return 0;
}
```

In modernem C++ wird `using` für Typaliase bevorzugt:

```c++
struct Person {
    std::string name;
    int alter;
};

using PersonType = Person;

int main() {
    PersonType person1 = {"Max", 30};
    return 0;
}
```

Strukturen sind ein grundlegendes Werkzeug in C++ und ermöglichen die Erstellung von gut organisiertem und wiederverwendbarem Code. Sie sind die Grundlage für komplexere Konzepte wie Klassen und objektorientierte Programmierung.

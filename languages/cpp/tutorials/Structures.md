# C++ Strukturen (struct)

## Einführung

Strukturen (auch Structs genannt) sind ein wesentliches Feature in C++, das es ermöglicht, mehrere zusammengehörige Variablen unterschiedlichen Datentyps zu einem einzigen Datentyp zusammenzufassen. Dies dient der besseren Organisation von Daten und der Erstellung komplexerer Datentypen. Im Gegensatz zu Arrays, die nur Elemente desselben Datentyps speichern können, ermöglichen Strukturen die Gruppierung von Daten unterschiedlicher Typen, die logisch zusammengehören. Zum Beispiel kann eine Struktur verwendet werden, um die Informationen über eine Person (Name, Alter, Adresse usw.) zu speichern.

## Definition einer Struktur

Um eine Struktur zu definieren, verwende das Schlüsselwort `struct`, gefolgt vom Namen der Struktur und den einzelnen Mitgliedern (auch Felder genannt) in geschweiften Klammern.

```c++
struct Person {
  std::string name;
  int age;
  std::string address;
};
```

Dieser Code definiert eine Struktur namens `Person` mit den Mitgliedern `name` (vom Typ `std::string`), `age` (vom Typ `int`) und `address` (vom Typ `std::string`).

## Deklaration von Strukturvariablen

Nach der Definition einer Struktur können Variablen dieses Typs deklariert werden:

```c++
Person person1;
Person person2;
```

Hier werden zwei Variablen vom Typ `Person` namens `person1` und `person2` deklariert.

## Zugriff auf Strukturmitglieder

Auf die Mitglieder einer Struktur wird mit dem Punktoperator (`.`) zugegriffen:

```c++
#include <iostream>
#include <string>

struct Person {
  std::string name;
  int age;
  std::string address;
};

int main() {
  Person person1;
  person1.name = "Max Mustermann";
  person1.age = 30;
  person1.address = "Musterstraße 1";

  std::cout << "Name: " << person1.name << "\n";
  std::cout << "Alter: " << person1.age << "\n";
  std::cout << "Adresse: " << person1.address << "\n";

  return 0;
}
```

Dieses Beispiel zeigt, wie man den Mitgliedern einer Struktur Werte zuweist und wie man diese Werte ausgibt.

## Mehrere Strukturvariablen desselben Typs deklarieren

Es können mehrere Variablen desselben Strukturtyps gleichzeitig deklariert werden:

```c++
Person person1, person2, person3;
```

## Benannte Strukturen und Verwendung im Programm

Benannte Strukturen ermöglichen es, den Code besser zu strukturieren und wiederverwendbarer zu machen. Hier ein ausführliches Beispiel mit der `car`-Struktur:

```c++
#include <iostream>
#include <string>

struct car {
  std::string brand;
  std::string model;
  int year;
};

int main() {
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;

  std::cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  std::cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

  return 0;
}
```

Dieses Beispiel zeigt die Verwendung einer benannten Struktur innerhalb eines `main()`-Programms. Durch die Benennung der Struktur können wir nun jederzeit und überall im Code Variablen vom Typ `car` erstellen. Dies erhöht die Lesbarkeit und Wartbarkeit des Codes erheblich.

## Verschachtelte Strukturen (Optional)

Strukturen können auch ineinander verschachtelt sein. Das bedeutet, dass eine Struktur ein Mitglied sein kann, das selbst wieder eine Struktur ist. Dies ermöglicht die Modellierung komplexerer Datenstrukturen.

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

    std::cout << myCar.brand << " " << myCar.model << " hat " << myCar.engine.horsepower << " PS und " << myCar.engine.cylinders << " Zylinder.\n";

    return 0;
}
```

Dieses Beispiel zeigt, wie man auf die Mitglieder einer verschachtelten Struktur zugreift.

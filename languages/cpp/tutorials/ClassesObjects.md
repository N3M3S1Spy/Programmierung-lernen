## C++ Klassen und Objekte

### C++ Klassen/Objekte

C++ ist eine objektorientierte Programmiersprache.

In C++ ist alles mit Klassen und Objekten sowie deren Attributen und Methoden verbunden. Im realen Leben ist beispielsweise ein Auto ein **Objekt**. Das Auto hat **Attribute**, wie Gewicht und Farbe, und **Methoden**, wie Fahren und Bremsen.

Attribute und Methoden sind im Grunde **Variablen** und **Funktionen**, die zur Klasse gehören. Sie werden oft als "Klassenmember" bezeichnet.

Eine Klasse ist ein benutzerdefinierter Datentyp, den wir in unserem Programm verwenden können. Sie fungiert als Objektkonstruktor oder "Blaupause" für die Erstellung von Objekten.

### Eine Klasse erstellen

Um eine Klasse zu erstellen, verwende das Schlüsselwort `class`:

### Beispiel:

Erstelle eine Klasse namens `MyClass`:

```c++
class MyClass {      // Die Klasse
public:             // Zugriffsspezifizierer
    int myNum;      // Attribut (Integer-Variable)
    std::string myString; // Attribut (String-Variable)
}; // Semikolon am Ende nicht vergessen!
```

> **Erläuterung des Beispiels:**
>
> *   Das Schlüsselwort `class` wird verwendet, um eine Klasse namens `MyClass` zu erstellen.
> *   Das Schlüsselwort `public` ist ein **Zugriffsspezifizierer**, der angibt, dass die Member (Attribute und Methoden) der Klasse von außerhalb der Klasse zugänglich sind. Mehr über Zugriffsspezifizierer später.
> *   Innerhalb der Klasse befinden sich eine Integer-Variable `myNum` und eine String-Variable `myString`. Wenn Variablen innerhalb einer Klasse deklariert werden, nennt man sie **Attribute**.
> *   Die Klassendefinition wird mit einem Semikolon `;` abgeschlossen.

### Ein Objekt erstellen

In C++ wird ein Objekt aus einer Klasse erstellt. Wir haben bereits die Klasse `MyClass` erstellt und können diese nun verwenden, um Objekte zu erstellen.

Um ein Objekt von `MyClass` zu erstellen, gib den Klassennamen gefolgt vom Objektnamen an.

Um auf die Klassenattribute (`myNum` und `myString`) zuzugreifen, verwende die Punktnotation (`.`) auf dem Objekt:

### Beispiel:

Erstelle ein Objekt namens `myObj` und greife auf die Attribute zu:

```c++
#include <iostream>
#include <string>
using namespace std;

class MyClass {      // Die Klasse
public:             // Zugriffsspezifizierer
    int myNum;      // Attribut (Integer-Variable)
    string myString; // Attribut (String-Variable)
};

int main() {
    MyClass myObj; // Erstelle ein Objekt von MyClass

    // Zugriff auf Attribute und Zuweisung von Werten
    myObj.myNum = 15;
    myObj.myString = "Ein Text";

    // Ausgabe der Attributwerte
    cout << myObj.myNum << "\n";
    cout << myObj.myString;
    return 0;
}
```

### Mehrere Objekte

Du kannst mehrere Objekte einer Klasse erstellen:

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

// Erstelle eine Car-Klasse mit einigen Attributen
class Car {
public:
    string brand;
    string model;
    int year;
};

int main() {
    // Erstelle ein Objekt von Car
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    // Erstelle ein weiteres Objekt von Car
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1969;

    // Ausgabe der Attributwerte
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
    return 0;
}
```

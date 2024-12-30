## C++ Konstruktoren

### Konstruktoren

Ein Konstruktor in C++ ist eine **spezielle Methode**, die automatisch aufgerufen wird, wenn ein Objekt einer Klasse erstellt wird.

Um einen Konstruktor zu erstellen, verwendest du denselben Namen wie die Klasse, gefolgt von runden Klammern `()`:

### Beispiel:

```c++
#include <iostream>
using namespace std;

class MyClass {    // Die Klasse
public:           // Zugriffsspezifizierer
    MyClass() {   // Konstruktor
        cout << "Hallo Welt!\n";
    }
};

int main() {
    MyClass myObj; // Erstellt ein Objekt von MyClass (dadurch wird der Konstruktor aufgerufen)
    return 0;
}

// Ausgabe: Hallo Welt!
```

> **Hinweis:** Der Konstruktor hat denselben Namen wie die Klasse, ist immer `public` und hat keinen Rückgabewert (nicht einmal `void`).

### Konstruktorparameter

Konstruktoren können auch Parameter entgegennehmen (genau wie normale Funktionen). Dies ist nützlich, um Attribute mit Startwerten zu initialisieren.

Die folgende Klasse hat die Attribute `marke`, `modell` und `baujahr` sowie einen Konstruktor mit Parametern. Innerhalb des Konstruktors weisen wir den Attributen die Werte der Konstruktorparameter zu (`marke = x` usw.). Wenn wir den Konstruktor aufrufen (indem wir ein Objekt der Klasse erstellen), übergeben wir Parameter an den Konstruktor, wodurch die entsprechenden Attribute mit diesen Werten initialisiert werden:

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

class Auto {      // Die Klasse
public:           // Zugriffsspezifizierer
    string marke;  // Attribut
    string modell; // Attribut
    int baujahr;   // Attribut
    Auto(string x, string y, int z) { // Konstruktor mit Parametern
        marke = x;
        modell = y;
        baujahr = z;
    }
};

int main() {
    // Erstelle Auto-Objekte und rufe den Konstruktor mit verschiedenen Werten auf
    Auto auto1("BMW", "X5", 1999);
    Auto auto2("Ford", "Mustang", 1969);

    // Ausgabe der Werte
    cout << auto1.marke << " " << auto1.modell << " " << auto1.baujahr << "\n";
    cout << auto2.marke << " " << auto2.modell << " " << auto2.baujahr << "\n";
    return 0;
}

// Ausgabe:
// BMW X5 1999
// Ford Mustang 1969
```

Genau wie Funktionen können auch Konstruktoren außerhalb der Klasse definiert werden. Dazu deklarierst du den Konstruktor zunächst innerhalb der Klasse und definierst ihn dann außerhalb der Klasse, indem du den Namen der Klasse, gefolgt vom Bereichsauflösungsoperator `::` und dem Namen des Konstruktors (der mit dem Klassennamen übereinstimmt) angibst:

### Beispiel (Definition außerhalb der Klasse):

```c++
#include <iostream>
#include <string>
using namespace std;

class Auto {      // Die Klasse
public:           // Zugriffsspezifizierer
    string marke;  // Attribut
    string modell; // Attribut
    int baujahr;   // Attribut
    Auto(string x, string y, int z); // Konstruktordeklaration
};

// Konstruktordefinition außerhalb der Klasse
Auto::Auto(string x, string y, int z) {
    marke = x;
    modell = y;
    baujahr = z;
}

int main() {
    // Erstelle Auto-Objekte und rufe den Konstruktor mit verschiedenen Werten auf
    Auto auto1("BMW", "X5", 1999);
    Auto auto2("Ford", "Mustang", 1969);

    // Ausgabe der Werte
    cout << auto1.marke << " " << auto1.modell << " " << auto1.baujahr << "\n";
    cout << auto2.marke << " " << auto2.modell << " " << auto2.baujahr << "\n";
    return 0;
}

// Ausgabe:
// BMW X5 1999
// Ford Mustang 1969
```

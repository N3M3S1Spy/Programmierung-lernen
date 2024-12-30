## C++ Vererbung

### Vererbung

In C++ ist es möglich, Attribute und Methoden von einer Klasse an eine andere zu vererben. Das Konzept der Vererbung wird in zwei Kategorien unterteilt:

*   **Abgeleitete Klasse (Kindklasse):** Die Klasse, die von einer anderen Klasse erbt.
*   **Basisklasse (Elternklasse):** Die Klasse, von der geerbt wird.

Um von einer Klasse zu erben, wird das Symbol `:` verwendet.

Im folgenden Beispiel erbt die Klasse `Auto` (Kindklasse) die Attribute und Methoden von der Klasse `Fahrzeug` (Elternklasse):

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

// Basisklasse (Elternklasse)
class Fahrzeug {
public:
    string marke = "Ford";
    void hupen() {
        cout << "Tuut, tuut!\n";
    }
};

// Abgeleitete Klasse (Kindklasse)
class Auto : public Fahrzeug {
public:
    string modell = "Mustang";
};

int main() {
    Auto meinAuto;
    meinAuto.hupen();
    cout << meinAuto.marke << " " << meinAuto.modell << "\n";
    return 0;
}

// Ausgabe:
// Tuut, tuut!
// Ford Mustang
```

> **Warum und wann "Vererbung" verwenden?**
>
> Vererbung ist nützlich für die Wiederverwendbarkeit von Code: Attribute und Methoden einer existierenden Klasse können wiederverwendet werden, wenn eine neue Klasse erstellt wird. Dies reduziert Redundanz und erleichtert die Wartung des Codes.

-----

### Mehrstufige Vererbung

Eine Klasse kann auch von einer Klasse abgeleitet werden, die bereits von einer anderen Klasse abgeleitet ist.

Im folgenden Beispiel ist `EnkelKlasse` von der Klasse `KindKlasse` abgeleitet (die von `BasisKlasse` abgeleitet ist):

### Beispiel:

```c++
#include <iostream>
using namespace std;

// Basisklasse (Elternklasse)
class BasisKlasse {
public:
    void meineFunktion() {
        cout << "Inhalt der Basisklasse.\n";
    }
};

// Abgeleitete Klasse (Kindklasse)
class KindKlasse : public BasisKlasse {
};

// Abgeleitete Klasse (Enkelklasse)
class EnkelKlasse : public KindKlasse {
};

int main() {
    EnkelKlasse meinObjekt;
    meinObjekt.meineFunktion();
    return 0;
}

// Ausgabe:
// Inhalt der Basisklasse.
```

-----

### Mehrfachvererbung

Eine Klasse kann auch von mehr als einer Basisklasse abgeleitet werden, indem eine **kommagetrennte Liste** verwendet wird:

### Beispiel:

```c++
#include <iostream>
using namespace std;

// Basisklasse
class BasisKlasse {
public:
    void meineFunktion() {
        cout << "Inhalt der Basisklasse.\n";
    }
};

// Eine weitere Basisklasse
class AndereBasisKlasse {
public:
    void meineAndereFunktion() {
        cout << "Inhalt einer anderen Klasse.\n";
    }
};

// Abgeleitete Klasse
class AbgeleiteteKlasse : public BasisKlasse, public AndereBasisKlasse {
};

int main() {
    AbgeleiteteKlasse meinObjekt;
    meinObjekt.meineFunktion();
    meinObjekt.meineAndereFunktion();
    return 0;
}

// Ausgabe:
// Inhalt der Basisklasse.
// Inhalt einer anderen Klasse.
```

-----

### Zugriff bei der Vererbung

### Zugriffsspezifizierer

Wie im Kapitel über Zugriffsspezifizierer gelernt, gibt es in C++ drei Spezifizierer: `public` (Member einer Klasse sind von außerhalb der Klasse zugänglich), `private` (Member können nur innerhalb der Klasse verwendet werden) und `protected`. Der dritte Spezifizierer, `protected`, ähnelt `private`, kann aber auch in der **abgeleiteten** Klasse verwendet werden:

### Beispiel:

```c++
#include <iostream>
using namespace std;

// Basisklasse
class Mitarbeiter {
protected: // Geschützter Zugriffsspezifizierer
    int gehalt;
};

// Abgeleitete Klasse
class Programmierer : public Mitarbeiter {
public:
    int bonus;
    void setGehalt(int s) {
        gehalt = s; // Zugriff auf protected Member
    }
    int getGehalt() {
        return gehalt; // Zugriff auf protected Member
    }
};

int main() {
    Programmierer meinObjekt;
    meinObjekt.setGehalt(50000);
    meinObjekt.bonus = 15000;
    cout << "Gehalt: " << meinObjekt.getGehalt() << "\n";
    cout << "Bonus: " << meinObjekt.bonus << "\n";
    return 0;
}

// Ausgabe:
// Gehalt: 50000
// Bonus: 15000
```

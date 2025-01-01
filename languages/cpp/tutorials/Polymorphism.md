## C++ Polymorphismus (Vielgestaltigkeit)

### Polymorphismus

Polymorphismus bedeutet "Vielgestaltigkeit" und tritt auf, wenn wir mehrere Klassen haben, die durch Vererbung miteinander verbunden sind.

Wie im vorherigen Kapitel beschrieben, ermöglicht uns die **Vererbung**, Attribute und Methoden von einer anderen Klasse zu übernehmen. Polymorphismus nutzt diese Methoden, um unterschiedliche Aufgaben auszuführen. Dadurch können wir eine einzige Aktion auf verschiedene Arten ausführen.

Stell dir zum Beispiel eine Basisklasse namens `Tier` vor, die eine Methode namens `tierLaut()` hat. Abgeleitete Klassen von `Tier` könnten `Schwein`, `Katze`, `Hund` oder `Vogel` sein – und sie haben jeweils ihre eigene Implementierung eines Tierlauts (das Schwein grunzt, die Katze miaut usw.):

### Beispiel:

```c++
#include <iostream>
using namespace std;

// Basisklasse
class Tier {
public:
    void tierLaut() {
        cout << "Das Tier macht ein Geräusch\n";
    }
};

// Abgeleitete Klasse
class Schwein : public Tier {
public:
    void tierLaut() {
        cout << "Das Schwein sagt: Oink oink\n";
    }
};

// Abgeleitete Klasse
class Hund : public Tier {
public:
    void tierLaut() {
        cout << "Der Hund sagt: Wuff wuff\n";
    }
};

// Abgeleitete Klasse
class Katze : public Tier {
public:
    void tierLaut() {
        cout << "Die Katze sagt: Miau miau\n";
    }
};
```

> Zur Erinnerung aus dem Kapitel über Vererbung: Wir verwenden das Symbol `:`, um von einer Klasse zu erben.

Jetzt können wir `Schwein`- und `Hund`-Objekte erstellen und die Methode `tierLaut()` *überschreiben*:

### Beispiel (mit Objekterzeugung und Methodenaufruf):

```c++
#include <iostream>
using namespace std;

// Basisklasse (wie oben)
class Tier {
public:
    virtual void tierLaut() { // Virtual für Polymorphismus wichtig!
        cout << "Das Tier macht ein Geräusch\n";
    }
};

// Abgeleitete Klassen (wie oben)
class Schwein : public Tier {
public:
    void tierLaut() override { // Override ist optional, aber empfohlen
        cout << "Das Schwein sagt: Oink oink\n";
    }
};

class Hund : public Tier {
public:
    void tierLaut() override {
        cout << "Der Hund sagt: Wuff wuff\n";
    }
};

class Katze : public Tier {
public:
    void tierLaut() override {
        cout << "Die Katze sagt: Miau miau\n";
    }
};

int main() {
    Tier meinTier;
    Schwein meinSchwein;
    Hund meinHund;
    Katze meineKatze;

    meinTier.tierLaut();    // Ausgabe: Das Tier macht ein Geräusch
    meinSchwein.tierLaut(); // Ausgabe: Das Schwein sagt: Oink oink
    meinHund.tierLaut();    // Ausgabe: Der Hund sagt: Wuff wuff
    meineKatze.tierLaut();    // Ausgabe: Die Katze sagt: Miau miau
    return 0;
}
```

**Wichtige Ergänzung für Polymorphismus:** Damit der Polymorphismus wie beabsichtigt funktioniert (d.h. die richtige `tierLaut()`-Methode der jeweiligen abgeleiteten Klasse aufgerufen wird), muss die Methode in der Basisklasse als `virtual` deklariert werden. Das Schlüsselwort `override` in den abgeleiteten Klassen ist optional, aber sehr empfehlenswert, da es dem Compiler und anderen Entwicklern signalisiert, dass diese Methode eine Methode der Basisklasse überschreibt und hilft Fehler zu vermeiden.

**Noch wichtigeres Beispiel (mit Pointern):** Der volle Nutzen von Polymorphismus zeigt sich erst mit Pointern oder Referenzen:

```c++
#include <iostream>
#include <vector>
using namespace std;

// Basisklasse (wie oben mit virtual)
class Tier {
public:
    virtual void tierLaut() {
        cout << "Das Tier macht ein Geräusch\n";
    }
};

// Abgeleitete Klassen (wie oben mit override)
class Schwein : public Tier {
public:
    void tierLaut() override {
        cout << "Das Schwein sagt: Oink oink\n";
    }
};

class Hund : public Tier {
public:
    void tierLaut() override {
        cout << "Der Hund sagt: Wuff wuff\n";
    }
};

class Katze : public Tier {
public:
    void tierLaut() override {
        cout << "Die Katze sagt: Miau miau\n";
    }
};

int main() {
    vector<Tier*> tiere;
    tiere.push_back(new Tier());
    tiere.push_back(new Schwein());
    tiere.push_back(new Hund());
    tiere.push_back(new Katze());

    for(Tier* tier : tiere){
        tier->tierLaut();
    }

    // Speicher freigeben (wichtig bei new)
    for(Tier* tier : tiere){
        delete tier;
    }

    return 0;
}
```

In diesem Beispiel haben wir einen Vektor von `Tier`-Pointern. Wir können Objekte der abgeleiteten Klassen in diesem Vektor speichern. Wenn wir dann `tier->tierLaut()` aufrufen, wird *dynamisch* zur Laufzeit entschieden, welche `tierLaut()`-Methode aufgerufen wird (die der Basisklasse oder die der jeweiligen abgeleiteten Klasse). Das ist der Kern des Polymorphismus.

> #### Warum und wann "Vererbung" und "Polymorphismus" verwenden?
>
> *   **Wiederverwendung von Code:** Vererbung ermöglicht die Wiederverwendung von Attributen und Methoden einer bestehenden Klasse bei der Erstellung einer neuen Klasse.
> *   **Erweiterbarkeit:** Polymorphismus ermöglicht es, den Code einfach zu erweitern, indem neue abgeleitete Klassen hinzugefügt werden, ohne bestehenden Code ändern zu müssen.
> *   **Flexibilität:** Polymorphismus ermöglicht es, Objekte verschiedener Klassen auf einheitliche Weise zu behandeln (z.B. in einem Vektor von Basisklassen-Pointern).

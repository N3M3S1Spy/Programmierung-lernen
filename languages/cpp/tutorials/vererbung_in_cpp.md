# Vererbung in C++

### Erklärung der Struktur:
1. **Was ist Vererbung?**: Einführung in das Konzept der Vererbung.
2. **Der Zugriff auf geerbte Mitglieder**: Erklärung, wie geerbte Mitglieder je nach Zugriffsmodifizierer verwendet werden können.
3. **Konstruktoren und Vererbung**: Wie Konstruktoren in der Vererbungskette aufgerufen werden.
4. **Methodenüberschreibung**: Das Überschreiben von Methoden in abgeleiteten Klassen.
5. **Mehrfachvererbung**: Verwendung von Mehrfachvererbung und deren mögliche Probleme.
6. **Zusammenfassung**: Überblick über die behandelten Themen.
7. **Übung**: Aufgaben zur Festigung des Gelernten.

Vererbung ist eines der Hauptmerkmale der objektorientierten Programmierung. Sie ermöglicht es, eine neue Klasse zu erstellen, die Eigenschaften und Methoden einer bestehenden Klasse übernimmt. In C++ können Klassen von anderen Klassen abgeleitet werden, sodass du Code wiederverwenden und die Funktionalität erweitern kannst. In diesem Tutorial erklären wir die Grundlagen der Vererbung in C++.

## 1. Was ist Vererbung?

Vererbung ist ein Mechanismus, bei dem eine Klasse (die abgeleitete Klasse) die Mitglieder (Daten und Methoden) einer anderen Klasse (der Basisklasse) übernimmt. Die abgeleitete Klasse kann diese Mitglieder nutzen und auch eigene hinzufügen oder die geerbten Methoden überschreiben.

### Beispiel für Vererbung:

```cpp
#include <iostream>
using namespace std;

// Basisklasse
class Tier {
public:
    string name;

    void essen() {
        cout << name << " isst!" << endl;
    }
};

// Abgeleitete Klasse
class Hund : public Tier {
public:
    void bellen() {
        cout << name << " bellt!" << endl;
    }
};

int main() {
    Hund meinHund;
    meinHund.name = "Bello";  // Zugriff auf das geerbte Mitglied 'name'
    meinHund.essen();         // Aufruf der geerbten Methode 'essen'
    meinHund.bellen();        // Aufruf der eigenen Methode 'bellen'

    return 0;
}
```

#### Erklärung:
- In diesem Beispiel ist `Tier` die Basisklasse, die das Mitglied `name` und die Methode `essen()` enthält.
- Die Klasse `Hund` erbt von der Basisklasse `Tier` und fügt eine eigene Methode `bellen()` hinzu.
- Ein Objekt der Klasse `Hund` kann auf die geerbten Mitglieder zugreifen und auch neue Funktionalität bieten.

## 2. Der Zugriff auf geerbte Mitglieder

In C++ gibt es verschiedene Zugriffsmodifizierer, die den Zugriff auf die geerbten Mitglieder steuern:

- **public**: Öffentliche Mitglieder der Basisklasse sind auch in der abgeleiteten Klasse öffentlich.
- **protected**: Geschützte Mitglieder sind in der abgeleiteten Klasse sichtbar, aber nicht außerhalb der Hierarchie zugänglich.
- **private**: Private Mitglieder der Basisklasse sind in der abgeleiteten Klasse nicht zugänglich.

Im obigen Beispiel haben wir `public` verwendet, um den Zugriff auf `name` und `essen()` zu ermöglichen. Wenn `name` als `private` deklariert gewesen wäre, hätte die abgeleitete Klasse keinen Zugriff darauf.

## 3. Konstruktoren und Vererbung

Die Konstruktoren der Basisklasse werden nicht automatisch von der abgeleiteten Klasse übernommen. Du musst den Konstruktor der Basisklasse explizit im Konstruktor der abgeleiteten Klasse aufrufen.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

class Tier {
public:
    string name;

    // Konstruktor der Basisklasse
    Tier(string n) : name(n) {}

    void essen() {
        cout << name << " isst!" << endl;
    }
};

class Hund : public Tier {
public:
    // Konstruktor der abgeleiteten Klasse
    Hund(string n) : Tier(n) {}  // Aufruf des Konstruktors der Basisklasse

    void bellen() {
        cout << name << " bellt!" << endl;
    }
};

int main() {
    Hund meinHund("Bello");
    meinHund.essen();  // Aufruf der geerbten Methode
    meinHund.bellen(); // Aufruf der eigenen Methode

    return 0;
}
```

#### Erklärung:
- Der Konstruktor der Basisklasse `Tier` wird explizit im Konstruktor der abgeleiteten Klasse `Hund` aufgerufen.
- Dadurch wird sichergestellt, dass das Mitglied `name` korrekt initialisiert wird.

## 4. Methodenüberschreibung (Overriding)

In C++ kannst du Methoden der Basisklasse in der abgeleiteten Klasse überschreiben. Dies wird als **Methodenüberschreibung (Overriding)** bezeichnet. Wenn eine Methode in der Basisklasse als `virtual` deklariert wird, wird zur Laufzeit entschieden, welche Version der Methode aufgerufen wird, abhängig vom Typ des Objekts.

### Beispiel für Methodenüberschreibung:

```cpp
#include <iostream>
using namespace std;

class Tier {
public:
    virtual void lautgeben() {
        cout << "Das Tier macht ein Geräusch!" << endl;
    }
};

class Hund : public Tier {
public:
    void lautgeben() override {  // Überschreiben der Methode
        cout << "Der Hund bellt!" << endl;
    }
};

int main() {
    Tier* tier = new Hund();
    tier->lautgeben();  // Aufruf der überschriebenen Methode

    delete tier;
    return 0;
}
```

#### Erklärung:
- Die Methode `lautgeben()` in der Basisklasse `Tier` ist als `virtual` deklariert, was es ermöglicht, dass die Methode zur Laufzeit auf die Version der abgeleiteten Klasse zugreift, auch wenn der Zeiger vom Typ der Basisklasse ist.
- In diesem Fall wird die Methode `lautgeben()` der abgeleiteten Klasse `Hund` aufgerufen, da der Zeiger `tier` tatsächlich auf ein `Hund`-Objekt zeigt.

## 5. Mehrfachvererbung

C++ unterstützt auch die **Mehrfachvererbung**, bei der eine Klasse von mehreren Basisklassen erben kann. Dies kann jedoch zu Problemen wie **Diamantvererbung** führen, wenn mehrere Basisklassen dieselben Mitglieder oder Methoden enthalten.

### Beispiel für Mehrfachvererbung:

```cpp
#include <iostream>
using namespace std;

class Tier {
public:
    void essen() {
        cout << "Das Tier isst!" << endl;
    }
};

class Vogel {
public:
    void fliegen() {
        cout << "Der Vogel fliegt!" << endl;
    }
};

class Papagei : public Tier, public Vogel {
public:
    void sprechen() {
        cout << "Der Papagei spricht!" << endl;
    }
};

int main() {
    Papagei p;
    p.essen();    // Aufruf der Methode von 'Tier'
    p.fliegen();  // Aufruf der Methode von 'Vogel'
    p.sprechen(); // Aufruf der eigenen Methode von 'Papagei'

    return 0;
}
```

#### Erklärung:
- Die Klasse `Papagei` erbt von zwei Basisklassen: `Tier` und `Vogel`.
- Das Objekt `p` hat Zugriff auf alle geerbten Methoden von beiden Basisklassen.

## 6. Zusammenfassung

In diesem Tutorial haben wir die Grundlagen der Vererbung in C++ behandelt:

- **Vererbung** ermöglicht es, Klassen zu erweitern und wiederverwendbaren Code zu schaffen.
- **Konstruktoren** der Basisklasse müssen explizit im Konstruktor der abgeleiteten Klasse aufgerufen werden.
- **Methodenüberschreibung** ermöglicht es, Methoden in der abgeleiteten Klasse zu ersetzen.
- **Mehrfachvererbung** erlaubt es einer Klasse, von mehreren Basisklassen zu erben.

## 7. Übung

1. Erstelle eine Klasse `Fahrzeug`, die `marke` und `geschwindigkeit` enthält.
2. Erstelle eine abgeleitete Klasse `Auto`, die zusätzliche Eigenschaften wie `anzahlTüren` enthält.
3. Überschreibe die Methode `fahren()` in der Klasse `Auto`, um eine spezifische Nachricht auszugeben.

Viel Spaß beim Üben!

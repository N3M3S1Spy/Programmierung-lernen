# Klassen und Objekte in C++

### Erklärung der Struktur:
1. **Was sind Klassen und Objekte?**: Eine Einführung in das grundlegende Konzept von Klassen und Objekten.
2. **Konstruktoren**: Erklärung, wie Konstruktoren verwendet werden, um Objekte zu initialisieren.
3. **Destruktoren**: Die Rolle des Destruktors und wie er automatisch beim Zerstören von Objekten aufgerufen wird.
4. **Getter und Setter**: Verwendung von Methoden, um auf die privaten Mitglieder einer Klasse sicher zuzugreifen.
5. **Zusammenfassung**: Überblick über die behandelten Themen.
6. **Übung**: Aufgaben zur Festigung des Gelernten.

In C++ ist die objektorientierte Programmierung (OOP) ein zentrales Konzept. Sie ermöglicht es, Programme auf der Grundlage von Objekten und Klassen zu strukturieren. Eine **Klasse** definiert den Bauplan für Objekte, und ein **Objekt** ist eine Instanz einer Klasse. In diesem Tutorial werden wir uns mit der Definition von Klassen, der Erstellung von Objekten und der Verwendung von Methoden beschäftigen.

## 1. Was sind Klassen und Objekte?

### Klassen

Eine Klasse ist ein benutzerdefinierter Datentyp, der sowohl Daten (Mitglieder) als auch Funktionen (Methoden) enthalten kann, die auf diese Daten zugreifen oder sie manipulieren. Klassen sind das Herzstück der objektorientierten Programmierung.

### Objekte

Ein Objekt ist eine Instanz einer Klasse. Wenn du eine Klasse definierst, erstellst du lediglich den Bauplan. Ein Objekt ist eine konkrete Instanz dieses Bauplans.

### Beispiel: Klasse und Objekt

```cpp
#include <iostream>
using namespace std;

// Definition der Klasse
class Auto {
public:
    // Mitglieder (Daten)
    string marke;
    int baujahr;

    // Methode (Funktion)
    void fahren() {
        cout << "Das Auto fährt!" << endl;
    }
};

int main() {
    // Erstellen eines Objekts der Klasse Auto
    Auto meinAuto;

    // Zuweisung von Werten zu den Mitgliedern
    meinAuto.marke = "Volkswagen";
    meinAuto.baujahr = 2020;

    // Aufruf der Methode
    meinAuto.fahren();

    cout << "Marke: " << meinAuto.marke << ", Baujahr: " << meinAuto.baujahr << endl;

    return 0;
}
```

#### Erklärung:
- Die Klasse `Auto` hat zwei Mitglieder (`marke` und `baujahr`) und eine Methode (`fahren()`).
- Das Objekt `meinAuto` wird erstellt und mit Werten für die Mitglieder befüllt.
- Die Methode `fahren()` wird aufgerufen, um eine Aktion auszuführen.

## 2. Konstruktoren in C++

Ein Konstruktor ist eine spezielle Methode einer Klasse, die automatisch aufgerufen wird, wenn ein Objekt erstellt wird. Der Konstruktor wird verwendet, um die Mitglieder eines Objekts zu initialisieren.

### Beispiel für einen Konstruktor:

```cpp
#include <iostream>
using namespace std;

class Auto {
public:
    string marke;
    int baujahr;

    // Konstruktor
    Auto(string m, int b) {
        marke = m;
        baujahr = b;
    }

    void fahren() {
        cout << "Das Auto fährt!" << endl;
    }
};

int main() {
    // Erstellen eines Objekts mit einem Konstruktor
    Auto meinAuto("BMW", 2022);

    cout << "Marke: " << meinAuto.marke << ", Baujahr: " << meinAuto.baujahr << endl;
    meinAuto.fahren();

    return 0;
}
```

#### Erklärung:
- Der Konstruktor `Auto(string m, int b)` initialisiert die Mitglieder der Klasse beim Erstellen des Objekts.
- Beim Erstellen von `meinAuto` mit `"BMW"` und `2022` werden diese Werte an den Konstruktor übergeben.

## 3. Destruktoren in C++

Ein Destruktor ist eine spezielle Methode, die aufgerufen wird, wenn ein Objekt zerstört wird. Destruktoren sind besonders wichtig für die Verwaltung von Ressourcen wie dynamisch zugewiesenem Speicher.

### Beispiel für einen Destruktor:

```cpp
#include <iostream>
using namespace std;

class Auto {
public:
    string marke;
    int baujahr;

    // Konstruktor
    Auto(string m, int b) {
        marke = m;
        baujahr = b;
    }

    // Destruktor
    ~Auto() {
        cout << "Das Auto " << marke << " wurde gelöscht!" << endl;
    }

    void fahren() {
        cout << "Das Auto fährt!" << endl;
    }
};

int main() {
    Auto meinAuto("Mercedes", 2023);

    cout << "Marke: " << meinAuto.marke << ", Baujahr: " << meinAuto.baujahr << endl;

    // Der Destruktor wird automatisch aufgerufen, wenn das Objekt den Gültigkeitsbereich verlässt
    return 0;
}
```

#### Erklärung:
- Der Destruktor `~Auto()` wird automatisch aufgerufen, wenn das Objekt am Ende des Programms aus dem Gültigkeitsbereich geht. In diesem Fall gibt der Destruktor eine Nachricht aus, wenn das Objekt gelöscht wird.

## 4. Getter und Setter in C++

Getter- und Setter-Methoden sind spezielle Funktionen, die verwendet werden, um auf die privaten Mitglieder einer Klasse zuzugreifen oder sie zu ändern. Diese Methoden ermöglichen eine kontrollierte und sichere Interaktion mit den Mitgliedern einer Klasse.

### Beispiel für Getter und Setter:

```cpp
#include <iostream>
using namespace std;

class Auto {
private:
    string marke;
    int baujahr;

public:
    // Getter für 'marke'
    string getMarke() {
        return marke;
    }

    // Setter für 'marke'
    void setMarke(string m) {
        marke = m;
    }

    // Getter für 'baujahr'
    int getBaujahr() {
        return baujahr;
    }

    // Setter für 'baujahr'
    void setBaujahr(int b) {
        baujahr = b;
    }

    void fahren() {
        cout << "Das Auto fährt!" << endl;
    }
};

int main() {
    Auto meinAuto;
    meinAuto.setMarke("Audi");
    meinAuto.setBaujahr(2021);

    cout << "Marke: " << meinAuto.getMarke() << ", Baujahr: " << meinAuto.getBaujahr() << endl;
    meinAuto.fahren();

    return 0;
}
```

#### Erklärung:
- Die privaten Mitglieder `marke` und `baujahr` sind nur über die Getter- und Setter-Methoden zugänglich. Dies ist eine gängige Praxis, um den direkten Zugriff auf die Mitglieder zu verhindern und so die Kapselung und Sicherheit zu gewährleisten.

## 5. Zusammenfassung

In diesem Tutorial haben wir die Grundlagen von Klassen und Objekten in C++ behandelt:

- **Klassen** sind benutzerdefinierte Datentypen, die sowohl Daten als auch Funktionen enthalten.
- **Objekte** sind Instanzen von Klassen, die echte Daten speichern.
- **Konstruktoren** und **Destruktoren** helfen dabei, Objekte zu initialisieren und zu zerstören.
- **Getter und Setter** ermöglichen einen kontrollierten Zugriff auf die Mitglieder einer Klasse.

## 6. Übung

1. Erstelle eine Klasse `Person`, die Informationen wie `Name`, `Alter` und `Adresse` speichert.
2. Füge der Klasse Methoden hinzu, um den Namen und das Alter zu setzen und abzurufen.
3. Verwende einen Konstruktor, um die Person mit initialen Werten zu erstellen.

Viel Spaß beim Üben!

Möchtest du mit dem nächsten Thema fortfahren?

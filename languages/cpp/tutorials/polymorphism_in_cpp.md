# Polymorphismus in C++

### Erklärung der Struktur:
1. **Was ist Polymorphismus?**: Einführung in das Konzept des Polymorphismus.
2. **Der virtuelle Funktionsaufruf**: Erklärung des Mechanismus, wie zur Laufzeit die richtige Methode aufgerufen wird.
3. **Pure virtuelle Funktionen**: Wie man abstrakte Klassen erstellt und Polymorphismus mit rein virtuellen Funktionen nutzt.
4. **Zusammenfassung**: Überblick über die wichtigsten Punkte des Tutorials.
5. **Übung**: Aufgaben zur Festigung des Gelernten.

Polymorphismus ist ein weiteres wichtiges Konzept der objektorientierten Programmierung, das es ermöglicht, dass ein Objekt auf verschiedene Arten behandelt werden kann. In C++ gibt es zwei Hauptarten von Polymorphismus:

1. **Zur Kompilierzeit (Compile-time Polymorphism)**: Wird durch Funktionen oder Operatorüberladung erreicht.
2. **Zur Laufzeit (Runtime Polymorphism)**: Wird durch Methodenüberschreibung mit virtuellen Funktionen erreicht.

In diesem Tutorial konzentrieren wir uns auf den **Runtime Polymorphism**, der häufig in der Praxis verwendet wird.

## 1. Was ist Polymorphismus?

Polymorphismus bedeutet, dass ein Objekt auf verschiedene Arten behandelt werden kann. In C++ ermöglicht es, dass ein Zeiger oder eine Referenz auf ein Objekt einer Basisklasse auf ein Objekt einer abgeleiteten Klasse verweist. Dies ermöglicht es, dieselbe Methode auf unterschiedliche Weise auszuführen, je nachdem, welches Objekt die Methode aufruft.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

// Basisklasse
class Tier {
public:
    virtual void lautgeben() {  // virtuelle Methode
        cout << "Das Tier macht ein Geräusch!" << endl;
    }
};

// Abgeleitete Klasse
class Hund : public Tier {
public:
    void lautgeben() override {  // Überschreibung der virtuellen Methode
        cout << "Der Hund bellt!" << endl;
    }
};

// Weitere abgeleitete Klasse
class Katze : public Tier {
public:
    void lautgeben() override {  // Überschreibung der virtuellen Methode
        cout << "Die Katze miaut!" << endl;
    }
};

int main() {
    Tier* tier1 = new Hund();
    Tier* tier2 = new Katze();

    tier1->lautgeben();  // Aufruf der Methode der abgeleiteten Klasse Hund
    tier2->lautgeben();  // Aufruf der Methode der abgeleiteten Klasse Katze

    delete tier1;
    delete tier2;

    return 0;
}
```

#### Erklärung:
- In diesem Beispiel haben wir eine virtuelle Methode `lautgeben()` in der Basisklasse `Tier`. Beide abgeleiteten Klassen, `Hund` und `Katze`, überschreiben diese Methode.
- Wir verwenden einen Zeiger vom Typ der Basisklasse (`Tier*`), um Objekte der abgeleiteten Klassen zu behandeln.
- Zur Laufzeit wird durch den Mechanismus des virtuellen Funktionsaufrufs entschieden, welche Methode (`lautgeben()`) ausgeführt wird, basierend auf dem tatsächlichen Typ des Objekts.

## 2. Der virtuelle Funktionsaufruf

Damit Polymorphismus funktioniert, müssen die Methoden in der Basisklasse mit dem `virtual` Schlüsselwort markiert werden. Dies stellt sicher, dass zur Laufzeit entschieden wird, welche Methode aufgerufen wird, wenn der Zeiger oder die Referenz auf eine Basisklasse zeigt.

Ohne das Schlüsselwort `virtual` würde C++ einfach die Methode der Basisklasse aufrufen, anstatt die Methode der abgeleiteten Klasse, selbst wenn ein Objekt einer abgeleiteten Klasse verwendet wird.

### Beispiel ohne `virtual`:

```cpp
#include <iostream>
using namespace std;

class Tier {
public:
    void lautgeben() {  // Keine virtuelle Methode
        cout << "Das Tier macht ein Geräusch!" << endl;
    }
};

class Hund : public Tier {
public:
    void lautgeben() {  // Überschreibung der Methode (nicht wirklich Polymorphismus)
        cout << "Der Hund bellt!" << endl;
    }
};

int main() {
    Tier* tier = new Hund();
    tier->lautgeben();  // Aufruf der Methode der Basisklasse, nicht der abgeleiteten Klasse

    delete tier;

    return 0;
}
```

#### Erklärung:
- Hier wird immer die Methode der Basisklasse `Tier` aufgerufen, obwohl das Objekt vom Typ `Hund` ist, da `lautgeben()` nicht als `virtual` deklariert wurde.
- Das bedeutet, dass Polymorphismus nicht funktioniert, und die Methode der Basisklasse wird zur Kompilierzeit gebunden.

## 3. Pure virtuelle Funktionen (Abstrakte Klassen)

Wenn eine Klasse mindestens eine pure virtuelle Funktion enthält, wird sie zu einer **abstrakten Klasse**. Eine abstrakte Klasse kann nicht direkt instanziiert werden. Sie dient als Grundlage für abgeleitete Klassen, die die pure virtuelle Funktion implementieren müssen.

Eine pure virtuelle Funktion wird mit `= 0` deklariert.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

class Tier {
public:
    virtual void lautgeben() = 0;  // Pure virtuelle Funktion (abstrakte Methode)
};

class Hund : public Tier {
public:
    void lautgeben() override {  // Implementierung der virtuellen Methode
        cout << "Der Hund bellt!" << endl;
    }
};

class Katze : public Tier {
public:
    void lautgeben() override {  // Implementierung der virtuellen Methode
        cout << "Die Katze miaut!" << endl;
    }
};

int main() {
    // Tier* tier = new Tier();  // Fehler: Tier ist abstrakte Klasse
    Tier* tier1 = new Hund();
    Tier* tier2 = new Katze();

    tier1->lautgeben();  // Aufruf der Methode der abgeleiteten Klasse Hund
    tier2->lautgeben();  // Aufruf der Methode der abgeleiteten Klasse Katze

    delete tier1;
    delete tier2;

    return 0;
}
```

#### Erklärung:
- Die Klasse `Tier` enthält eine **pure virtuelle Funktion** `lautgeben()`, was sie zu einer abstrakten Klasse macht.
- Die abgeleiteten Klassen `Hund` und `Katze` implementieren die Methode `lautgeben()`.
- Ein Objekt der abstrakten Klasse `Tier` kann nicht direkt instanziiert werden, aber die abgeleiteten Klassen können die Methode implementieren und instanziiert werden.

## 4. Zusammenfassung

Polymorphismus ist ein zentrales Konzept der objektorientierten Programmierung, das es ermöglicht, mit Objekten unterschiedlicher Typen einheitlich zu arbeiten. In C++ wird Polymorphismus vor allem durch:

- **Virtuelle Funktionen**, die zur Laufzeit entscheiden, welche Methode aufgerufen wird.
- **Abstrakte Klassen** und **pure virtuelle Funktionen**, die als Basis für weitere Klassen dienen.

Durch den Polymorphismus wird dein Code flexibler und leichter erweiterbar.

## 5. Übung

1. Erstelle eine abstrakte Klasse `Form` mit einer Methode `berechneFlaeche()`.
2. Erstelle zwei abgeleitete Klassen `Kreis` und `Rechteck`, die die Methode `berechneFlaeche()` implementieren.
3. Berechne in einer Funktion die Fläche von verschiedenen Formen, indem du ein Array von `Form`-Zeigern verwendest.

Viel Spaß beim Üben!

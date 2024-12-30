## C++ Zugriffsspezifizierer

### Zugriffsspezifizierer

Du bist nun mit dem Schlüsselwort `public` vertraut, das in allen bisherigen Klassenbeispielen verwendet wurde:

### Beispiel:

```c++
class MeineKlasse { // Die Klasse
public:          // Zugriffsspezifizierer
    // Klassenmember (Attribute und Methoden)
};
```

Das Schlüsselwort `public` ist ein **Zugriffsspezifizierer**. Zugriffsspezifizierer definieren, wie auf die Member (Attribute und Methoden) einer Klasse zugegriffen werden kann. Im obigen Beispiel sind die Member `public` – das bedeutet, dass sie von außerhalb der Klasse aus zugänglich und veränderbar sind.

Was aber, wenn wir möchten, dass Member privat und vor der Außenwelt verborgen sind?

In C++ gibt es drei Zugriffsspezifizierer:

*   `public`: Member sind von außerhalb der Klasse zugänglich.
*   `private`: Member sind von außerhalb der Klasse *nicht* zugänglich.
*   `protected`: Member sind von außerhalb der Klasse nicht zugänglich, können aber in abgeleiteten Klassen (durch Vererbung) verwendet werden. Mehr zur Vererbung später.

Das folgende Beispiel demonstriert die Unterschiede zwischen `public`- und `private`-Membern:

### Beispiel:

```c++
#include <iostream>
using namespace std;

class MeineKlasse {
public:    // Öffentlicher Zugriffsspezifizierer
    int x; // Öffentliches Attribut
private:   // Privater Zugriffsspezifizierer
    int y; // Privates Attribut
};

int main() {
    MeineKlasse meinObjekt;
    meinObjekt.x = 25; // Erlaubt (public)
    // meinObjekt.y = 50; // Nicht erlaubt (private) - Kompilierfehler!
    cout << meinObjekt.x << endl;
    return 0;
}
```

Wenn du versuchst, auf ein `private`-Member zuzugreifen, tritt ein Kompilierfehler auf:

```
Fehler: 'y' ist privat
```

> **Hinweis:** Es ist möglich, über eine `public`-Methode innerhalb derselben Klasse auf `private`-Member einer Klasse zuzugreifen. Wie das geht, wird im nächsten Kapitel (Kapselung) erklärt.
>
> **Tipp:** Es gilt als gute Programmierpraxis, Klassenattribute so oft wie möglich als `private` zu deklarieren. Dadurch wird die Wahrscheinlichkeit verringert, dass der Code versehentlich verändert wird. Dies ist auch ein Kernelement des Konzepts der **Kapselung** (Encapsulation), über das du im nächsten Kapitel mehr erfahren wirst.

**Hinweis:** Standardmäßig sind alle Member einer Klasse `private`, wenn kein Zugriffsspezifizierer angegeben wird:

### Beispiel:

```c++
class MeineKlasse {
    int x; // Privates Attribut (Standard)
    int y; // Privates Attribut (Standard)
};
```

# Operatorüberladung in C++

Operatorüberladung ist eine wichtige Funktion der objektorientierten Programmierung in C++, mit der du die Standardoperationen auf Objekten deiner eigenen Klassen definieren kannst. Dies bedeutet, dass du Operatoren wie `+`, `-`, `=`, `[]`, `++` und viele andere für deine benutzerdefinierten Datentypen verwenden kannst.

Durch die Überladung von Operatoren kannst du den Code lesbarer und intuitiver gestalten. Anstatt eine spezielle Methode wie `addieren()` zu verwenden, kannst du einfach den `+`-Operator verwenden.

## 1. Was ist Operatorüberladung?

Operatorüberladung bedeutet, dass du die Funktionsweise eines Operators für benutzerdefinierte Datentypen anpasst. Zum Beispiel:

- Der `+`-Operator kann für eine Klasse `Punkt` so definiert werden, dass er zwei Punkte addiert.
- Der `=`-Operator kann für eine Klasse `Konto` so definiert werden, dass er eine tiefe Kopie des Kontos erstellt.

## 2. Operatorüberladung für den `+`-Operator

Hier ist ein Beispiel, wie du den `+`-Operator für eine Klasse `Punkt` überladen kannst:

### Beispiel:

```cpp
#include <iostream>
using namespace std;

class Punkt {
public:
    int x, y;

    // Konstruktor
    Punkt(int x, int y) : x(x), y(y) {}

    // Überladung des + Operators
    Punkt operator+(const Punkt& other) {
        return Punkt(x + other.x, y + other.y);
    }
};

int main() {
    Punkt p1(1, 2), p2(3, 4);
    Punkt p3 = p1 + p2; // Verwendung des überladenen + Operators

    cout << "Punkt p3: (" << p3.x << ", " << p3.y << ")" << endl;

    return 0;
}
```

#### Erklärung:
- Die Methode `operator+` wird verwendet, um die Addition von zwei `Punkt`-Objekten zu definieren.
- Der Operator `+` wird mit der Methode `operator+` überladen, die zwei `Punkt`-Objekte addiert und ein neues `Punkt`-Objekt zurückgibt.
- In der `main()`-Funktion wird der überladene `+`-Operator verwendet, um zwei Punkte zu addieren.

## 3. Überladen des `=`-Operators (Zuweisung)

Manchmal möchtest du den `=`-Operator so überladen, dass er eine tiefe Kopie von Objekten erstellt, anstatt die Referenz zu kopieren. Dies ist besonders wichtig, wenn deine Klasse Zeiger auf dynamisch zugewiesene Speicherbereiche enthält.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

class Konto {
public:
    int kontostand;

    Konto(int betrag) : kontostand(betrag) {}

    // Überladung des = Operators (Kopierzuweisung)
    Konto& operator=(const Konto& other) {
        if (this != &other) {
            kontostand = other.kontostand; // Tiefe Kopie
        }
        return *this;
    }
};

int main() {
    Konto k1(1000), k2(500);
    k2 = k1; // Überladene Zuweisung

    cout << "Konto 2: " << k2.kontostand << endl; // Gibt 1000 aus

    return 0;
}
```

#### Erklärung:
- Der `operator=` ist überladen, um eine tiefe Kopie des `Konto`-Objekts zu erstellen.
- Der `if`-Block stellt sicher, dass die Zuweisung nicht auf sich selbst angewendet wird (Vermeidung von Selbstzuweisungen).
- Der Operator gibt eine Referenz auf das Objekt zurück, um eine verkettete Zuweisung zu ermöglichen (z.B. `a = b = c`).

## 4. Überladen von anderen Operatoren

Du kannst viele andere Operatoren überladen, wie zum Beispiel:

- `[]` für den Indexoperator.
- `++` für den Inkrementoperator.
- `<<` und `>>` für Ein- und Ausgabeoperatoren.

### Beispiel für den `[]`-Operator:

```cpp
#include <iostream>
using namespace std;

class Array {
public:
    int arr[5];

    // Überladung des [] Operators
    int& operator[](int index) {
        return arr[index];
    }
};

int main() {
    Array arr;
    arr[0] = 10;
    arr[1] = 20;

    cout << "arr[0]: " << arr[0] << endl; // Gibt 10 aus
    cout << "arr[1]: " << arr[1] << endl; // Gibt 20 aus

    return 0;
}
```

#### Erklärung:
- Der `[]`-Operator wird überladen, sodass du auf das Array wie mit einem normalen Array zugreifen kannst.
- Durch die Rückgabe einer Referenz (`int&`) können die Elemente im Array direkt verändert werden.

## 5. Operatorüberladung für den `<<`-Operator (Ein- und Ausgabe)

Der `<<`-Operator wird häufig in C++ für die Ausgabe von Daten verwendet. Du kannst ihn überladen, um benutzerdefinierte Datentypen zu unterstützen.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

class Punkt {
public:
    int x, y;

    // Konstruktor
    Punkt(int x, int y) : x(x), y(y) {}

    // Überladung des << Operators für die Ausgabe
    friend ostream& operator<<(ostream& os, const Punkt& p) {
        os << "(" << p.x << ", " << p.y << ")";
        return os;
    }
};

int main() {
    Punkt p(1, 2);
    cout << "Punkt: " << p << endl; // Gibt (1, 2) aus

    return 0;
}
```

#### Erklärung:
- Der `<<`-Operator wird überladen, um den Punkt in einem benutzerfreundlichen Format zu drucken.
- Der `friend`-Schlüsselwort ermöglicht es der `operator<<`-Funktion, auf private Daten der Klasse zuzugreifen.

## 6. Wichtige Hinweise

- Achte darauf, dass die Bedeutung des Operators nach der Überladung beibehalten wird. Z.B. sollte der `+`-Operator für zwei Objekte eine Addition und nicht etwas völlig anderes durchführen.
- Vermeide die Überladung von Operatoren für Aufgaben, die nicht intuitiv sind. Z.B. könnte es verwirrend sein, den `+`-Operator für das Setzen eines Werts zu verwenden.

## 7. Zusammenfassung

Operatorüberladung in C++ ermöglicht es dir, Operatoren wie `+`, `-`, `=`, `[]`, und viele andere für benutzerdefinierte Datentypen zu verwenden. Dies verbessert die Lesbarkeit und Intuitivität deines Codes. Du kannst viele Operatoren überladen, aber es ist wichtig, sicherzustellen, dass ihre Bedeutung erhalten bleibt und der Code nicht verwirrend wird.

## 8. Übung

1. Überlade den `-`-Operator für eine Klasse `Bruch`, sodass du zwei Brüche subtrahieren kannst.
2. Überlade den `++`-Operator für eine Klasse `Zähler`, sodass du die Anzahl der Elemente in einem Zähler-Objekt erhöhen kannst.

Viel Spaß beim Üben!

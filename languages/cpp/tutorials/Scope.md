## C++ Variablenumfang (Scope)

Nachdem du nun mit Funktionen vertraut bist, ist es wichtig zu verstehen, wie sich Variablen innerhalb und außerhalb von Funktionen verhalten.

In C++ sind Variablen nur innerhalb des Bereichs zugänglich, in dem sie deklariert wurden. Dieser Bereich wird als **Gültigkeitsbereich** oder **Scope** bezeichnet.

### Lokaler Gültigkeitsbereich (Local Scope)

Eine Variable, die *innerhalb* einer Funktion deklariert wird, hat einen **lokalen Gültigkeitsbereich**. Sie ist nur innerhalb dieser Funktion sichtbar und verwendbar.

### Beispiel:

```c++
#include <iostream>
using namespace std;

void meineFunktion() {
    // Lokale Variable innerhalb von meineFunktion
    int x = 5;

    // Ausgabe der lokalen Variable x
    cout << x << "\n";
}

int main() {
    meineFunktion(); // korrekter Aufruf
    return 0;
}

// Ausgabe: 5
```

Eine **lokale Variable** kann *nicht* außerhalb der Funktion verwendet werden, in der sie deklariert wurde.

Versuchst du, außerhalb der Funktion auf eine lokale Variable zuzugreifen, führt dies zu einem Kompilierfehler:

### Beispiel (Fehler):

```c++
#include <iostream>
using namespace std;

void meineFunktion() {
    // Lokale Variable innerhalb von meineFunktion
    int x = 5;
}

int main() {
    meineFunktion();

    // Fehler: x ist im main-Scope nicht bekannt
    cout << x; // Kompilierfehler!
    return 0;
}
```

### Globaler Gültigkeitsbereich (Global Scope)

Eine Variable, die *außerhalb* aller Funktionen deklariert wird, hat einen **globalen Gültigkeitsbereich**. Sie ist von *jeder* Funktion im Programm aus zugänglich.

### Beispiel:

```c++
#include <iostream>
using namespace std;

// Globale Variable
int x = 10;

void meineFunktion() {
    // Zugriff auf die globale Variable x
    cout << "In meineFunktion: " << x << "\n";
}

int main() {
    meineFunktion();
    // Zugriff auf die globale Variable x
    cout << "In main: " << x << "\n";
    return 0;
}

// Ausgabe:
// In meineFunktion: 10
// In main: 10
```

#### Namenskonflikte (Shadowing)

Wenn eine lokale Variable denselben Namen wie eine globale Variable hat, "überdeckt" die lokale Variable die globale Variable innerhalb ihres Gültigkeitsbereichs. Das bedeutet, dass innerhalb der Funktion auf die *lokale* Variable zugegriffen wird, während außerhalb der Funktion die *globale* Variable weiterhin zugänglich ist.

### Beispiel:

```c++
#include <iostream>
using namespace std;

int x = 10; // Globale Variable

void meineFunktion() {
    int x = 5; // Lokale Variable (überdeckt die globale x)
    cout << "In meineFunktion: " << x << "\n";
}

int main() {
    meineFunktion();
    cout << "In main: " << x << "\n";
    return 0;
}

// Ausgabe:
// In meineFunktion: 5
// In main: 10
```

Es ist jedoch eine *schlechte Programmierpraxis*, denselben Namen für globale und lokale Variablen zu verwenden, da dies leicht zu Verwirrung und Fehlern führen kann.

Im Allgemeinen solltest du die Verwendung globaler Variablen so weit wie möglich vermeiden, da sie den Code schwerer lesbar, wartbar und testbar machen. Globale Variablen können von jeder Funktion aus verändert werden, was unerwartete Seiteneffekte verursachen kann.

### Beispiel (Vermeide dies):

```c++
#include <iostream>
using namespace std;

int x = 10; // Globale Variable (Vermeiden!)

void meineFunktion() {
    x = 20; // Veränderung der globalen Variable
}

int main() {
    cout << "Vor dem Aufruf: " << x << "\n";
    meineFunktion();
    cout << "Nach dem Aufruf: " << x << "\n";
    return 0;
}

// Ausgabe:
// Vor dem Aufruf: 10
// Nach dem Aufruf: 20
```

### Fazit

Verwende so oft wie möglich *lokale Variablen* mit aussagekräftigen Namen. Dadurch wird dein Code besser strukturiert, leichter zu verstehen und einfacher zu warten. Globale Variablen sollten nur in Ausnahmefällen verwendet werden, wenn wirklich Daten im gesamten Programm verfügbar sein müssen. Achte darauf, Namenskonflikte zu vermeiden und die Auswirkungen der Veränderung globaler Variablen in verschiedenen Funktionen zu berücksichtigen. Ein gutes Verständnis des Gültigkeitsbereichs von Variablen ist entscheidend für die Entwicklung sauberer und fehlerfreier C++-Programme.

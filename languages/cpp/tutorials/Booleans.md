## C++ Boolesche Werte (Booleans)

In der Programmierung benötigt man oft einen Datentyp, der nur einen von zwei Werten annehmen kann, wie z. B.:

*   JA / NEIN
*   AN / AUS
*   WAHR / FALSCH

Dafür gibt es in C++ den Datentyp `bool`, der die Werte `true` (wahr) oder `false` (falsch) annehmen kann.

## Boolesche Variablen

Eine boolesche Variable wird mit dem Schlüsselwort `bool` deklariert und kann die Werte `true` oder `false` annehmen:

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    bool istProgrammierenCool = true;
    bool schmecktFischGut = false;
    cout << istProgrammierenCool << endl;  // Gibt 1 (true) aus
    cout << schmecktFischGut << endl;  // Gibt 0 (false) aus
    return 0;
}
```

Aus dem obigen Beispiel kannst du ersehen, dass ein wahrer Wert `1` und ein falscher Wert `0` ausgibt.

Es ist jedoch üblicher, einen booleschen Wert durch den Vergleich von Werten und Variablen zu erhalten.

-------------

## C++ Boolesche Ausdrücke

### Boolescher Ausdruck

Ein boolescher Ausdruck gibt einen booleschen Wert zurück, der entweder `1` (`true`) oder `0` (`false`) ist.

Dies ist nützlich, um Logik aufzubauen und Entscheidungen im Code zu treffen.

Du kannst einen Vergleichsoperator (wie z. B. den Operator "größer als" (`>`)) verwenden, um festzustellen, ob ein Ausdruck (oder eine Variable) wahr oder falsch ist:

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    int y = 9;
    cout << (x > y) << endl; // Gibt 1 (true) aus, weil 10 größer als 9 ist
    return 0;
}
```

Oder noch einfacher:

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    cout << (10 > 9) << endl; // Gibt 1 (true) aus, weil 10 größer als 9 ist
    return 0;
}
```

In den folgenden Beispielen verwenden wir den Operator "gleich" (`==`), um einen Ausdruck auszuwerten:

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    int x = 10;
    cout << (x == 10) << endl; // Gibt 1 (true) aus, weil der Wert von x gleich 10 ist
    return 0;
}
```

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    cout << (10 == 15) << endl; // Gibt 0 (false) aus, weil 10 nicht gleich 15 ist
    return 0;
}
```

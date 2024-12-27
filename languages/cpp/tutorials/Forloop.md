## C++ `for`-Schleife

Die `for`-Schleife ist besonders nützlich, wenn du genau weißt, wie oft ein Codeblock wiederholt werden soll. Sie bietet eine kompakte Möglichkeit, Initialisierung, Bedingung und Inkrement/Dekrement in einer einzigen Zeile zu vereinen.

### Syntax:

```c++
for (Initialisierung; Bedingung; Inkrement/Dekrement) {
  // Codeblock, der ausgeführt wird
}
```

**Erläuterung der Bestandteile:**

*   **Initialisierung:** Dieser Ausdruck wird *einmal* ausgeführt, bevor die Schleife beginnt. Er dient üblicherweise zur Initialisierung einer Zählervariablen.
*   **Bedingung:** Dieser Ausdruck wird *vor jeder Iteration* der Schleife ausgewertet. Solange die Bedingung `true` ist, wird der Codeblock ausgeführt. Wenn die Bedingung `false` ist, wird die Schleife beendet.
*   **Inkrement/Dekrement:** Dieser Ausdruck wird *nach jeder Iteration* des Codeblocks ausgeführt. Er dient üblicherweise zur Aktualisierung der Zählervariablen (z.B. Inkrementieren oder Dekrementieren).

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 5; i++) {
    cout << i << "\n";
  }
    return 0;
}
```

**Ausgabe:**

```
0
1
2
3
4
```

**Detaillierte Erklärung des Beispiels:**

1.  `int i = 0;`: Die Variable `i` wird mit dem Wert 0 initialisiert (Initialisierung).
2.  `i < 5;`: Die Bedingung wird geprüft. Da 0 kleiner als 5 ist, ist die Bedingung `true`.
3.  Der Codeblock `{ cout << i << "\n"; }` wird ausgeführt. Der Wert von `i` (0) wird ausgegeben.
4.  `i++;`: Der Wert von `i` wird um 1 erhöht (Inkrement). `i` ist nun 1.
5.  Die Schritte 2-4 werden wiederholt. Die Schleife läuft so lange, bis `i` den Wert 5 erreicht. Dann ist die Bedingung `i < 5` `false`, und die Schleife wird beendet.

### Ein weiteres Beispiel mit anderer Schrittweite:

```c++
#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i <= 10; i = i + 2) {
    cout << i << "\n";
  }
    return 0;
}
```

**Ausgabe:**

```
0
2
4
6
8
10
```

In diesem Beispiel wird `i` in jedem Schritt um 2 erhöht.

-------------

## C++ Verschachtelte Schleifen (Nested Loops)

Eine verschachtelte Schleife ist eine Schleife innerhalb einer anderen Schleife. Die innere Schleife wird vollständig für jede Iteration der äußeren Schleife ausgeführt.

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
  // Äußere Schleife
  for (int i = 1; i <= 2; ++i) {
    cout << "Äußere Schleife: " << i << "\n"; // Wird 2 Mal ausgeführt

    // Innere Schleife
    for (int j = 1; j <= 3; ++j) {
      cout << " Innere Schleife: " << j << "\n"; // Wird 6 Mal ausgeführt (2 * 3)
    }
  }
    return 0;
}
```

**Ausgabe:**

```
Äußere Schleife: 1
 Innere Schleife: 1
 Innere Schleife: 2
 Innere Schleife: 3
Äußere Schleife: 2
 Innere Schleife: 1
 Innere Schleife: 2
 Innere Schleife: 3
```

**Erklärung:**

Die äußere Schleife läuft von `i = 1` bis `i = 2` (2 Iterationen). Für jede dieser Iterationen läuft die innere Schleife von `j = 1` bis `j = 3` (3 Iterationen). Dadurch wird der Code in der inneren Schleife insgesamt 2 * 3 = 6 Mal ausgeführt.

-------------

## C++ Bereichsbasierte `for`-Schleife (Range-based for loop) / `foreach`-Schleife

Die bereichsbasierte `for`-Schleife (oft auch als `foreach`-Schleife bezeichnet) wurde in C++11 eingeführt und dient zum einfachen Durchlaufen von Containern wie Arrays, Vektoren oder anderen iterierbaren Objekten.

### Syntax:

```c++
for (Datentyp Variable : Container) {
  // Codeblock, der für jedes Element im Container ausgeführt wird
}
```

**Erläuterung:**

*   **Datentyp:** Der Datentyp der Elemente im Container.
*   **Variable:** Eine Variable, die den Wert des aktuellen Elements in jeder Iteration annimmt.
*   **Container:** Der Container (z.B. Array, Vektor), der durchlaufen werden soll.

### Beispiel mit Array:

```c++
#include <iostream>

using namespace std;

int main() {
  int meineZahlen[5] = {10, 20, 30, 40, 50};
  for (int zahl : meineZahlen) {
    cout << zahl << "\n";
  }
    return 0;
}
```

**Ausgabe:**

```
10
20
30
40
50
```

**Erklärung:**

Die Schleife iteriert über jedes Element im Array `meineZahlen`. In jeder Iteration wird der Wert des aktuellen Elements der Variablen `zahl` zugewiesen, und der Codeblock innerhalb der Schleife wird ausgeführt.

### Beispiel mit `std::vector`:

```c++
#include <iostream>
#include <vector>

using namespace std;

int main() {
    std::vector<int> zahlen = {1, 2, 3, 4, 5};
    for (int zahl : zahlen) {
        std::cout << zahl << " ";
    }
    std::cout << std::endl;
    return 0;
}
```

Die bereichsbasierte `for`-Schleife ist deutlich einfacher und lesbarer als die traditionelle `for`-Schleife, wenn es nur darum geht, alle Elemente eines Containers zu durchlaufen. Sie vermeidet auch potenzielle Fehler wie Indexüberschreitungen.

## C++ `break` und `continue`

Die Schlüsselwörter `break` und `continue` sind wichtige Kontrollanweisungen, die das Verhalten von Schleifen in C++ beeinflussen.

## C++ `break`

Das `break`-Schlüsselwort wird verwendet, um eine Schleife (oder eine `switch`-Anweisung) *sofort* zu verlassen, unabhängig davon, ob die Schleifenbedingung noch erfüllt ist. Die Ausführung des Programms wird mit der Anweisung fortgesetzt, die *nach* der Schleife folgt.

### Beispiel mit `for`-Schleife:

```c++
#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break; // Die Schleife wird beendet, wenn i gleich 4 ist
    }
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
```

**Erklärung:**

Die Schleife sollte normalerweise von 0 bis 9 laufen. Wenn `i` jedoch den Wert 4 erreicht, wird die `break`-Anweisung ausgeführt, und die Schleife wird sofort beendet. Daher werden nur die Zahlen 0 bis 3 ausgegeben.

## C++ `continue`

Das `continue`-Schlüsselwort wird verwendet, um den *aktuellen Durchlauf* einer Schleife abzubrechen und mit dem *nächsten Durchlauf* fortzufahren. Die restlichen Anweisungen im aktuellen Schleifenblock werden übersprungen. Die Schleifenbedingung wird erneut geprüft, um zu entscheiden, ob die Schleife fortgesetzt werden soll.

### Beispiel mit `for`-Schleife:

```c++
#include <iostream>

using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      continue; // Der aktuelle Durchlauf wird übersprungen, wenn i gleich 4 ist
    }
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
5
6
7
8
9
```

**Erklärung:**

Die Schleife läuft von 0 bis 9. Wenn `i` den Wert 4 erreicht, wird die `continue`-Anweisung ausgeführt. Dadurch wird der Rest des Codes im aktuellen Durchlauf übersprungen (die Ausgabe von 4), und die Schleife beginnt direkt mit dem nächsten Durchlauf (mit `i = 5`).

## `break` und `continue` in `while`-Schleifen

`break` und `continue` können auch in `while`- und `do/while`-Schleifen verwendet werden.

### `break`-Beispiel mit `while`-Schleife:

```c++
#include <iostream>

using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    cout << i << "\n";
    i++;
    if (i == 4) {
      break; // Die Schleife wird beendet, wenn i gleich 4 ist
    }
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
```

### `continue`-Beispiel mit `while`-Schleife:

```c++
#include <iostream>

using namespace std;

int main() {
  int i = 0;
  while (i < 10) {
    i++; // WICHTIG: i muss VOR dem continue inkrementiert werden, sonst Endlosschleife!
    if (i == 4) {
      continue; // Der aktuelle Durchlauf wird übersprungen, wenn i gleich 4 ist
    }
    cout << i << "\n";
  }
    return 0;
}
```

**Ausgabe:**

```
1
2
3
5
6
7
8
9
10
```

**Besonders wichtig beim `continue` in `while`-Schleifen:**

Im `continue`-Beispiel mit der `while`-Schleife ist es *entscheidend*, dass die Inkrementierung (`i++`) *vor* der `continue`-Anweisung steht. Andernfalls würde die Bedingung `i == 4` immer wieder erfüllt werden, und die Schleife würde in einer Endlosschleife hängen bleiben.

**Zusammenfassung:**

| Schlüsselwort | Beschreibung                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                 |
| :------------ | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `break`       | Beendet die *gesamte* Schleife sofort. Die Ausführung wird mit der ersten Anweisung *nach* der Schleife fortgesetzt.                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
| `continue`    | Beendet den *aktuellen Durchlauf* der Schleife und springt direkt zum Beginn des nächsten Durchlaufs (d.h. zur Bedingungsprüfung). Die restlichen Anweisungen im aktuellen Schleifenblock werden übersprungen. Bei `while`-Schleifen ist darauf zu achten, dass die Abbruchbedingung oder eine Variable, die die Abbruchbedingung beeinflusst, *vor* dem `continue` verändert wird, um Endlosschleifen zu vermeiden. |

`break` und `continue` bieten flexible Möglichkeiten, den Ablauf von Schleifen zu steuern und sind wichtige Werkzeuge für jeden C++-Programmierer. Sie können verwendet werden, um komplexe Logik in Schleifen zu implementieren und den Code effizienter zu gestalten.

## C++ Mathematik

C++ bietet zahlreiche Funktionen, mit denen du mathematische Operationen mit Zahlen durchführen kannst.

## `max()` und `min()`

Die Funktion `max(x, y)` kann verwendet werden, um den größeren Wert von `x` und `y` zu ermitteln:

### Beispiel:

```c++
#include <iostream>
#include <algorithm> // Für max und min

using namespace std;

int main() {
    cout << max(5, 10) << endl; // Gibt 10 aus
    return 0;
}
```

Und die Funktion `min(x, y)` kann verwendet werden, um den kleineren Wert von `x` und `y` zu finden:

### Beispiel:

```c++
#include <iostream>
#include <algorithm> // Für max und min

using namespace std;

int main() {
    cout << min(5, 10) << endl; // Gibt 5 aus
    return 0;
}
```

**Wichtiger Hinweis:** Die Funktionen `max()` und `min()` sind in der Header-Datei `<algorithm>` definiert (nicht in `<cmath>`).

## Die C++ `<cmath>`-Bibliothek

Weitere mathematische Funktionen wie `sqrt()` (Quadratwurzel), `round()` (Runden einer Zahl), `log()` (natürlicher Logarithmus), `pow()` (Potenzierung) und viele mehr findest du in der Header-Datei `<cmath>`:

### Beispiel:

```c++
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    cout << sqrt(64) << endl;    // Gibt 8 aus (Quadratwurzel von 64)
    cout << round(2.6) << endl;   // Gibt 3 aus (2.6 gerundet)
    cout << log(2) << endl;     // Gibt den natürlichen Logarithmus von 2 aus
    cout << pow(2, 3) << endl;   // Gibt 8 aus (2 hoch 3)
    cout << floor(2.9) << endl;  // Gibt 2 aus (Abrunden)
    cout << ceil(2.1) << endl;   // Gibt 3 aus (Aufrunden)
    return 0;
}
```

Hier eine Übersicht einiger wichtiger Funktionen aus `<cmath>`:

| Funktion     | Beschreibung                                                                                                                                                                                                                                                                                            | Beispiel                               |
| :----------- | :----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | :------------------------------------- |
| `sqrt(x)`    | Berechnet die Quadratwurzel von `x`.                                                                                                                                                                                                                                                                  | `sqrt(25)` ergibt 5.                 |
| `pow(x, y)`  | Berechnet `x` hoch `y` (x<sup>y</sup>).                                                                                                                                                                                                                                                                  | `pow(2, 3)` ergibt 8.                 |
| `exp(x)`     | Berechnet e hoch `x` (e<sup>x</sup>), wobei e die Eulersche Zahl (ca. 2.71828) ist.                                                                                                                                                                                                                          | `exp(1)` ergibt ca. 2.71828.          |
| `log(x)`     | Berechnet den natürlichen Logarithmus (Logarithmus zur Basis e) von `x`.                                                                                                                                                                                                                                 | `log(2.71828)` ergibt ca. 1.           |
| `log10(x)`   | Berechnet den Logarithmus zur Basis 10 von `x`.                                                                                                                                                                                                                                                        | `log10(100)` ergibt 2.                |
| `ceil(x)`    | Rundet `x` auf die nächste *höhere* Ganzzahl auf.                                                                                                                                                                                                                                                         | `ceil(2.1)` ergibt 3.                 |
| `floor(x)`   | Rundet `x` auf die nächste *niedrigere* Ganzzahl ab.                                                                                                                                                                                                                                                       | `floor(2.9)` ergibt 2.                |
| `round(x)`   | Rundet `x` auf die nächste Ganzzahl. Bei Werten genau in der Mitte (z.B. 2.5) wird auf die nächste gerade Zahl gerundet (z.B. `round(2.5)` ergibt 2, `round(3.5)` ergibt 4 – *Banker's Rounding*).                                                                                                              | `round(2.6)` ergibt 3, `round(2.4)` ergibt 2, `round(2.5)` ergibt 2. |
| `abs(x)`     | Berechnet den Absolutwert von `x` (für Ganzzahlen). Für Fließkommazahlen verwende `fabs()`.                                                                                                                                                                                                          | `abs(-5)` ergibt 5.                 |
| `fabs(x)`    | Berechnet den Absolutwert von `x` (für Fließkommazahlen).                                                                                                                                                                                                                                              | `fabs(-5.2)` ergibt 5.2.              |
| `sin(x)`     | Berechnet den Sinus von `x` (im Bogenmaß).                                                                                                                                                                                                                                                                  | `sin(0)` ergibt 0.                   |
| `cos(x)`     | Berechnet den Kosinus von `x` (im Bogenmaß).                                                                                                                                                                                                                                                                | `cos(0)` ergibt 1.                   |
| `tan(x)`     | Berechnet den Tangens von `x` (im Bogenmaß).                                                                                                                                                                                                                                                              | `tan(0)` ergibt 0.                   |
| `asin(x)`    | Berechnet den Arkussinus von `x` (im Bogenmaß).                                                                                                                                                                                                                                                              | `asin(0)` ergibt 0.                   |
| `acos(x)`    | Berechnet den Arkuskosinus von `x` (im Bogenmaß).                                                                                                                                                                                                                                                            | `acos(1)` ergibt 0.                   |
| `atan(x)`    | Berechnet den Arkustangens von `x` (im Bogenmaß).                                                                                                                                                                                                                                                            | `atan(0)` ergibt 0.                   |
| `atan2(y, x)` | Berechnet den Arkustangens von `y/x` unter Berücksichtigung der Vorzeichen von `x` und `y`, um den korrekten Quadranten zu bestimmen (im Bogenmaß). Dies ist nützlich, um den Winkel zwischen der x-Achse und dem Punkt (x, y) in der Ebene zu berechnen.                                                              | `atan2(1, 1)` ergibt π/4 (45 Grad).   |

**Wichtige Punkte:**

*   **Bogenmaß:** Trigonometrische Funktionen (`sin()`, `cos()`, `tan()`, `asin()`, `acos()`, `atan()`, `atan2()`) arbeiten mit Winkeln im Bogenmaß (Radiant). Um Grad in Bogenmaß umzuwandeln, kannst du die Formel `Bogenmaß = Grad * π / 180` verwenden (wobei π ≈ 3.14159).
*   **Fehlerbehandlung:** Einige mathematische Funktionen können zu Fehlern führen (z.B. `sqrt()` für negative Zahlen oder `log()` für 0). Es ist ratsam, Eingabewerte zu überprüfen, um solche Fehler zu vermeiden.
*   **Fließkommazahlen:** Bei Berechnungen mit Fließkommazahlen (`float` und `double`) solltest du dir der begrenzten Genauigkeit bewusst sein. Rundungsfehler können auftreten.

## Vollständige Mathe-Referenz

Eine vollständige Referenz der mathematischen Funktionen findest du auf cppreference.com oder in der Dokumentation deines C++-Compilers. Dort findest du detaillierte Beschreibungen aller Funktionen, ihrer Parameter und Rückgabewerte sowie Informationen zu möglichen Fehlern.

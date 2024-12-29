## C++ Rekursion

### Rekursion

Rekursion ist eine Programmiertechnik, bei der sich eine Funktion selbst aufruft. Dadurch können komplexe Probleme in kleinere, leichter lösbare Teilprobleme zerlegt werden.

Rekursion kann anfangs etwas schwierig zu verstehen sein, aber durch Übung und das Betrachten von Beispielen wird das Konzept klarer.

### Beispiel für Rekursion (Summe eines Zahlenbereichs)

Das Addieren zweier Zahlen ist einfach, aber das Addieren eines ganzen Zahlenbereichs kann komplexer sein. Im folgenden Beispiel wird Rekursion verwendet, um die Summe eines Zahlenbereichs zu berechnen, indem das Problem in wiederholte Additionen zweier Zahlen zerlegt wird:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int summe(int k) {
    if (k > 0) {
        return k + summe(k - 1); // Rekursiver Aufruf
    } else {
        return 0; // Basisfall
    }
}

int main() {
    int ergebnis = summe(10);
    cout << ergebnis << "\n"; // Ausgabe: 55
    return 0;
}
```

#### Erläuterung des Beispiels

Die Funktion `summe()` addiert den Parameter `k` zur Summe aller Zahlen, die kleiner als `k` sind, und gibt das Ergebnis zurück. Der entscheidende Punkt ist der **Basisfall**: Wenn `k` gleich 0 ist, ruft sich die Funktion nicht mehr selbst auf, sondern gibt direkt 0 zurück. Dieser Basisfall ist essenziell, um eine unendliche Rekursion zu verhindern.

Der Ablauf bei `summe(10)` lässt sich wie folgt veranschaulichen:

```
summe(10) = 10 + summe(9)
summe(9)  =  9 + summe(8)
summe(8)  =  8 + summe(7)
...
summe(1)  =  1 + summe(0)
summe(0)  =  0 (Basisfall)

=> 10 + 9 + 8 + 7 + 6 + 5 + 4 + 3 + 2 + 1 + 0 = 55
```

Jeder rekursive Aufruf speichert seinen Zustand (Parameterwerte, Rücksprungadresse) auf dem Stack. Sobald der Basisfall erreicht ist, werden die Ergebnisse zurückgegeben und die Aufrufe vom Stack abgebaut, bis das Endergebnis in `main()` vorliegt.

### Wichtige Hinweise zur Rekursion

*   **Basisfall:** Jede rekursive Funktion *muss* einen Basisfall haben, der die Rekursion beendet. Andernfalls kommt es zu einer **unendlichen Rekursion**, die zu einem **Stack Overflow** führt (der Stack, auf dem die Funktionsaufrufe gespeichert werden, läuft über und das Programm stürzt ab).

*   **Rekursiver Schritt:** Der rekursive Aufruf muss das Problem in Richtung des Basisfalls verkleinern. Im obigen Beispiel wird `k` bei jedem Aufruf um 1 reduziert, bis der Basisfall `k == 0` erreicht ist.

*   **Performance:** Rekursion kann in manchen Fällen ineffizient sein, da jeder Funktionsaufruf zusätzlichen Overhead verursacht (Speicher für Parameter, Rücksprungadresse usw.). In solchen Fällen kann eine iterative Lösung (mit Schleifen) performanter sein.

*   **Stack Overflow:** Eine zu tiefe Rekursion führt zu einem Stack Overflow. Dies ist ein häufiges Problem bei der Rekursion.

> Der Entwickler sollte bei der Rekursion sehr vorsichtig sein, da es leicht passieren kann, dass er eine Funktion schreibt, die niemals endet (kein korrekter Basisfall) oder die zu viel Speicher (Stack Overflow bei zu tiefer Rekursion) oder Prozessorleistung (durch den Overhead vieler Funktionsaufrufe) verbraucht. Wenn die Rekursion jedoch richtig implementiert ist, kann sie ein sehr effizienter und mathematisch eleganter Ansatz für die Programmierung sein, insbesondere für Probleme, die sich natürlich rekursiv definieren lassen (z.B. Baumstrukturen, Traversierungen, mathematische Funktionen wie die Fakultät).

### Beispiel: Fakultät (Alternative zur Summe)

Ein weiteres klassisches Beispiel für Rekursion ist die Berechnung der Fakultät einer Zahl:

```c++
#include <iostream>
using namespace std;

int fakultaet(int n) {
    if (n == 0) {
        return 1; // Basisfall: 0! = 1
    } else {
        return n * fakultaet(n - 1); // Rekursiver Aufruf
    }
}

int main() {
    cout << "5! = " << fakultaet(5) << "\n"; // Ausgabe: 5! = 120
    return 0;
}
```

Dieses Beispiel verdeutlicht die Struktur einer rekursiven Funktion mit Basisfall und rekursivem Schritt.

Zusammenfassend lässt sich sagen, dass Rekursion ein mächtiges Werkzeug ist, das jedoch mit Bedacht eingesetzt werden sollte. Achte immer auf einen korrekten Basisfall und vermeide unnötig tiefe Rekursionen, um Stack Overflows zu verhindern. Überlege dir auch, ob eine iterative Lösung in Bezug auf die Performance vorteilhafter sein könnte.

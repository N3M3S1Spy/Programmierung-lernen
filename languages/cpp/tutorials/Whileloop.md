## C++ Schleifen

Schleifen ermöglichen es, einen Codeblock wiederholt auszuführen, solange eine bestimmte Bedingung erfüllt ist. Sie sind ein grundlegendes Konzept in der Programmierung und helfen, sich wiederholende Aufgaben effizient zu erledigen, Fehler zu vermeiden und den Code übersichtlicher zu gestalten.

## C++ `while`-Schleife

Die `while`-Schleife führt einen Codeblock so lange aus, wie eine angegebene Bedingung `true` ist. Die Bedingung wird *vor* jeder Ausführung des Codeblocks geprüft.

### Syntax:

```c++
while (Bedingung) {
  // Codeblock, der ausgeführt wird, solange die Bedingung wahr ist
}
```

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
  int i = 0;
  while (i < 5) {
    cout << i << "\n";
    i++; // WICHTIG: Die Variable i muss inkrementiert werden, um eine Endlosschleife zu vermeiden!
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

**Erklärung:**

1.  Die Variable `i` wird mit 0 initialisiert.
2.  Die `while`-Schleife prüft, ob `i` kleiner als 5 ist.
3.  Wenn die Bedingung `i < 5` wahr ist, wird der Codeblock innerhalb der Schleife ausgeführt.
4.  Innerhalb des Codeblocks wird der Wert von `i` ausgegeben und anschließend um 1 erhöht (`i++`).
5.  Die Schritte 2-4 werden wiederholt, solange die Bedingung `i < 5` wahr ist.
6.  Sobald `i` den Wert 5 erreicht, ist die Bedingung `i < 5` falsch, und die Schleife wird beendet.

>   **Wichtiger Hinweis:** Es ist *äußerst wichtig*, dass die Bedingung innerhalb der Schleife irgendwann `false` wird, sonst entsteht eine *Endlosschleife*, die das Programm zum Absturz bringen oder unendlich lange laufen lassen kann. Stelle sicher, dass du die in der Bedingung verwendete Variable innerhalb der Schleife veränderst (z.B. durch Inkrementieren, Dekrementieren oder eine andere Zuweisung).

-----------

## C++ `do/while`-Schleife

Die `do/while`-Schleife ist eine Variante der `while`-Schleife. Der wesentliche Unterschied besteht darin, dass der Codeblock *mindestens einmal* ausgeführt wird, bevor die Bedingung geprüft wird. Die Bedingung wird *nach* jeder Ausführung des Codeblocks geprüft.

### Syntax:

```c++
do {
  // Codeblock, der mindestens einmal ausgeführt wird
} while (Bedingung); // Semikolon am Ende beachten!
```

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
  int i = 0;
  do {
    cout << i << "\n";
    i++; // WICHTIG: Die Variable i muss inkrementiert werden, um eine Endlosschleife zu vermeiden!
  } while (i < 5); // Semikolon am Ende beachten!
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

**Erklärung:**

1.  Die Variable `i` wird mit 0 initialisiert.
2.  Der Codeblock innerhalb der `do`-Schleife wird *immer* zuerst ausgeführt.
3.  Innerhalb des Codeblocks wird der Wert von `i` ausgegeben und anschließend um 1 erhöht (`i++`).
4.  *Nach* der Ausführung des Codeblocks wird die Bedingung `i < 5` geprüft.
5.  Wenn die Bedingung `true` ist, werden die Schritte 2-4 wiederholt.
6.  Wenn die Bedingung `false` ist, wird die Schleife beendet.

### Beispiel mit anfänglich falscher Bedingung:

Um den Unterschied zwischen `while` und `do/while` deutlich zu machen, betrachten wir ein Beispiel, bei dem die Bedingung von Anfang an `false` ist:

**`while`-Schleife:**

```c++
int i = 5;
while (i < 5) {
  cout << "Diese Zeile wird nicht ausgegeben.\n";
}
```

**`do/while`-Schleife:**

```c++
int i = 5;
do {
  cout << "Diese Zeile wird einmal ausgegeben.\n";
} while (i < 5);
```

**Zusammenfassung der Unterschiede:**

| Eigenschaft        | `while`-Schleife                                   | `do/while`-Schleife                                |
| :------------------ | :------------------------------------------------- | :-------------------------------------------------- |
| Bedingungsprüfung | Vor der Ausführung des Codeblocks                   | Nach der Ausführung des Codeblocks                  |
| Ausführung         | Codeblock wird nur ausgeführt, wenn die Bedingung wahr ist | Codeblock wird mindestens einmal ausgeführt          |
| Semikolon          | Kein Semikolon nach der schließenden Klammer `}`     | Semikolon nach der schließenden Klammer `}` und `while(Bedingung);` |

Die `do/while`-Schleife ist besonders nützlich, wenn du sicherstellen musst, dass ein Codeblock mindestens einmal ausgeführt wird, z.B. bei der Benutzereingabe, bei der du den Benutzer mindestens einmal nach einer Eingabe fragen möchtest.

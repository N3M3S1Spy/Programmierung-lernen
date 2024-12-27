## C++ `switch`-Anweisung

Die `switch`-Anweisung wird verwendet, um einen von mehreren Codeblöcken auszuwählen, der ausgeführt werden soll. Sie ist eine Alternative zu langen `if-else-if`-Ketten und macht den Code oft übersichtlicher.

### Syntax:

```c++
switch (Ausdruck) {
  case Wert1:
    // Codeblock 1
    break;
  case Wert2:
    // Codeblock 2
    break;
  case WertN:
    // Codeblock N
    break;
  default:
    // Standard-Codeblock (optional)
}
```

**Funktionsweise:**

1.  Der `Ausdruck` im `switch` wird einmal ausgewertet.
2.  Der Wert des `Ausdrucks` wird mit den Werten jeder `case`-Marke verglichen.
3.  Wenn eine Übereinstimmung gefunden wird (`Ausdruck == Wert`), wird die Ausführung bei dieser `case`-Marke fortgesetzt.
4.  Die Ausführung geht weiter, bis ein `break`-Schlüsselwort erreicht wird oder das Ende des `switch`-Blocks erreicht ist.
5.  Das `default`-Schlüsselwort (optional) gibt einen Codeblock an, der ausgeführt wird, wenn keine der `case`-Marken übereinstimmt.

**Wichtige Punkte:**

*   Der `Ausdruck` muss einen ganzzahligen Typ (z.B. `int`, `char`, `enum`) haben oder in einen solchen konvertierbar sein.
*   Die `case`-Werte müssen konstante Ausdrücke sein (d.h. sie müssen zur Kompilierzeit bekannt sein).
*   Das `break`-Schlüsselwort ist entscheidend, um zu verhindern, dass die Ausführung in den nächsten `case`-Block "durchfällt" (Fall-Through).

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    int tag = 4;

    switch (tag) {
        case 1:
            cout << "Montag" << endl;
            break;
        case 2:
            cout << "Dienstag" << endl;
            break;
        case 3:
            cout << "Mittwoch" << endl;
            break;
        case 4:
            cout << "Donnerstag" << endl;
            break;
        case 5:
            cout << "Freitag" << endl;
            break;
        case 6:
            cout << "Samstag" << endl;
            break;
        case 7:
            cout << "Sonntag" << endl;
            break;
        default:
            cout << "Ungültiger Tag" << endl;
    } // Gibt "Donnerstag" aus (für tag = 4)

    return 0;
}
```

## Das `break`-Schlüsselwort

Wenn C++ auf ein `break`-Schlüsselwort innerhalb eines `case`-Blocks stößt, wird die Ausführung des `switch`-Blocks sofort beendet.

Dies verhindert das sogenannte "Fall-Through", bei dem die Ausführung in den nächsten `case`-Block übergeht, auch wenn dessen Bedingung nicht erfüllt ist.

**Beispiel für Fall-Through (ohne `break`):**

```c++
#include <iostream>

using namespace std;

int main() {
    int x = 2;
    switch (x) {
        case 1:
            cout << "Fall 1" << endl;
        case 2:
            cout << "Fall 2" << endl;
        case 3:
            cout << "Fall 3" << endl;
    } // Gibt "Fall 2" und "Fall 3" aus!

    return 0;
}
```

In diesem Beispiel würde, wenn `x` den Wert 2 hat, sowohl "Fall 2" als auch "Fall 3" ausgegeben werden, da nach der Ausführung von `case 2` die Ausführung ohne `break` in `case 3` weitergeht.

## Das `default`-Schlüsselwort

Das `default`-Schlüsselwort (optional) gibt einen Codeblock an, der ausgeführt wird, wenn keine der `case`-Marken mit dem `Ausdruck` übereinstimmt. Es sollte üblicherweise am Ende des `switch`-Blocks stehen.

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    int tag = 10; // Ungültiger Tag

    switch (tag) {
        case 6:
            cout << "Heute ist Samstag" << endl;
            break;
        case 7:
            cout << "Heute ist Sonntag" << endl;
            break;
        default:
            cout << "Ungültiger Tag" << endl;
    } // Gibt "Ungültiger Tag" aus

    return 0;
}
```

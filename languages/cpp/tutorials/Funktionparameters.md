## C++ Funktionsparameter

### Parameter und Argumente

Informationen können in Form von Parametern an Funktionen übergeben werden. Parameter dienen innerhalb der Funktion als Variablen.

Die Parameter werden in den runden Klammern `()` nach dem Funktionsnamen angegeben. Du kannst beliebig viele Parameter hinzufügen, indem du sie durch Kommas trennst. Jeder Parameter benötigt eine Typangabe.

### Syntax:

```c++
void funktionsName(Datentyp1 parameter1, Datentyp2 parameter2, Datentyp3 parameter3) {
    // Code, der ausgeführt werden soll
}
```

Das folgende Beispiel zeigt eine Funktion, die einen `string` namens `fname` als Parameter entgegennimmt. Beim Aufruf der Funktion übergeben wir einen Vornamen (ein Argument), der innerhalb der Funktion verwendet wird, um den vollständigen Namen auszugeben:

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

void meineFunktion(string fname) {
    cout << fname << " Refsnes\n";
}

int main() {
    meineFunktion("Liam");   // Argument: "Liam"
    meineFunktion("Jenny");  // Argument: "Jenny"
    meineFunktion("Anja");   // Argument: "Anja"
    return 0;
}

// Ausgabe:
// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
```

> Der Unterschied zwischen **Parameter** und **Argument** ist wichtig: Der **Parameter** ist die Variable in der *Funktionsdefinition*, die den übergebenen Wert entgegennimmt (z.B. `fname`). Das **Argument** ist der tatsächliche Wert, der beim *Aufruf* der Funktion übergeben wird (z.B. `"Liam"`).

-----

## C++ Standardparameterwerte

### Standardparameterwert

Du kannst Parametern Standardwerte zuweisen, indem du das Gleichheitszeichen (`=`) verwendest. Wenn die Funktion ohne ein entsprechendes Argument aufgerufen wird, wird der Standardwert verwendet.

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

void meineFunktion(string land = "Norwegen") {
    cout << land << "\n";
}

int main() {
    meineFunktion("Schweden");
    meineFunktion("Indien");
    meineFunktion();       // Verwendet den Standardwert "Norwegen"
    meineFunktion("USA");
    return 0;
}

// Ausgabe:
// Schweden
// Indien
// Norwegen
// USA
```

> Ein Parameter mit einem Standardwert wird oft als "**optionaler Parameter**" bezeichnet. Im obigen Beispiel ist `land` ein optionaler Parameter, und `"Norwegen"` ist sein Standardwert. Optionalen Parametern müssen immer die letzten Parameter in der Parameterliste sein.

-----

## C++ Mehrere Parameter

### Mehrere Parameter

Eine Funktion kann beliebig viele Parameter entgegennehmen. Die Parameter werden durch Kommas getrennt.

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

void meineFunktion(string fname, int alter) {
    cout << fname << " Refsnes. " << alter << " Jahre alt.\n";
}

int main() {
    meineFunktion("Liam", 3);
    meineFunktion("Jenny", 14);
    meineFunktion("Anja", 30);
    return 0;
}

// Ausgabe:
// Liam Refsnes. 3 Jahre alt.
// Jenny Refsnes. 14 Jahre alt.
// Anja Refsnes. 30 Jahre alt.
```

> Bei der Verwendung mehrerer Parameter müssen beim Funktionsaufruf die Argumente in der *gleichen Reihenfolge* und mit den *entsprechenden Datentypen* übergeben werden, wie sie in der Funktionsdefinition deklariert sind. Die Anzahl der Argumente muss mit der Anzahl der Parameter übereinstimmen.

-----

## C++ Das `return`-Schlüsselwort

### Rückgabewerte

Das Schlüsselwort `void` bedeutet, dass die Funktion keinen Wert zurückgibt. Wenn eine Funktion einen Wert zurückgeben soll, muss anstelle von `void` der Datentyp des Rückgabewerts angegeben werden (z.B. `int`, `string`, `double` usw.). Innerhalb der Funktion wird das Schlüsselwort `return` verwendet, um den Wert zurückzugeben.

### Beispiel:

```c++
#include <iostream>
using namespace std;

int meineFunktion(int x) {
    return 5 + x;
}

int main() {
    cout << meineFunktion(3); // Ausgabe: 8
    return 0;
}
```

Dieses Beispiel gibt die Summe einer Funktion mit *einem* Parameter zurück.

### Beispiel mit zwei Parametern:

```c++
#include <iostream>
using namespace std;

int meineFunktion(int x, int y) {
    return x + y;
}

int main() {
    cout << meineFunktion(5, 3); // Ausgabe: 8
    return 0;
}
```

Das Ergebnis kann auch in einer Variablen gespeichert werden:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int meineFunktion(int x, int y) {
    return x + y;
}

int main() {
    int z = meineFunktion(5, 3);
    cout << z; // Ausgabe: 8
    return 0;
}
```

-----

## C++ Funktionen - Übergabe durch Referenz

### Übergabe durch Referenz

In den bisherigen Beispielen wurden Argumente *durch Wert* an die Funktionen übergeben. Das bedeutet, dass die Funktion eine *Kopie* des Arguments erhält. Änderungen an den Parametern innerhalb der Funktion haben keine Auswirkungen auf die Originalvariablen außerhalb der Funktion.

Bei der *Übergabe durch Referenz* wird hingegen eine *Referenz* (ein Alias) auf die Originalvariable übergeben. Änderungen am Parameter innerhalb der Funktion wirken sich direkt auf die Originalvariable aus. Eine Referenz wird durch das `&`-Symbol vor dem Parameternamen deklariert.

### Beispiel:

```c++
#include <iostream>
using namespace std;

void tausche(int &x, int &y) { // Übergabe durch Referenz
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int a = 10;
    int b = 20;

    cout << "Vor dem Tausch: a = " << a << ", b = " << b << "\n";
    tausche(a, b); // a und b werden getauscht
    cout << "Nach dem Tausch: a = " << a << ", b = " << b << "\n";
    return 0;
}

// Ausgabe:
// Vor dem Tausch: a = 10, b = 20
// Nach dem Tausch: a = 20, b = 10
```

-----

## C++ Array an eine Funktion übergeben

### Arrays als Funktionsparameter übergeben

Auch Arrays können an Funktionen übergeben werden. Da Arrays im Wesentlichen als Pointer auf ihr erstes Element behandelt werden, werden sie *immer* durch Referenz übergeben (genauer gesagt, es wird ein Pointer übergeben). Änderungen am Array innerhalb der Funktion wirken sich daher auf das Originalarray aus.

### Beispiel:

```c++
#include <iostream>
using namespace std;

void printArray(int myNumbers[], int arraySize) { // Array und Größe als Parameter
    for (int i = 0; i < arraySize; i++) {
        cout << myNumbers[i] << " ";
    }
    cout << "\n";
}

int main() {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    printArray(myNumbers, 5); // Übergabe des Arrays und seiner Größe
    return 0;
}

// Ausgabe:
// 10 20 30 40 50
```

> **Erläuterung:**

> Die Funktion `printArray` erhält das Array `myNumbers` und seine Größe `arraySize` als Parameter. Die Größe des Arrays muss explizit übergeben werden, da die Funktion selbst die Größe des übergebenen Arrays nicht ermitteln kann. Innerhalb der Funktion wird das Array mit einer `for`-Schleife durchlaufen und die Elemente ausgegeben.

> Beim Aufruf der Funktion in `main()` wird nur der Name des Arrays (`myNumbers`) als Argument übergeben. Die vollständige Deklaration des Arrays ist im Funktionsparameter (`int myNumbers[]`) notwendig, wobei die Angabe der Arraygröße in den eckigen Klammern optional ist (solange die Größe separat übergeben wird). Es ist jedoch üblich und empfehlenswert, die Größe mit zu übergeben, um Fehler zu vermeiden.

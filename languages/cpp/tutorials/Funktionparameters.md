## C++ Funktionsparameter

### Parameter und Argumente

Informationen können in Form von Parametern an Funktionen übergeben werden. Parameter fungieren innerhalb der Funktion als Variablen.

Die Parameter werden in den runden Klammern `()` nach dem Funktionsnamen angegeben. Du kannst beliebig viele Parameter hinzufügen, indem du sie durch Kommas trennst:

### Syntax:

```c++
void funktionsName(ParameterTyp1 parameter1, ParameterTyp2 parameter2, ParameterTyp3 parameter3) {
    // Code, der ausgeführt werden soll
}
```

Es ist wichtig, für jeden Parameter den Datentyp anzugeben (z.B. `int`, `string`, `double`, etc.).

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

> Wenn ein Wert an die Funktion übergeben wird, spricht man von einem **Argument**. Die Variable, die diesen Wert innerhalb der Funktion entgegennimmt, wird **Parameter** genannt. Im obigen Beispiel ist `fname` der **Parameter**, während `"Liam"`, `"Jenny"` und `"Anja"` die **Argumente** sind. Es ist wichtig, diese beiden Begriffe korrekt zu verwenden, auch wenn sie im alltäglichen Sprachgebrauch oft synonym verwendet werden.

Es folgt ein Beispiel mit mehreren Parametern:

```c++
#include <iostream>
#include <string>
using namespace std;

void volleNamen(string vorname, string nachname) {
    cout << vorname << " " << nachname << "\n";
}

int main() {
    volleNamen("Max", "Mustermann"); // Argumente: "Max", "Mustermann"
    volleNamen("Erika", "Müller");    // Argumente: "Erika", "Müller"
    return 0;
}

// Ausgabe:
// Max Mustermann
// Erika Müller
```

In diesem Beispiel nimmt die Funktion `volleNamen` zwei Parameter vom Typ `string` entgegen: `vorname` und `nachname`. Beim Aufruf der Funktion müssen zwei entsprechende Argumente übergeben werden.

Es ist wichtig, dass die Anzahl und die Typen der übergebenen Argumente mit den in der Funktionsdefinition deklarierten Parametern übereinstimmen. Andernfalls resultiert ein Kompilierfehler.

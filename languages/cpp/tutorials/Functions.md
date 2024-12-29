## C++ Funktionen

Eine Funktion ist ein Codeblock, der nur ausgeführt wird, wenn er aufgerufen wird. Funktionen können Daten, sogenannte Parameter, entgegennehmen. Sie dienen der Ausführung spezifischer Aktionen und sind entscheidend für die Wiederverwendung von Code: Einmal definiert, können sie beliebig oft verwendet werden.

## Eine Funktion erstellen (Deklaration und Definition)

C++ stellt einige vordefinierte Funktionen bereit, wie z.B. `main()`, die zur Ausführung des Codes verwendet wird. Du kannst aber auch eigene Funktionen erstellen, um bestimmte Aufgaben zu erledigen.

Um eine Funktion zu erstellen (was sowohl die Deklaration als auch die Definition beinhaltet, sofern sie zusammen erfolgen), gibst du den Namen der Funktion an, gefolgt von runden Klammern `()`:

### Syntax:

```c++
void myFunction() {
    // Code, der ausgeführt werden soll
}
```

#### Erläuterung:

*   `myFunction()` ist der Name der Funktion.
*   `void` bedeutet, dass die Funktion keinen Rückgabewert hat. Mehr zu Rückgabewerten später.
*   Innerhalb der geschweiften Klammern `{}` (dem Funktionskörper) steht der Code, der definiert, was die Funktion tun soll.

## Eine Funktion aufrufen

Deklarierte Funktionen werden nicht automatisch ausgeführt. Sie werden „für später“ gespeichert und erst ausgeführt, wenn sie aufgerufen werden.

Um eine Funktion aufzurufen, schreibst du den Namen der Funktion, gefolgt von zwei runden Klammern `()` und einem Semikolon `;`:

### Beispiel:

Aufruf von `myFunction()` innerhalb von `main()`:

```c++
#include <iostream>
using namespace std;

// Definition der Funktion
void myFunction() {
    cout << "I just got executed!";
}

int main() {
    myFunction(); // Aufruf der Funktion
    return 0;
}

// Ausgabe: I just got executed!
```

Eine Funktion kann mehrfach aufgerufen werden:

### Beispiel:

```c++
#include <iostream>
using namespace std;

void myFunction() {
    cout << "I just got executed!\n";
}

int main() {
    myFunction();
    myFunction();
    myFunction();
    return 0;
}

// Ausgabe:
// I just got executed!
// I just got executed!
// I just got executed!
```

## Funktionsdeklaration und -definition (getrennt)

Eine C++-Funktion besteht im Wesentlichen aus zwei Teilen:

*   **Deklaration (auch Funktionsprototyp genannt):** Gibt den Rückgabetyp, den Namen der Funktion und die Parameter (falls vorhanden) an.
*   **Definition:** Enthält den Code, der innerhalb der Funktion ausgeführt wird (den Funktionskörper).

Wenn Deklaration und Definition zusammen erfolgen, sieht das so aus:

```c++
void myFunction() { // Deklaration und Definition in einem
    // Der Funktionskörper (Definition)
}
```

**Wichtig:** Wenn eine benutzerdefinierte Funktion wie `myFunction()` *nach* der `main()`-Funktion definiert wird und keine vorherige Deklaration existiert, führt dies zu einem Kompilierfehler:

```c++
#include <iostream>
using namespace std;

int main() {
    myFunction(); // Fehler: myFunction wurde nicht deklariert
    return 0;
}

void myFunction() {
    cout << "I just got executed!";
}
```

Um diesen Fehler zu vermeiden, ist es möglich, die Deklaration und die Definition der Funktion zu trennen.

Oft siehst du C++-Programme, in denen die Funktionsdeklaration *vor* `main()` und die Funktionsdefinition *nach* `main()` steht. Dies verbessert die Übersichtlichkeit und Lesbarkeit des Codes:

### Beispiel:

```c++
#include <iostream>
using namespace std;

// Funktionsdeklaration (Prototyp)
void myFunction();

int main() {
    myFunction(); // Aufruf der Funktion
    return 0;
}

// Funktionsdefinition
void myFunction() {
    cout << "I just got executed!";
}
```

Diese Trennung von Deklaration und Definition ist besonders bei größeren Projekten wichtig, um den Code besser zu strukturieren und die Kompilierzeiten zu verkürzen. Die Deklaration informiert den Compiler über die Existenz der Funktion, während die Definition den tatsächlichen Code enthält.

# Steuerstrukturen in C++: Bedingte Anweisungen und Schleifen

### Erklärung der Struktur:
1. **Einführung**: Erklärt die Bedeutung und Nutzung von Steuerstrukturen.
2. **Bedingte Anweisungen**: Erklärung der `if`, `else if`, und `else`-Anweisungen, einschließlich eines Beispiels.
3. **Switch-Anweisung**: Detaillierte Erklärung der `switch`-Anweisung mit einem Beispiel.
4. **Schleifen**: Vorstellung der verschiedenen Schleifenarten in C++ (`for`, `while`, `do-while`) mit jeweiligen Beispielen.
5. **Zusammenfassung**: Zusammenfassung der besprochenen Steuerstrukturen.
6. **Übung**: Aufgaben zur Festigung des Gelernten.

In C++ sind **Steuerstrukturen** grundlegende Bausteine, um den Ablauf eines Programms zu steuern. Sie ermöglichen es dir, Entscheidungen zu treffen (mit **Bedingungen**) und Wiederholungen (mit **Schleifen**) zu erstellen.

In diesem Tutorial werden wir uns mit den wichtigsten Steuerstrukturen in C++ befassen: **If-Bedingungen**, **Switch-Anweisungen**, und **Schleifen** wie **for**, **while** und **do-while**.

## 1. Bedingte Anweisungen: `if`, `else if`, `else`

Die **if**-Anweisung ermöglicht es dir, bedingte Entscheidungen zu treffen. Wenn eine Bedingung wahr ist, wird ein bestimmter Block von Code ausgeführt. Andernfalls kannst du eine andere Anweisung ausführen.

### Grundstruktur der `if`-Anweisung:

```cpp
if (Bedingung) {
    // Code wird ausgeführt, wenn die Bedingung wahr ist
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int alter = 20;

    if (alter >= 18) {
        cout << "Du bist volljährig." << endl;  // Diese Zeile wird ausgeführt
    }

    return 0;
}
```

#### Erklärung:
- Wenn die Bedingung `alter >= 18` wahr ist, wird der Block in den geschweiften Klammern ausgeführt.

### `else if` und `else`:

Du kannst mehrere Bedingungen testen, indem du `else if` hinzufügst. Ein `else`-Block wird ausgeführt, wenn keine der Bedingungen zutrifft.

```cpp
#include <iostream>
using namespace std;

int main() {
    int alter = 16;

    if (alter >= 18) {
        cout << "Du bist volljährig." << endl;
    } else if (alter >= 16) {
        cout << "Du bist fast volljährig." << endl;
    } else {
        cout << "Du bist minderjährig." << endl;
    }

    return 0;
}
```

#### Erklärung:
- Wenn die erste Bedingung (`alter >= 18`) nicht erfüllt ist, wird die `else if`-Bedingung getestet. Falls keine Bedingung zutrifft, wird der `else`-Block ausgeführt.

## 2. Switch-Anweisung

Eine **Switch-Anweisung** ist eine Alternative zu mehreren `if`-Bedingungen, wenn du einen Wert mit vielen möglichen Optionen vergleichen musst.

### Grundstruktur der `switch`-Anweisung:

```cpp
switch (Ausdruck) {
    case Wert1:
        // Code für Wert1
        break;
    case Wert2:
        // Code für Wert2
        break;
    default:
        // Code, wenn keiner der Fälle zutrifft
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int tag = 3;

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
        default:
            cout << "Ungültiger Tag" << endl;
    }

    return 0;
}
```

#### Erklärung:
- In diesem Beispiel wird der Wert von `tag` mit den verschiedenen `case`-Werten verglichen. Wenn `tag` 3 ist, wird "Mittwoch" ausgegeben. Der `break`-Befehl beendet die `switch`-Anweisung.

## 3. Schleifen: Wiederholungen von Code

Schleifen ermöglichen es dir, einen Codeblock wiederholt auszuführen, solange eine Bedingung wahr ist. Es gibt drei Haupttypen von Schleifen in C++: **for**, **while** und **do-while**.

### `for`-Schleife

Die **for**-Schleife wird häufig verwendet, wenn du weißt, wie oft du den Code wiederholen möchtest.

### Grundstruktur der `for`-Schleife:

```cpp
for (Initialisierung; Bedingung; Inkrement) {
    // Code wird wiederholt ausgeführt
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 5; i++) {
        cout << "Wert von i: " << i << endl;
    }

    return 0;
}
```

#### Erklärung:
- Der `for`-Loop startet mit `i = 1`, prüft, ob `i <= 5` wahr ist, und führt den Code im Inneren der Schleife aus. Danach wird `i` um 1 erhöht (`i++`), und die Schleife wiederholt sich, bis die Bedingung falsch wird.

### `while`-Schleife

Die **while**-Schleife wiederholt einen Codeblock so lange, wie eine bestimmte Bedingung wahr ist.

### Grundstruktur der `while`-Schleife:

```cpp
while (Bedingung) {
    // Code wird wiederholt ausgeführt, solange die Bedingung wahr ist
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 5) {
        cout << "Wert von i: " << i << endl;
        i++;
    }

    return 0;
}
```

#### Erklärung:
- Die Schleife wiederholt sich, solange `i <= 5` wahr ist. Nach jedem Durchlauf wird `i` um 1 erhöht.

### `do-while`-Schleife

Die **do-while**-Schleife unterscheidet sich von der `while`-Schleife, da der Code mindestens einmal ausgeführt wird, bevor die Bedingung geprüft wird.

### Grundstruktur der `do-while`-Schleife:

```cpp
do {
    // Code wird mindestens einmal ausgeführt
} while (Bedingung);
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    do {
        cout << "Wert von i: " << i << endl;
        i++;
    } while (i <= 5);

    return 0;
}
```

#### Erklärung:
- Der Code im `do`-Block wird zuerst ausgeführt. Danach wird die Bedingung überprüft. Wenn sie wahr ist, wird der Code erneut ausgeführt.

## 4. Zusammenfassung

In diesem Tutorial haben wir die grundlegenden **Steuerstrukturen** in C++ behandelt:

- **Bedingte Anweisungen (`if`, `else if`, `else`)** ermöglichen es dir, Entscheidungen zu treffen und Code nur unter bestimmten Bedingungen auszuführen.
- **Switch-Anweisung** bietet eine bequeme Möglichkeit, mehrere Bedingungen zu vergleichen.
- **Schleifen (`for`, `while`, `do-while`)** erlauben es dir, Code wiederholt auszuführen, basierend auf einer Bedingung.

## 5. Übung:

1. Erstelle ein Programm, das die Zahlen von 1 bis 10 mit einer `for`-Schleife ausgibt.
2. Erstelle ein Programm, das die Wochentage basierend auf einer Benutzereingabe mit einer `switch`-Anweisung ausgibt.
3. Erstelle ein Programm, das alle geraden Zahlen zwischen 1 und 20 mit einer `while`-Schleife ausgibt.

Viel Spaß beim Üben!

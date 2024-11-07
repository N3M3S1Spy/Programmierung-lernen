# Schleifen in C++: Wiederholungen effizient gestalten

### Erklärung der Struktur:
1. **Die `for`-Schleife**: Einführung in die klassische Schleife.
2. **Die `while`-Schleife**: Eine Schleife, die auf einer Bedingung basiert.
3. **Die `do-while`-Schleife**: Eine Schleife, die garantiert mindestens einmal ausgeführt wird.
4. **Steuerung von Schleifen mit `break` und `continue`**: Steuerbefehle für Schleifen.
5. **Unendliche Schleifen**: Verwendung unendlicher Schleifen.
6. **Schleifen über Arrays**: Iteration über Arrays.
7. **Zusammenfassung**: Überblick über alle behandelten Schleifenarten.
8. **Übung**: Aufgaben zur Anwendung der gelernten Schleifen.

Schleifen sind in der Programmierung entscheidend, um Code mehrfach auszuführen, ohne ihn zu wiederholen. C++ bietet verschiedene Arten von Schleifen, die es ermöglichen, Aufgaben effizient zu wiederholen, basierend auf Bedingungen oder Zählvariablen.

In diesem Tutorial werden wir die drei grundlegenden Schleifenarten in C++ durchgehen: **for-Schleifen**, **while-Schleifen** und **do-while-Schleifen**. Wir werden auch auf die Steuerung von Schleifen mittels **break** und **continue** eingehen.

## 1. Die `for`-Schleife

Die `for`-Schleife ist eine der am häufigsten verwendeten Schleifen in C++. Sie eignet sich besonders gut, wenn du eine bestimmte Anzahl an Wiederholungen durchführen möchtest.

### Syntax der `for`-Schleife:

```cpp
for (initialisierung; bedingung; inkrement) {
    // Codeblock, der wiederholt wird
}
```

- **Initialisierung**: Setzt die Zählvariable zu Beginn der Schleife.
- **Bedingung**: Bestimmt, wie lange die Schleife ausgeführt wird. Solange diese Bedingung wahr ist, läuft die Schleife weiter.
- **Inkrement**: Ändert die Zählvariable nach jeder Iteration.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 5; ++i) {
        cout << "Wert von i: " << i << endl;
    }
    return 0;
}
```

#### Erklärung:
- Die Schleife beginnt mit `i = 0` und wiederholt sich, solange `i < 5` wahr ist. Nach jeder Iteration wird `i` um 1 erhöht (`i++`).

## 2. Die `while`-Schleife

Die `while`-Schleife wiederholt einen Codeblock, solange eine Bedingung wahr ist. Sie eignet sich besonders gut, wenn die Anzahl der Wiederholungen im Voraus nicht bekannt ist.

### Syntax der `while`-Schleife:

```cpp
while (bedingung) {
    // Codeblock, der wiederholt wird
}
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;
    
    while (i < 5) {
        cout << "Wert von i: " << i << endl;
        ++i;
    }
    
    return 0;
}
```

#### Erklärung:
- Die Schleife wird ausgeführt, solange `i < 5` wahr ist. In jeder Iteration wird `i` um 1 erhöht.

## 3. Die `do-while`-Schleife

Die `do-while`-Schleife unterscheidet sich von der `while`-Schleife, weil sie sicherstellt, dass der Codeblock **mindestens einmal** ausgeführt wird, bevor die Bedingung überprüft wird.

### Syntax der `do-while`-Schleife:

```cpp
do {
    // Codeblock, der wiederholt wird
} while (bedingung);
```

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int i = 0;

    do {
        cout << "Wert von i: " << i << endl;
        ++i;
    } while (i < 5);

    return 0;
}
```

#### Erklärung:
- Die Schleife wird zunächst ausgeführt, bevor die Bedingung (`i < 5`) überprüft wird. Das bedeutet, dass die Schleife immer mindestens einmal durchlaufen wird.

## 4. Steuerung von Schleifen mit `break` und `continue`

Du kannst die Ausführung einer Schleife auch mit den Steuerbefehlen **`break`** und **`continue`** beeinflussen.

### `break`:

- Mit dem `break`-Befehl kannst du die Schleife **frühzeitig** verlassen, selbst wenn die Bedingung noch wahr ist.

#### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            break;  // Beendet die Schleife, wenn i gleich 5 ist
        }
        cout << "Wert von i: " << i << endl;
    }

    return 0;
}
```

### `continue`:

- Der `continue`-Befehl überspringt die aktuelle Iteration und fährt mit der nächsten fort, wenn die Bedingung erfüllt ist.

#### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i < 10; ++i) {
        if (i == 5) {
            continue;  // Überspringt diese Iteration, wenn i gleich 5 ist
        }
        cout << "Wert von i: " << i << endl;
    }

    return 0;
}
```

#### Erklärung:
- **`break`** beendet die Schleife vollständig, während **`continue`** nur die aktuelle Iteration überspringt.

## 5. Unendliche Schleifen

Eine unendliche Schleife tritt auf, wenn die Bedingung einer Schleife immer wahr ist und die Schleife niemals beendet wird. Diese Art von Schleifen wird in der Praxis häufig verwendet, um Programme zu erstellen, die ständig laufen (z.B. Serverprogramme).

### Beispiel einer unendlichen `while`-Schleife:

```cpp
#include <iostream>
using namespace std;

int main() {
    while (true) {
        cout << "Dies ist eine unendliche Schleife." << endl;
    }
    
    return 0;
}
```

#### Erklärung:
- Die Bedingung `true` wird immer wahr sein, was zu einer unendlichen Schleife führt. Um diese zu beenden, muss der Benutzer das Programm manuell stoppen (z.B. durch `Ctrl + C`).

## 6. Schleifen über Arrays

Schleifen sind auch nützlich, wenn du durch ein Array iterieren möchtest. Du kannst mit einer Schleife alle Elemente eines Arrays durchlaufen und mit ihnen arbeiten.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; ++i) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }

    return 0;
}
```

#### Erklärung:
- Wir verwenden die `for`-Schleife, um durch das Array `arr` zu iterieren und jedes Element auszugeben.

## 7. Zusammenfassung

In diesem Tutorial haben wir die wichtigsten Schleifenarten in C++ behandelt:

- **`for`-Schleife**: Ideal, wenn du die Anzahl der Iterationen im Voraus kennst.
- **`while`-Schleife**: Wird verwendet, wenn die Anzahl der Iterationen nicht bekannt ist und du nur eine Bedingung hast.
- **`do-while`-Schleife**: Eine Schleife, die garantiert mindestens einmal ausgeführt wird.
- **Steuerbefehle**: Mit **`break`** und **`continue`** kannst du den Ablauf von Schleifen steuern.
- **Unendliche Schleifen**: Schleifen, die ohne Bedingung endlos laufen.
- **Schleifen über Arrays**: Schleifen können verwendet werden, um durch Arrays zu iterieren und deren Elemente zu bearbeiten.

## 8. Übung

1. Erstelle ein Programm, das die Zahlen von 1 bis 10 mit einer `for`-Schleife ausgibt.
2. Schreibe ein Programm, das eine unendliche Schleife verwendet, um eine Nachricht alle 2 Sekunden anzuzeigen.
3. Implementiere ein Programm, das eine `while`-Schleife verwendet, um die Eingabe eines Benutzers zu wiederholen, bis er "exit" eingibt.

Viel Spaß beim Üben!

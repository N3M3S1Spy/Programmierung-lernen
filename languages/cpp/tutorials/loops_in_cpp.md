# Schleifen in C++: Wiederholungen effizient gestalten

Schleifen sind ein grundlegendes Werkzeug in der Programmierung. Sie ermöglichen es, Code **mehrfach** auszuführen, ohne ihn zu wiederholen oder zu kopieren. C++ bietet verschiedene Schleifenarten, die je nach Situation eingesetzt werden können.

In diesem Tutorial lernst du:

1. **`for`-Schleifen**: Geeignet, wenn die Anzahl der Wiederholungen bekannt ist.
2. **`while`-Schleifen**: Läuft, solange eine Bedingung wahr ist.
3. **`do-while`-Schleifen**: Garantiert mindestens eine Ausführung.
4. **Steuerung von Schleifen mit `break` und `continue`**.
5. **Unendliche Schleifen**: Wenn eine Schleife nie enden soll.
6. **Schleifen über Arrays**: Wiederholungen zur Verarbeitung von Arrays.

---

## 1. Die `for`-Schleife

Die **`for`-Schleife** wird verwendet, wenn du weißt, wie oft der Code wiederholt werden soll. Sie ist besonders nützlich für Zählvorgänge oder das Durchlaufen von Arrays.

### Syntax der `for`-Schleife:
```cpp
for (Initialisierung; Bedingung; Inkrement) {
    // Codeblock, der wiederholt wird
}
```

- **Initialisierung**: Hier wird die Zählvariable initialisiert (z.B. `int i = 0`).
- **Bedingung**: Die Schleife läuft weiter, solange die Bedingung wahr (`true`) ist.
- **Inkrement**: Nach jeder Iteration wird die Zählvariable angepasst (z.B. `i++`).

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

#### Ablauf:
1. Die Schleife startet bei `i = 0`.
2. Solange `i < 5` wahr ist, wird der Codeblock ausgeführt.
3. Nach jeder Iteration wird `i` um 1 erhöht (`++i`).
4. Die Schleife endet, sobald die Bedingung `i < 5` falsch ist.

#### Ausgabe:
```
Wert von i: 0  
Wert von i: 1  
Wert von i: 2  
Wert von i: 3  
Wert von i: 4  
```

---

## 2. Die `while`-Schleife

Die **`while`-Schleife** wird verwendet, wenn die Anzahl der Wiederholungen nicht im Voraus bekannt ist. Sie läuft, solange eine bestimmte Bedingung erfüllt ist.

### Syntax der `while`-Schleife:
```cpp
while (Bedingung) {
    // Codeblock, der wiederholt wird
}
```

- Die **Bedingung** wird vor jeder Iteration geprüft.
- Wenn die Bedingung **falsch** wird, endet die Schleife.

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

#### Ablauf:
1. Die Schleife startet bei `i = 0`.
2. Vor jeder Iteration wird die Bedingung `i < 5` geprüft.
3. Solange die Bedingung wahr ist, wird der Codeblock ausgeführt.
4. `i` wird in jeder Iteration erhöht.
5. Die Schleife endet, sobald `i` den Wert 5 erreicht.

#### Ausgabe:
```
Wert von i: 0  
Wert von i: 1  
Wert von i: 2  
Wert von i: 3  
Wert von i: 4  
```

---

## 3. Die `do-while`-Schleife

Die **`do-while`-Schleife** ist ähnlich wie die `while`-Schleife. Der Unterschied besteht darin, dass der Codeblock **mindestens einmal ausgeführt** wird, bevor die Bedingung geprüft wird.

### Syntax der `do-while`-Schleife:
```cpp
do {
    // Codeblock, der wiederholt wird
} while (Bedingung);
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

#### Ablauf:
1. Der Codeblock wird **einmal** ausgeführt, bevor die Bedingung geprüft wird.
2. Danach wird die Bedingung geprüft (`i < 5`).
3. Solange die Bedingung wahr ist, wird der Codeblock erneut ausgeführt.

#### Ausgabe:
```
Wert von i: 0  
Wert von i: 1  
Wert von i: 2  
Wert von i: 3  
Wert von i: 4  
```

---

## 4. Steuerung von Schleifen mit `break` und `continue`

Manchmal ist es notwendig, Schleifen vorzeitig zu beenden oder bestimmte Iterationen zu überspringen.

### `break`:
- Beendet die Schleife **sofort**.

#### Beispiel:
```cpp
for (int i = 0; i < 10; ++i) {
    if (i == 5) {
        break; // Schleife wird beendet
    }
    cout << "i: " << i << endl;
}
```

**Ausgabe:**
```
i: 0  
i: 1  
i: 2  
i: 3  
i: 4  
```

---

### `continue`:
- Überspringt den restlichen Code der aktuellen Iteration und fährt mit der nächsten Iteration fort.

#### Beispiel:
```cpp
for (int i = 0; i < 10; ++i) {
    if (i == 5) {
        continue; // Diese Iteration wird übersprungen
    }
    cout << "i: " << i << endl;
}
```

**Ausgabe:**
```
i: 0  
i: 1  
i: 2  
i: 3  
i: 4  
i: 6  
i: 7  
i: 8  
i: 9  
```

---

## 5. Unendliche Schleifen

Eine Schleife ist **unendlich**, wenn ihre Abbruchbedingung niemals erfüllt wird. Solche Schleifen sind nützlich für Programme, die dauerhaft laufen sollen (z.B. Serverprogramme).

### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
    while (true) { // Bedingung ist immer wahr
        cout << "Dies ist eine unendliche Schleife." << endl;
    }
    return 0;
}
```

---

## 6. Schleifen über Arrays

Schleifen sind ideal, um durch Arrays zu iterieren und deren Elemente zu verarbeiten.

### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]); // Array-Größe berechnen

    for (int i = 0; i < n; ++i) {
        cout << "Element " << i << ": " << arr[i] << endl;
    }
    return 0;
}
```

---

## 7. Zusammenfassung

In diesem Tutorial haben wir gelernt:

- **`for`-Schleife**: Nützlich für feste Wiederholungen.
- **`while`-Schleife**: Läuft, solange eine Bedingung wahr ist.
- **`do-while`-Schleife**: Mindestens eine Ausführung.
- **`break` und `continue`**: Steuerung des Schleifenablaufs.
- **Unendliche Schleifen**: Nützlich für permanente Prozesse.
- **Arrays**: Schleifen erleichtern die Arbeit mit Arrays.

---

## 8. Übung

1. Schreibe ein Programm, das die Zahlen von 1 bis 10 mit einer `for`-Schleife ausgibt.
2. Implementiere eine `while`-Schleife, die solange Benutzereingaben abfragt, bis "exit" eingegeben wird.
3. Erstelle eine unendliche Schleife, die alle 2 Sekunden eine Nachricht anzeigt (Hinweis: `sleep`-Funktion verwenden).

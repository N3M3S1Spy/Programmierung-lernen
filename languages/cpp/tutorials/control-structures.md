# Einführung in Kontrollstrukturen in C++

### Erklärung der Struktur:
1. **Bedingungen**: Zuerst wird erklärt, wie Bedingungen mit `if`, `else if` und `else` verwendet werden.
2. **Schleifen**: Danach folgen Erklärungen zu den Schleifenarten `for`, `while` und `do while`.
3. **Verschachtelung**: Ein Abschnitt, der zeigt, wie Schleifen und Bedingungen miteinander verschachtelt werden können.
4. **Übung**: Eine Übung, bei der der Leser das Gelernte direkt anwenden kann.

Kontrollstrukturen sind in jedem Programm wichtig, da sie bestimmen, wie der Code ausgeführt wird. In C++ gibt es verschiedene Kontrollstrukturen, mit denen du die Ausführung deines Programms steuern kannst. In diesem Tutorial konzentrieren wir uns auf die beiden wichtigsten Kategorien: **Bedingungen** und **Schleifen**.

## Was sind Kontrollstrukturen?

Kontrollstrukturen sind Anweisungen, die es dir ermöglichen, den Ablauf deines Programms zu ändern, basierend auf bestimmten Bedingungen oder Wiederholungen. Sie ermöglichen es, Code selektiv auszuführen oder ihn mehrfach zu wiederholen.

### 1. Bedingungen (`if`, `else`, `else if`)

Bedingungen erlauben es, verschiedene Teile deines Programms nur dann auszuführen, wenn eine bestimmte Bedingung wahr ist. In C++ verwenden wir hierfür die `if`-Anweisung. Zusätzlich gibt es `else` und `else if`, um alternative Ausführungswege zu definieren.

#### `if`-Anweisung:
Mit der `if`-Anweisung kannst du einen Codeblock nur dann ausführen, wenn eine bestimmte Bedingung erfüllt ist.

```cpp
int alter = 20;
if (alter >= 18) {
    cout << "Du bist volljährig." << endl;
}
```

In diesem Beispiel wird der Code innerhalb des `if`-Blocks nur ausgeführt, wenn die Bedingung `alter >= 18` wahr ist. Andernfalls passiert nichts.

#### `else`-Anweisung:
Mit `else` kannst du angeben, was passieren soll, wenn die Bedingung der `if`-Anweisung **nicht** erfüllt ist.

```cpp
int alter = 16;
if (alter >= 18) {
    cout << "Du bist volljährig." << endl;
} else {
    cout << "Du bist minderjährig." << endl;
}
```

Hier wird die Nachricht "Du bist minderjährig." ausgegeben, weil die Bedingung `alter >= 18` nicht wahr ist.

#### `else if`-Anweisung:
Wenn du mehrere Bedingungen prüfen möchtest, kannst du `else if` verwenden.

```cpp
int alter = 25;
if (alter < 18) {
    cout << "Du bist minderjährig." << endl;
} else if (alter >= 18 && alter < 65) {
    cout << "Du bist ein Erwachsener." << endl;
} else {
    cout << "Du bist Senior." << endl;
}
```

Hier prüft das Programm zuerst, ob `alter < 18` ist. Wenn das nicht zutrifft, wird die nächste Bedingung mit `else if` geprüft. Wenn alle Bedingungen nicht erfüllt sind, wird der `else`-Block ausgeführt.

### 2. Schleifen (`for`, `while`, `do while`)

Schleifen ermöglichen es, einen bestimmten Codeblock mehrfach auszuführen, solange eine Bedingung erfüllt ist. Es gibt drei Hauptarten von Schleifen in C++:

#### `for`-Schleife:
Die `for`-Schleife eignet sich besonders, wenn du weißt, wie oft der Code wiederholt werden soll.

```cpp
for (int i = 0; i < 5; i++) {
    cout << "Wert von i: " << i << endl;
}
```

In diesem Beispiel wird der Code innerhalb der Schleife fünfmal ausgeführt. Die Schleife beginnt mit `i = 0`, und `i` wird in jedem Durchlauf um 1 erhöht, bis `i` den Wert 5 erreicht.

#### `while`-Schleife:
Die `while`-Schleife wird ausgeführt, solange eine bestimmte Bedingung wahr ist.

```cpp
int i = 0;
while (i < 5) {
    cout << "Wert von i: " << i << endl;
    i++;
}
```

Die `while`-Schleife überprüft vor jeder Iteration, ob die Bedingung (`i < 5`) wahr ist. Solange dies der Fall ist, wird der Code innerhalb der Schleife wiederholt.

#### `do while`-Schleife:
Die `do while`-Schleife ähnelt der `while`-Schleife, aber der Code wird **mindestens einmal** ausgeführt, bevor die Bedingung überprüft wird.

```cpp
int i = 0;
do {
    cout << "Wert von i: " << i << endl;
    i++;
} while (i < 5);
```

Die `do while`-Schleife garantiert, dass der Code mindestens einmal ausgeführt wird, unabhängig davon, ob die Bedingung erfüllt ist oder nicht.

### 3. Verschachtelte Schleifen und Bedingungen
Du kannst Schleifen und Bedingungen auch verschachteln, d. h. eine Schleife innerhalb einer anderen Schleife oder eine Bedingung innerhalb einer anderen Bedingung verwenden.

```cpp
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << "i: " << i << ", j: " << j << endl;
    }
}
```

In diesem Beispiel wird die innere Schleife für jedes Iteration der äußeren Schleife erneut ausgeführt, was zu 9 Ausgaben führt.

### Zusammenfassung:
- **Bedingungen**: Verwende `if`, `else if` und `else`, um unterschiedliche Codepfade basierend auf Bedingungen zu erstellen.
- **Schleifen**: Mit `for`, `while` und `do while` kannst du Code wiederholt ausführen, solange eine Bedingung wahr ist.
- **Verschachteln**: Du kannst Schleifen und Bedingungen innerhalb von anderen Schleifen und Bedingungen verwenden, um komplexere Logiken zu erstellen.

## Übung:
Erstelle ein Programm, das die folgenden Aufgaben erledigt:
1. Fordere den Benutzer auf, sein Alter einzugeben.
2. Verwende eine `if`-Anweisung, um zu prüfen, ob der Benutzer volljährig ist.
3. Erstelle eine `for`-Schleife, die die Zahlen von 1 bis 10 ausgibt.
4. Erstelle eine `while`-Schleife, die die Zahl 10 bis 1 herunterzählt.

```cpp
#include <iostream>
using namespace std;

int main() {
    int alter;
    cout << "Gib dein Alter ein: ";
    cin >> alter;

    if (alter >= 18) {
        cout << "Du bist volljährig." << endl;
    } else {
        cout << "Du bist minderjährig." << endl;
    }

    cout << "Zahlen von 1 bis 10:" << endl;
    for (int i = 1; i <= 10; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Zahlen von 10 bis 1:" << endl;
    int i = 10;
    while (i > 0) {
        cout << i << " ";
        i--;
    }

    return 0;
}
```

Dieses Programm wird je nach Alter des Benutzers eine Nachricht anzeigen und dann zwei Schleifen ausführen: eine von 1 bis 10 und eine von 10 bis 1.

Viel Spaß beim Üben!

# Bedingungen in C++: Kontrollstrukturen

### Erklärung der Struktur:
1. **Die `if`-Anweisung**: Einführung in die grundlegende Bedingung.
2. **Die `else`-Anweisung**: Erweiterung der `if`-Bedingung mit einer Alternative.
3. **Die `else if`-Anweisung**: Überprüfen mehrerer Bedingungen.
4. **Verschachtelte `if`-Anweisungen**: Komplexere Bedingungen mit verschachtelten `if`-Statements.
5. **Die `switch`-Anweisung**: Eine effiziente Methode zur Prüfung mehrerer Fälle.
6. **Die ternäre Bedingung**: Eine kompakte Form von `if-else`.
7. **Zusammenfassung**: Überblick über alle behandelten Kontrollstrukturen.
8. **Übung**: Aufgaben zur Anwendung der gelernten Konzepte.

In C++ ermöglichen Bedingungen (auch als **Kontrollstrukturen** bezeichnet) es, den Ablauf eines Programms je nach den Werten von Variablen oder Ausdrücken zu steuern. Dies ist einer der grundlegendsten Mechanismen in der Programmierung.

In diesem Tutorial werden wir uns mit den wichtigsten Kontrollstrukturen in C++ beschäftigen, darunter **if-else-Anweisungen**, **switch-Anweisungen** und **Verzweigungen**.

## 1. Die `if`-Anweisung

Die `if`-Anweisung ist die einfachste und häufigste Bedingung in C++. Sie prüft, ob eine Bedingung wahr (true) ist, und führt dann einen Block von Code aus.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;
    
    if (zahl > 5) {
        cout << "Die Zahl ist größer als 5." << endl;
    }

    return 0;
}
```

#### Erklärung:
- Der Code innerhalb des Blocks `{}` wird nur ausgeführt, wenn die Bedingung (`zahl > 5`) wahr ist.

## 2. Die `else`-Anweisung

Mit der `else`-Anweisung kannst du eine alternative Aktion definieren, die ausgeführt wird, wenn die Bedingung der `if`-Anweisung nicht wahr ist.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 3;

    if (zahl > 5) {
        cout << "Die Zahl ist größer als 5." << endl;
    } else {
        cout << "Die Zahl ist kleiner oder gleich 5." << endl;
    }

    return 0;
}
```

#### Erklärung:
- Der Code im `else`-Block wird ausgeführt, wenn die `if`-Bedingung nicht erfüllt ist.

## 3. Die `else if`-Anweisung

Mit der `else if`-Anweisung kannst du mehrere Bedingungen in einer einzigen `if`-Konstruktion überprüfen.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;

    if (zahl > 15) {
        cout << "Die Zahl ist größer als 15." << endl;
    } else if (zahl == 10) {
        cout << "Die Zahl ist gleich 10." << endl;
    } else {
        cout << "Die Zahl ist kleiner als 10." << endl;
    }

    return 0;
}
```

#### Erklärung:
- Hier wird zuerst überprüft, ob die Zahl größer als 15 ist.
- Falls das nicht zutrifft, wird geprüft, ob die Zahl gleich 10 ist. Wenn keine der Bedingungen zutrifft, wird der `else`-Block ausgeführt.

## 4. Verschachtelte `if`-Anweisungen

Du kannst `if`-Anweisungen auch ineinander verschachteln, um komplexere Bedingungen zu überprüfen.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 20;

    if (zahl > 10) {
        if (zahl < 30) {
            cout << "Die Zahl liegt zwischen 10 und 30." << endl;
        }
    }

    return 0;
}
```

#### Erklärung:
- Die zweite `if`-Anweisung wird nur ausgeführt, wenn die erste Bedingung wahr ist.

## 5. Die `switch`-Anweisung

Die `switch`-Anweisung ist eine effiziente Möglichkeit, mehrere Werte einer Variablen zu überprüfen und unterschiedliche Codeblöcke auszuführen, je nach dem Wert der Variablen.

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
        case 4:
            cout << "Donnerstag" << endl;
            break;
        case 5:
            cout << "Freitag" << endl;
            break;
        default:
            cout << "Ungültiger Tag" << endl;
            break;
    }

    return 0;
}
```

#### Erklärung:
- Der `switch` prüft den Wert von `tag` und führt den entsprechenden `case`-Block aus.
- Das `break` verhindert, dass auch die folgenden `case`-Blöcke ausgeführt werden, nachdem ein passender Fall gefunden wurde.

## 6. Die `ternäre` Bedingung (Kurzform)

Die **ternäre Bedingung** ist eine kompakte Form der `if-else`-Anweisung. Sie besteht aus einer Bedingung, einem `?`-Operator und zwei möglichen Ausdrücken, von denen einer ausgeführt wird, je nachdem, ob die Bedingung wahr oder falsch ist.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int zahl = 10;

    string ergebnis = (zahl > 5) ? "Die Zahl ist größer als 5." : "Die Zahl ist kleiner oder gleich 5.";
    cout << ergebnis << endl;

    return 0;
}
```

#### Erklärung:
- Die ternäre Bedingung funktioniert wie eine verkürzte `if-else`-Anweisung. Der Ausdruck vor dem `?` ist die Bedingung, gefolgt von zwei möglichen Ausdrücken: einer für den Fall, dass die Bedingung wahr ist, und einer für den Fall, dass sie falsch ist.

## 7. Zusammenfassung

In diesem Tutorial haben wir die grundlegenden Kontrollstrukturen in C++ behandelt:

- **if**-Anweisung: Überprüft eine Bedingung und führt den zugehörigen Code aus.
- **else** und **else if**: Ermöglichen das Überprüfen mehrerer Bedingungen.
- **switch**: Eine effiziente Möglichkeit, mehrere Fälle zu prüfen.
- **ternäre Bedingung**: Eine kompakte Form der `if-else`-Anweisung.

## 8. Übung

1. Erstelle ein Programm, das die größte von drei Zahlen findet.
2. Schreibe ein Programm, das auf der Grundlage eines Wochentages (1 bis 7) den entsprechenden Namen des Wochentages ausgibt.
3. Implementiere ein Programm, das mit einer ternären Bedingung den größten von zwei Werten vergleicht und den Wert ausgibt.

Viel Spaß beim Üben!

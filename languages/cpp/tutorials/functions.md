# Einführung in Funktionen in C++

### Erklärung der Struktur:
1. **Funktionen deklarieren und definieren**: Einführung in die Deklaration und Definition von Funktionen.
2. **Rückgabewerte**: Erklärung, wie Funktionen einen Rückgabewert liefern.
3. **Funktionen ohne Rückgabewert**: Verwendung von `void`-Funktionen.
4. **Funktionsparameter**: Erklärung, wie du Eingabewerte an Funktionen übergibst.
5. **Überladen von Funktionen**: Erklärung, wie du Funktionen mit dem gleichen Namen aber unterschiedlichen Parametern erstellst.
6. **Übung**: Eine Übung, um das Gelernte praktisch anzuwenden.

Funktionen sind ein zentrales Konzept in C++ und ermöglichen es, Programme in kleinere, wiederverwendbare Codeblöcke zu unterteilen. Sie erleichtern das Schreiben von modularen und gut strukturierten Programmen. In diesem Tutorial werden wir lernen, wie man Funktionen in C++ erstellt und verwendet.

## Was sind Funktionen?

Eine Funktion ist ein benannter Codeblock, der eine bestimmte Aufgabe ausführt. Sie wird mit einem Namen, einem Rückgabewert und optionalen Eingabeparametern deklariert. Funktionen helfen dabei, den Code zu organisieren, indem sie komplexe Aufgaben in kleinere und handhabbare Teile zerlegen.

### Funktionen deklarieren und definieren

In C++ kannst du eine Funktion **deklarieren** und dann **definieren**. Die Deklaration einer Funktion gibt an, was die Funktion tun wird, während die Definition den tatsächlichen Code enthält, der ausgeführt wird, wenn die Funktion aufgerufen wird.

#### Funktionsdeklaration:

Eine Funktionsdeklaration besteht aus dem Rückgabewert, dem Funktionsnamen und den Parametern (falls vorhanden).

```cpp
int addiere(int a, int b); // Funktionsdeklaration
```

Hier deklarierst du eine Funktion mit dem Namen `addiere`, die zwei `int`-Werte als Parameter entgegennimmt und einen `int` zurückgibt.

#### Funktionsdefinition:

Die Funktionsdefinition enthält den Code, der die Funktion ausführt. Dies ist der Block, der tatsächlich ausgeführt wird, wenn die Funktion aufgerufen wird.

```cpp
int addiere(int a, int b) {
    return a + b; // Gibt die Summe von a und b zurück
}
```

Die Definition der Funktion `addiere` zeigt, dass sie zwei `int`-Werte addiert und das Ergebnis zurückgibt.

### Funktionen aufrufen

Nachdem eine Funktion deklariert und definiert wurde, kannst du sie in deinem Programm aufrufen. Wenn die Funktion Parameter benötigt, musst du diese beim Aufruf übergeben.

```cpp
#include <iostream>
using namespace std;

int addiere(int a, int b);  // Funktionsdeklaration

int main() {
    int ergebnis = addiere(5, 3);  // Funktionsaufruf mit den Argumenten 5 und 3
    cout << "Das Ergebnis ist: " << ergebnis << endl;
    return 0;
}

int addiere(int a, int b) {  // Funktionsdefinition
    return a + b;
}
```

In diesem Beispiel wird die Funktion `addiere` mit den Argumenten `5` und `3` aufgerufen, und das Ergebnis wird ausgegeben.

### Rückgabewerte von Funktionen

Funktionen in C++ können einen Rückgabewert haben, der den Ergebniswert der Funktion darstellt. Der Rückgabewert wird mit dem `return`-Schlüsselwort zurückgegeben.

```cpp
int multipliziere(int a, int b) {
    return a * b;  // Gibt das Produkt von a und b zurück
}
```

Du kannst den Rückgabewert auch direkt bei der Verwendung der Funktion in einer Berechnung oder einer Ausgabe verwenden.

```cpp
#include <iostream>
using namespace std;

int multipliziere(int a, int b);  // Funktionsdeklaration

int main() {
    int ergebnis = multipliziere(4, 5);  // Funktionsaufruf
    cout << "Das Produkt ist: " << ergebnis << endl;
    return 0;
}

int multipliziere(int a, int b) {  // Funktionsdefinition
    return a * b;
}
```

### Funktionen ohne Rückgabewert: `void`-Funktionen

Manchmal möchtest du eine Funktion erstellen, die keine Werte zurückgibt. In diesem Fall verwendest du den Datentyp `void` als Rückgabewert.

```cpp
void druckeGruss() {
    cout << "Hallo, willkommen in der C++-Welt!" << endl;
}
```

Hier gibt die Funktion `druckeGruss` keinen Wert zurück, sondern gibt einfach eine Nachricht auf der Konsole aus.

### Funktionsparameter

Funktionen in C++ können **Parameter** haben, die es dir ermöglichen, Werte in die Funktion zu übergeben, die dann im Funktionskörper verwendet werden. Diese Parameter können verschiedene Datentypen haben, z. B. `int`, `float`, `string`, etc.

```cpp
void zeigeAlter(int alter) {
    cout << "Dein Alter ist: " << alter << endl;
}
```

In diesem Beispiel erwartet die Funktion `zeigeAlter` einen `int`-Parameter namens `alter`. Wenn du die Funktion aufrufst, musst du den Wert für `alter` übergeben:

```cpp
int main() {
    zeigeAlter(25);  // Funktionsaufruf mit dem Wert 25
    return 0;
}
```

### Funktionen mit mehreren Parametern

Du kannst Funktionen mit mehreren Parametern erstellen, um mehrere Werte auf einmal zu verarbeiten.

```cpp
void addiereUndMultipliziere(int a, int b, int c) {
    int summe = a + b;
    int produkt = b * c;
    cout << "Summe: " << summe << ", Produkt: " << produkt << endl;
}
```

### Überladen von Funktionen

In C++ kannst du Funktionen überladen, d. h., du kannst mehrere Funktionen mit demselben Namen, aber unterschiedlichen Parametern haben. Der Compiler entscheidet, welche Funktion aufgerufen wird, basierend auf der Anzahl und dem Datentyp der übergebenen Argumente.

```cpp
int addiere(int a, int b) {
    return a + b;
}

double addiere(double a, double b) {
    return a + b;
}
```

In diesem Beispiel gibt es zwei Funktionen mit dem Namen `addiere`, aber sie unterscheiden sich im Datentyp der Parameter (`int` vs. `double`). Der Compiler entscheidet automatisch, welche Version der Funktion verwendet wird.

## Zusammenfassung:
- **Funktionsdeklaration**: Gibt an, welche Funktion existiert, ihre Parameter und ihren Rückgabewert.
- **Funktionsdefinition**: Enthält den Code, der ausgeführt wird, wenn die Funktion aufgerufen wird.
- **Funktionsaufruf**: Ruft die Funktion mit den erforderlichen Parametern auf.
- **Rückgabewerte**: Funktionen können Werte mit `return` zurückgeben.
- **`void`-Funktionen**: Funktionen, die keine Rückgabewerte haben.
- **Funktionsparameter**: Ermöglichen es, Werte in eine Funktion zu übergeben.
- **Überladen von Funktionen**: Mehrere Funktionen mit demselben Namen, aber unterschiedlichen Parametern.

## Übung:
1. Erstelle eine Funktion `berechneQuadrat`, die das Quadrat einer Zahl berechnet.
2. Erstelle eine Funktion `istVolljaehrig`, die überprüft, ob jemand volljährig ist (Alter >= 18).
3. Verwende beide Funktionen im `main`-Programm und gib die Ergebnisse aus.

```cpp
#include <iostream>
using namespace std;

int berechneQuadrat(int zahl) {
    return zahl * zahl;
}

bool istVolljaehrig(int alter) {
    return alter >= 18;
}

int main() {
    int zahl = 4;
    int alter = 17;

    cout << "Das Quadrat von " << zahl << " ist: " << berechneQuadrat(zahl) << endl;
    if (istVolljaehrig(alter)) {
        cout << "Du bist volljährig." << endl;
    } else {
        cout << "Du bist minderjährig." << endl;
    }

    return 0;
}
```

Dieses Programm zeigt, wie du Funktionen erstellen und aufrufen kannst, um ein Problem zu lösen.

Viel Erfolg beim Üben!
Dieses Tutorial vermittelt den Lesern ein solides Verständnis davon, wie sie Funktionen in C++ verwenden können.

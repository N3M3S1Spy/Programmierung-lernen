# Funktionen in C++: Grundlagen und Anwendung

Funktionen sind **wiederverwendbare Codeblöcke**, die eine bestimmte Aufgabe erfüllen. Sie helfen, Programme modularer, verständlicher und wartbarer zu gestalten. In diesem Tutorial schauen wir uns folgende Konzepte an:

1. **Was ist eine Funktion?**: Einführung in die Struktur und das Konzept von Funktionen.  
2. **Funktionen mit Rückgabewerten**: Wie Funktionen Werte zurückgeben.  
3. **Funktionen mit Parametern**: Verwendung von Parametern zur Flexibilität.  
4. **Rückgabewert und Parameter im Detail**: Zusammenspiel von Rückgabewerten und Parametern.  
5. **Funktionsüberladung**: Gleiche Funktionsnamen mit unterschiedlichen Parametern.  
6. **Zusammenfassung**: Kurze Wiederholung der wichtigsten Punkte.  
7. **Übung**: Aufgaben zur Festigung des Gelernten.  

---

## 1. Was ist eine Funktion?

Eine **Funktion** ist ein benannter Block von Code, der eine bestimmte Aufgabe erfüllt. Der Hauptvorteil von Funktionen besteht darin, dass sie **wiederverwendbar** sind und den Code übersichtlicher machen.

### Grundstruktur einer Funktion:

```cpp
Rückgabetyp Funktionsname(Parameter) {
    // Funktionskörper: Der auszuführende Code
    return Rückgabewert; // Optional: Nur wenn die Funktion einen Wert zurückgibt
}
```

- **Rückgabetyp**: Der Datentyp des Werts, den die Funktion zurückgibt. Für keinen Rückgabewert wird `void` verwendet.  
- **Funktionsname**: Name, um die Funktion aufzurufen.  
- **Parameter**: Eingabewerte, die an die Funktion übergeben werden. Diese sind optional.  
- **return**: Schlüsselwort, um einen Wert zurückzugeben (falls nötig).  

---

### Beispiel: Eine einfache `void`-Funktion

```cpp
#include <iostream>
using namespace std;

// Funktionsdeklaration
void begruessung() {
    cout << "Hallo, Welt!" << endl;
}

int main() {
    // Funktionsaufruf
    begruessung();
    return 0;
}
```

#### Erklärung:
1. Die Funktion `begruessung()` hat den Rückgabetyp `void`, weil sie **keinen Wert zurückgibt**.  
2. Sie enthält einen `cout`-Befehl, um den Text "Hallo, Welt!" auszugeben.  
3. Im `main()`-Programm wird die Funktion aufgerufen.  

#### Ausgabe:
```
Hallo, Welt!
```

---

## 2. Funktionen mit Rückgabewerten

Funktionen können **Werte zurückgeben**, die im restlichen Code verwendet werden können.

### Syntax:
```cpp
Rückgabetyp Funktionsname(Parameter) {
    return Wert; // Der Rückgabewert muss dem Rückgabetyp entsprechen
}
```

---

### Beispiel: Funktion mit Rückgabewert

```cpp
#include <iostream>
using namespace std;

// Funktion, die zwei Zahlen addiert und das Ergebnis zurückgibt
int addiere(int a, int b) {
    return a + b; // Rückgabewert
}

int main() {
    int summe = addiere(5, 3); // Funktionsaufruf mit Rückgabewert
    cout << "Summe: " << summe << endl;
    return 0;
}
```

#### Erklärung:
1. Die Funktion `addiere` nimmt zwei `int`-Parameter (`a` und `b`).  
2. Sie gibt die Summe der beiden Parameter zurück (`return a + b;`).  
3. Der Rückgabewert wird in der Variablen `summe` gespeichert und ausgegeben.  

#### Ausgabe:
```
Summe: 8
```

---

## 3. Funktionen mit Parametern

**Parameter** sind Eingabewerte, die an eine Funktion übergeben werden. Sie machen Funktionen flexibel, da sie auf verschiedene Eingaben reagieren können.

### Beispiel: Funktion mit einem Parameter

```cpp
#include <iostream>
using namespace std;

// Funktion, die das Alter ausgibt
void zeigeAlter(int alter) {
    cout << "Du bist " << alter << " Jahre alt." << endl;
}

int main() {
    zeigeAlter(20); // Funktionsaufruf mit einem Parameter
    zeigeAlter(25); // Ein anderer Parameterwert
    return 0;
}
```

#### Erklärung:
1. Die Funktion `zeigeAlter` akzeptiert einen `int`-Parameter (`alter`).  
2. Der Wert wird im `cout` ausgegeben.  
3. Beim Aufruf der Funktion wird der Parameter festgelegt (z.B. `20` und `25`).  

#### Ausgabe:
```
Du bist 20 Jahre alt.
Du bist 25 Jahre alt.
```

---

## 4. Rückgabewert und Parameter im Detail

Funktionen können **Parameter** haben und einen **Rückgabewert** zurückgeben.

### Beispiel: Durchschnitt berechnen

```cpp
#include <iostream>
using namespace std;

// Funktion mit mehreren Parametern und Rückgabewert
double berechneDurchschnitt(double a, double b, double c) {
    return (a + b + c) / 3; // Durchschnitt berechnen
}

int main() {
    double durchschnitt = berechneDurchschnitt(5.0, 7.0, 10.0);
    cout << "Der Durchschnitt ist: " << durchschnitt << endl;
    return 0;
}
```

#### Erklärung:
1. Die Funktion nimmt drei `double`-Werte als Parameter entgegen.  
2. Sie berechnet den Durchschnitt und gibt diesen zurück.  
3. Der Rückgabewert wird in der Variablen `durchschnitt` gespeichert.  

#### Ausgabe:
```
Der Durchschnitt ist: 7.33333
```

---

## 5. Funktionsüberladung

C++ erlaubt es, mehrere Funktionen **mit demselben Namen**, aber unterschiedlichen Parametern zu definieren. Dies nennt man **Funktionsüberladung**.

---

### Beispiel: Funktionsüberladung

```cpp
#include <iostream>
using namespace std;

// Funktionsüberladung: addiere für int und double
int addiere(int a, int b) {
    return a + b;
}

double addiere(double a, double b) {
    return a + b;
}

int main() {
    cout << "Summe (int): " << addiere(5, 3) << endl;
    cout << "Summe (double): " << addiere(5.5, 3.3) << endl;
    return 0;
}
```

#### Erklärung:
1. Zwei Funktionen `addiere` existieren: Eine für `int`-Werte und eine für `double`-Werte.  
2. Der Compiler wählt automatisch die passende Version basierend auf den Parametern aus.  

#### Ausgabe:
```
Summe (int): 8
Summe (double): 8.8
```

---

## 6. Zusammenfassung

In diesem Tutorial haben wir gelernt:

- **Was Funktionen sind** und wie sie deklariert, definiert und aufgerufen werden.  
- **Funktionen mit Rückgabewerten** geben einen Wert zurück, der verwendet werden kann.  
- **Funktionen mit Parametern** sind flexibel und anpassbar.  
- **Funktionsüberladung** ermöglicht Funktionen mit demselben Namen, aber unterschiedlichen Parametern.  

---

## 7. Übung

1. Schreibe eine Funktion, die den **größten Wert aus drei Zahlen** ermittelt und zurückgibt.  
2. Erstelle eine Funktion, die einen String als Parameter nimmt und die **Länge des Strings** zurückgibt.  
3. Implementiere eine **überladene Funktion**, die zwei `int`- oder zwei `double`-Werte addiert.  

Viel Erfolg beim Üben und Ausprobieren! 😊

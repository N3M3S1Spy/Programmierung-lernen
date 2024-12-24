# C++ Variablen
Variablen sind Container für die Speicherung von Datenwerten. 

In C++ gibt es verschiedene **Arten** von Variablen (die mit verschiedenen Schlüsselwörtern definiert werden), zum Beispiel:

- `int` - speichert ganze Zahlen (ohne Dezimalstellen), z. B. 123 oder -123
- `double` - speichert Fließkommazahlen mit Dezimalstellen, z. B. 19,99 oder -19,99
- `char` - speichert einzelne Zeichen, wie z. B. 'a' oder 'B'. Zeichenwerte sind von einfachen Anführungszeichen umgeben
- `string` - speichert Text, wie z. B. "Hello World". String-Werte sind von doppelten Anführungszeichen umgeben
- `bool` - speichert Werte mit zwei Zuständen: wahr oder falsch

## Deklarieren (Erstellen) von Variablen
Um eine Variable zu erstellen, geben Sie den Typ an und weisen ihr einen Wert zu:
### Syntax
```
type variableName = value; 
```

Dabei steht type für einen der C++-Typen (z. B. `int`) und variableName für den Namen der Variablen (z. B. **x** oder **myName**). Das **Gleichheitszeichen** wird verwendet, um der Variablen Werte zuzuweisen.

Um eine Variable zu erstellen, die eine Zahl speichern soll, sehen Sie sich das folgende Beispiel an:
### Beispiel:
Erstellen Sie eine Variable namens myNum vom Typ `int` und weisen Sie ihr den Wert **15** zu:
```cpp
int myNum = 15;
cout << myNum; 
```

Sie können auch eine Variable deklarieren, ohne den Wert zuzuweisen, und den Wert später zuweisen:
### Beispiel:
```cpp
int myNum;
myNum = 15;
cout << myNum; 
```

Beachten Sie, dass ein neuer Wert, den Sie einer bestehenden Variablen zuweisen, den vorherigen Wert überschreibt:
### Beispiel:
```cpp
int myNum = 15;  // myNum is 15
myNum = 10;  // Now myNum is 10
cout << myNum;  // Outputs 10 
```

## Andere Typen
Eine Demonstration von anderen Datentypen:
### Beispiel:
```cpp
int myNum = 5;               // Integer (whole number without decimals)
double myFloatNum = 5.99;    // Floating point number (with decimals)
char myLetter = 'D';         // Character
string myText = "Hello";     // String (text)
bool myBoolean = true;       // Boolean (true or false) 
```

> Mehr über die einzelnen Typen erfahren Sie im Kapitel Datentypen.

## Variablen anzeigen
Das Objekt `cout` wird zusammen mit dem Operator `<<` zur Anzeige von Variablen verwendet.

Um sowohl Text als auch eine Variable zu kombinieren, trennen Sie sie mit dem Operator `<<`:
### Beispiel:
```cpp
int myAge = 35;
cout << "I am " << myAge << " years old."; 
```

## Variablen zusammenfügen
Um eine Variable zu einer anderen Variable hinzuzufügen, können Sie den Operator `+` verwenden:

### Beispiel:
```cpp
int x = 5;
int y = 6;
int sum = x + y;
cout << sum; 
```

------

# Mehrere Variablen deklarieren
Um mehr als eine Variable desselben Typs zu deklarieren, verwenden Sie eine durch Komma getrennte Liste:
### Beispiel:
```cpp
int x = 5, y = 6, z = 50;
cout << x + y + z;
```

## Ein Wert für mehrere Variablen
Sie können auch mehreren Variablen in einer Zeile **denselben Wert** zuweisen:
### Beispiel:
```cpp
int x, y, z;
x = y = z = 50;
cout << x + y + z;
```

------

# C++ Identifiers
Alle C++-**Variablen** müssen mit **eindeutigen Namen** **identifiziert** werden. 

Diese eindeutigen Namen werden **Bezeichner** genannt. 

Bezeichner können kurze Namen sein (wie x und y) oder beschreibendere Namen (age, sum, totalVolume). 

**Notiz:** Es wird empfohlen, beschreibende Namen zu verwenden, um verständlichen und wartbaren Code zu erstellen:
### Beispiel:
```cpp
// Good
int minutesPerHour = 60;

// OK, but not so easy to understand what m actually is
int m = 60;
```

Die allgemeinen Regeln für die Benennung von Variablen sind:

- Namen können Buchstaben, Ziffern und Unterstriche enthalten
- Namen müssen mit einem Buchstaben oder einem Unterstrich (_) beginnen
- Bei den Namen wird zwischen Groß- und Kleinschreibung unterschieden (`myVar` und `myvar` sind unterschiedliche Variablen)
- Die Namen dürfen keine Leerzeichen oder Sonderzeichen wie !, #, % usw. enthalten.
- Reservierte Wörter (wie C++-Schlüsselwörter, z. B. `int`) können nicht als Namen verwendet werden.

------

# C++ Konstanten
Wenn Sie nicht möchten, dass andere (oder Sie selbst) vorhandene Variablenwerte ändern, verwenden Sie das Schlüsselwort `const` (damit wird die Variable als "konstant" deklariert, was bedeutet, dass sie **unveränderlich und schreibgeschützt** ist):
### Beispiel:
```cpp
const int myNum = 15;  // myNum will always be 15
myNum = 10;  // error: assignment of read-only variable 'myNum' 
```

Sie sollten die Variable immer dann als konstant deklarieren, wenn Sie Werte haben, die sich wahrscheinlich nicht ändern werden:

### Beispiel:
```cpp
const int minutesPerHour = 60;
const float PI = 3.14; 
```

## Anmerkungen zu Konstanten
Wenn Sie eine konstante Variable deklarieren, muss ihr ein Wert zugewiesen werden:
### Beispiel:
Zum Beispiel so:
```cpp
const int minutesPerHour = 60;
```
Dies wird jedoch **nicht funktionieren**:
```cpp
const int minutesPerHour;
minutesPerHour = 60; // error 
```

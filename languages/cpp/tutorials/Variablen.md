## C++ Variablen

Variablen sind Container für die Speicherung von Datenwerten.

In C++ gibt es verschiedene **Arten** von Variablen (die mit verschiedenen Schlüsselwörtern definiert werden), zum Beispiel:

*   `int` – speichert ganze Zahlen (ohne Dezimalstellen), z. B. 123 oder -123
*   `double` – speichert Fließkommazahlen mit Dezimalstellen, z. B. 19,99 oder -19,99
*   `char` – speichert einzelne Zeichen, wie z. B. 'a' oder 'B'. Zeichenwerte sind von einfachen Anführungszeichen umgeben.
*   `string` – speichert Text, wie z. B. "Hello World". String-Werte sind von doppelten Anführungszeichen umgeben.
*   `bool` – speichert Werte mit zwei Zuständen: `true` (wahr) oder `false` (falsch).

## Deklarieren (Erstellen) von Variablen

Um eine Variable zu erstellen, gibst du den Typ an und weist ihr einen Wert zu:

### Syntax

```c++
Typ Variablenname = Wert;
```

Dabei steht `Typ` für einen der C++-Typen (z. B. `int`) und `Variablenname` für den Namen der Variablen (z. B. `x` oder `meinName`). Das **Gleichheitszeichen** (`=`) wird verwendet, um der Variablen Werte zuzuweisen.

Um eine Variable zu erstellen, die eine Zahl speichern soll, sieh dir das folgende Beispiel an:

### Beispiel:

Erstelle eine Variable namens `meineZahl` vom Typ `int` und weise ihr den Wert 15 zu:

```c++
int meineZahl = 15;
cout << meineZahl;
```

Du kannst auch eine Variable deklarieren, ohne den Wert zuzuweisen, und den Wert später zuweisen:

### Beispiel:

```c++
int meineZahl;
meineZahl = 15;
cout << meineZahl;
```

Beachte, dass ein neuer Wert, den du einer bestehenden Variablen zuweist, den vorherigen Wert überschreibt:

### Beispiel:

```c++
int meineZahl = 15; // meineZahl ist 15
meineZahl = 10; // Jetzt ist meineZahl 10
cout << meineZahl; // Gibt 10 aus
```

## Andere Typen

Eine Demonstration von anderen Datentypen:

### Beispiel:

```c++
int meineGanzzahl = 5;       // Integer (ganze Zahl ohne Dezimalstellen)
double meineFliesskommazahl = 5.99; // Fließkommazahl (mit Dezimalstellen)
char meinBuchstabe = 'D';     // Zeichen
string meinText = "Hallo";    // String (Text)
bool meinBoolean = true;     // Boolean (wahr oder falsch)
```

>   Mehr über die einzelnen Typen erfährst du im Kapitel Datentypen.

## Variablen anzeigen

Das Objekt `cout` wird zusammen mit dem Operator `<<` zur Anzeige von Variablen verwendet.

Um sowohl Text als auch eine Variable zu kombinieren, trennst du sie mit dem Operator `<<`:

### Beispiel:

```c++
int meinAlter = 35;
cout << "Ich bin " << meinAlter << " Jahre alt.";
```

## Variablen zusammenfügen

Um eine Variable zu einer anderen Variable hinzuzufügen, kannst du den Operator `+` verwenden:

### Beispiel:

```c++
int x = 5;
int y = 6;
int summe = x + y;
cout << summe;
```

------

## Mehrere Variablen deklarieren

Um mehr als eine Variable desselben Typs zu deklarieren, verwendest du eine durch Komma getrennte Liste:

### Beispiel:

```c++
int x = 5, y = 6, z = 50;
cout << x + y + z;
```

## Ein Wert für mehrere Variablen

Du kannst auch mehreren Variablen in einer Zeile **denselben Wert** zuweisen:

### Beispiel:

```c++
int x, y, z;
x = y = z = 50;
cout << x + y + z;
```

------

## C++ Bezeichner (Identifiers)

Alle C++-**Variablen** müssen mit **eindeutigen Namen** **identifiziert** werden.

Diese eindeutigen Namen werden **Bezeichner** genannt.

Bezeichner können kurze Namen sein (wie `x` und `y`) oder beschreibendere Namen (`alter`, `summe`, `gesamtVolumen`).

**Hinweis:** Es wird empfohlen, beschreibende Namen zu verwenden, um verständlichen und wartbaren Code zu erstellen:

### Beispiel:

```c++
// Gut
int minutenProStunde = 60;

// OK, aber nicht so leicht zu verstehen, was m eigentlich ist
int m = 60;
```

Die allgemeinen Regeln für die Benennung von Variablen sind:

*   Namen können Buchstaben, Ziffern und Unterstriche enthalten.
*   Namen müssen mit einem Buchstaben oder einem Unterstrich (`_`) beginnen.
*   Bei den Namen wird zwischen Groß- und Kleinschreibung unterschieden (`meineVariable` und `meinevariable` sind unterschiedliche Variablen).
*   Die Namen dürfen keine Leerzeichen oder Sonderzeichen wie `!`, `#`, `%` usw. enthalten.
*   Reservierte Wörter (wie C++-Schlüsselwörter, z. B. `int`) können nicht als Namen verwendet werden.

------

## C++ Konstanten

Wenn du nicht möchtest, dass andere (oder du selbst) vorhandene Variablenwerte ändern, verwendest du das Schlüsselwort `const` (damit wird die Variable als "konstant" deklariert, was bedeutet, dass sie **unveränderlich und schreibgeschützt** ist):

### Beispiel:

```c++
const int meineZahl = 15; // meineZahl wird immer 15 sein
meineZahl = 10; // Fehler: Zuweisung zu schreibgeschützter Variable 'meineZahl'
```

Du solltest die Variable immer dann als konstant deklarieren, wenn du Werte hast, die sich wahrscheinlich nicht ändern werden:

### Beispiel:

```c++
const int minutenProStunde = 60;
const float PI = 3.14;
```

## Anmerkungen zu Konstanten

Wenn du eine konstante Variable deklarierst, muss ihr ein Wert zugewiesen werden:

### Beispiel:

Zum Beispiel so:

```c++
const int minutenProStunde = 60;
```

Dies wird jedoch **nicht funktionieren**:

```c++
const int minutenProStunde;
minutenProStunde = 60; // Fehler
```

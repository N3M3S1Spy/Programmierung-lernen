## C++ If ... Else

## C++ Bedingungen und If-Anweisungen

Du weißt bereits, dass C++ die üblichen logischen Bedingungen aus der Mathematik unterstützt:

*   Kleiner als: `a < b`
*   Kleiner als oder gleich: `a <= b`
*   Größer als: `a > b`
*   Größer als oder gleich: `a >= b`
*   Gleich: `a == b`
*   Nicht gleich: `a != b`

Du kannst diese Bedingungen verwenden, um verschiedene Aktionen für verschiedene Entscheidungen durchzuführen.

In C++ gibt es die folgenden bedingten Anweisungen:

*   Verwende `if`, um einen Codeblock anzugeben, der ausgeführt wird, wenn eine bestimmte Bedingung erfüllt ist.
*   Verwende `else`, um einen Codeblock anzugeben, der ausgeführt wird, wenn die gleiche Bedingung falsch ist.
*   Verwende `else if`, um eine neue Bedingung anzugeben, die getestet wird, wenn die erste Bedingung falsch ist.
*   Verwende `switch`, um viele alternative Codeblöcke anzugeben, die ausgeführt werden sollen.

## Die if-Anweisung

Verwende die `if`-Anweisung, um einen Block von C++-Code anzugeben, der ausgeführt werden soll, wenn eine Bedingung `true` ist.

### Syntax:

```c++
if (Bedingung) {
  // Codeblock, der ausgeführt wird, wenn die Bedingung wahr ist
}
```

>   Beachte, dass `if` in Kleinbuchstaben geschrieben wird. Großbuchstaben (`If` oder `IF`) führen zu einem Fehler.

Im folgenden Beispiel werden zwei Werte getestet, um herauszufinden, ob 20 größer als 18 ist. Wenn die Bedingung `true` ist, wird ein Text ausgegeben:

### Beispiel:

```c++
if (20 > 18) {
  cout << "20 ist größer als 18";
}
```

Wir können auch Variablen testen:

### Beispiel:

```c++
int x = 20;
int y = 18;
if (x > y) {
  cout << "x ist größer als y";
}
```

**Beispiel erklärt:**

Im obigen Beispiel verwenden wir zwei Variablen, `x` und `y`, um zu prüfen, ob `x` größer als `y` ist (mit dem Operator `>`). Da `x` gleich 20 und `y` gleich 18 ist und wir wissen, dass 20 größer als 18 ist, geben wir auf dem Bildschirm aus, dass "x größer als y" ist.

------------

## Das else-Statement

Verwende die `else`-Anweisung, um einen Codeblock anzugeben, der ausgeführt wird, wenn die Bedingung `false` ist.

### Syntax:

```c++
if (Bedingung) {
  // Codeblock, der ausgeführt wird, wenn die Bedingung wahr ist
} else {
  // Codeblock, der ausgeführt wird, wenn die Bedingung falsch ist
}
```

### Beispiel:

```c++
int time = 20;
if (time < 18) {
  cout << "Guten Tag.";
} else {
  cout << "Guten Abend.";
}
// Gibt "Guten Abend." aus
```

**Beispiel erklärt:**

Im obigen Beispiel ist die Zeit (20) größer als 18, also ist die Bedingung `false`. Aus diesem Grund gehen wir zur `else`-Bedingung über und geben auf dem Bildschirm "Guten Abend" aus. Wäre die Zeit kleiner als 18, würde das Programm "Guten Tag" ausgeben.

------------

## Das else if-Statement

Verwende die `else if`-Anweisung, um eine neue Bedingung anzugeben, wenn die erste Bedingung `false` ist.

### Syntax:

```c++
if (Bedingung1) {
  // Codeblock, der ausgeführt wird, wenn Bedingung1 wahr ist
} else if (Bedingung2) {
  // Codeblock, der ausgeführt wird, wenn Bedingung1 falsch und Bedingung2 wahr ist
} else {
  // Codeblock, der ausgeführt wird, wenn Bedingung1 und Bedingung2 falsch sind
}
```

### Beispiel:

```c++
int time = 22;
if (time < 10) {
  cout << "Guten Morgen.";
} else if (time < 20) {
  cout << "Guten Tag.";
} else {
  cout << "Guten Abend.";
}
// Gibt "Guten Abend." aus
```

**Beispiel erklärt:**

Im obigen Beispiel ist die Zeit (22) größer als 10, also ist die **erste Bedingung** `false`. Die nächste Bedingung in der `else if`-Anweisung ist ebenfalls `false`, also gehen wir zur `else`-Bedingung über, da **Bedingung1** und **Bedingung2** beide `false` sind – und geben auf dem Bildschirm "Guten Abend" aus.

Wäre die Uhrzeit jedoch 14, würde unser Programm "Guten Tag" ausgeben.

------------

## Kurze If-Else-Anweisung (Ternärer Operator)

Es gibt auch eine Abkürzung für `if else`, die als **ternärer** Operator bezeichnet wird, weil sie aus drei Operanden besteht.

Sie kann verwendet werden, um mehrere Codezeilen durch eine einzige Zeile zu ersetzen, und wird häufig verwendet, um einfache `if else`-Anweisungen zu ersetzen:

### Syntax:

```c++
Variable = (Bedingung) ? AusdruckWennWahr : AusdruckWennFalsch;
```

Anstatt zu schreiben:

### Beispiel:

```c++
int time = 20;
if (time < 18) {
  cout << "Guten Tag.";
} else {
  cout << "Guten Abend.";
}
```

Kannst du einfach schreiben:

### Beispiel:

```c++
int time = 20;
string result = (time < 18) ? "Guten Tag." : "Guten Abend.";
cout << result;
```

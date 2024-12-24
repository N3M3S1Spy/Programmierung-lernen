# C++ If ... Else
## C++ Bedingungen und If-Anweisungen
Sie wissen bereits, dass C++ die üblichen logischen Bedingungen aus der Mathematik unterstützt:
- Kleiner als: `a < b`
- Kleiner als oder gleich: `a <= b`
- Größer als: `a > b`
- Größer als oder gleich: `a >= b`
- Gleich `a == b`
- Nicht gleich: `a != b`

Sie können diese Bedingungen verwenden, um verschiedene Aktionen für verschiedene Entscheidungen durchzuführen.

In C++ gibt es die folgenden bedingten Anweisungen:
- Verwenden Sie `if`, um einen Codeblock anzugeben, der ausgeführt wird, wenn eine bestimmte Bedingung erfüllt ist.
- Verwenden Sie `else`, um einen Codeblock anzugeben, der ausgeführt wird, wenn die gleiche Bedingung falsch ist.
- Verwenden Sie `else if`, um eine neue Bedingung anzugeben, die getestet wird, wenn die erste Bedingung falsch ist
- Verwenden Sie `switch`, um viele alternative Codeblöcke anzugeben, die ausgeführt werden sollen

## Die if-Anweisung
Verwenden Sie die `if` Anweisung, um einen Block von C++-Code anzugeben, der ausgeführt werden soll, wenn eine Bedingung `true` ist.
### Syntax:
```cpp
if (condition) {
  // block of code to be executed if the condition is true
}
```

> Beachten Sie, dass `if` in Kleinbuchstaben geschrieben wird. Großbuchstaben (If oder IF) führen zu einem Fehler.

Im folgenden Beispiel werden zwei Werte getestet, um herauszufinden, ob 20 größer als 18 ist. Wenn die Bedingung `true` ist, wird ein Text ausgegeben:
### Beispiel:
```cpp
if (20 > 18) {
  cout << "20 is greater than 18";
} 
```
Wir können auch Variablen testen:
### Beispiel:
```cpp
int x = 20;
int y = 18;
if (x > y) {
  cout << "x is greater than y";
} 
```

**Beispiel erklärt** 
Im obigen Beispiel verwenden wir zwei Variablen, **x** und **y**, um zu prüfen, ob x größer als y ist (mit dem Operator `>`). Da x gleich 20 und y gleich 18 ist und wir wissen, dass 20 größer als 18 ist, geben wir auf dem Bildschirm aus, dass "x größer als y" ist.

------------

# C++ Else
## Das else Statement
Verwenden Sie die `else` Anweisung, um einen Codeblock anzugeben, der ausgeführt wird, wenn die Bedingung `false` ist.
### Syntax:
```cpp
if (condition) {
  // block of code to be executed if the condition is true
} else {
  // block of code to be executed if the condition is false
}
```
### Beispiel:
```cpp
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening." 
```

**Beispiel erklärt**
Im obigen Beispiel ist die Zeit (20) größer als 18, also ist die Bedingung `false`. Aus diesem Grund gehen wir zur `else` Bedingung über und geben auf dem Bildschirm "Guten Abend" aus. Wäre die Zeit kleiner als 18, würde das Programm "Guten Tag" ausgeben.

------------

# C++ Else If
## Das else if Statement
Verwenden Sie die `else if` Anweisung, um eine neue Bedingung anzugeben, wenn die erste Bedingung `false` ist.
### Syntax:
```cpp
if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
```
### Beispiel:
```cpp
int time = 22;
if (time < 10) {
  cout << "Good morning.";
} else if (time < 20) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
}
// Outputs "Good evening." 
```

**Beispiel erklärt**
Im obigen Beispiel ist die Zeit (22) größer als 10, also ist die **erste Bedingung** `false`. Die nächste Bedingung in der `else if` Anweisung ist ebenfalls `false`, also gehen wir zur `else` Bedingung über, da **Bedingung1** und **Bedingung2** beide `false` sind - und geben auf dem Bildschirm "Guten Abend" aus. 

Wäre die Uhrzeit jedoch 14, würde unser Programm "Guten Tag" ausgeben.

------------

# Kurze If Else Anweisung
## Kurze If...Else Anweisung (Ternärer Operator)
Es gibt auch eine Abkürzung if else, die als **ternärer** Operator bezeichnet wird, weil sie aus drei Operanden besteht.

Sie kann verwendet werden, um mehrere Codezeilen durch eine einzige Zeile zu ersetzen, und wird häufig verwendet, um einfache if else Anweisungen zu ersetzen:
### Syntax:
```cpp
variable = (condition) ? expressionTrue : expressionFalse;
```
Anstatt zu schreiben:
### Beispiel:
```cpp
int time = 20;
if (time < 18) {
  cout << "Good day.";
} else {
  cout << "Good evening.";
} 
```
Sie können einfach schreiben:
### Beispiel:
```cpp
int time = 20;
string result = (time < 18) ? "Good day." : "Good evening.";
cout << result; 
```

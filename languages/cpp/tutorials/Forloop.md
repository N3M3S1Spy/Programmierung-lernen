# C++ For Loop
## C++ For Loop
Wenn Sie genau wissen, wie oft Sie einen Codeblock in einer Schleife durchlaufen wollen, verwenden Sie die `for` Schleife anstelle einer `while` Schleife:
### Syntax:
```cpp
for (statement 1; statement 2; statement 3) {
  // code block to be executed
}
```

**Anweisung 1** wird einmal ausgeführt, bevor der Codeblock ausgeführt wird.

**Anweisung 2** definiert die Bedingung für die Ausführung des Codeblocks.

**Anweisung 3** wird jedes Mal ausgeführt, nachdem der Codeblock ausgeführt wurde.

Das folgende Beispiel wird die Zahlen 0 bis 4 ausgeben:
### Beispiel:
```cpp
for (int i = 0; i < 5; i++) {
  cout << i << "\n";
}
```
**Beispiel erklärt:**

Anweisung 1 setzt eine Variable, bevor die Schleife beginnt (`int i = 0`).

Anweisung 2 definiert die Bedingung, damit die Schleife ausgeführt wird (i muss kleiner als 5 sein). Wenn die Bedingung wahr ist, wird die Schleife wieder von vorne beginnen, wenn sie falsch ist, endet die Schleife.

Anweisung 3 erhöht einen Wert (`i++`) jedes Mal, nachdem der Codeblock in der Schleife ausgeführt wurde.

## Ein weiteres Beispiel
### Beispiel:
```cpp
for (int i = 0; i <= 10; i = i + 2) {
  cout << i << "\n";
}
```

-------------

# C++ Verschachtelte Loops
## Verschachtelte Loops
Es ist auch möglich, eine Schleife innerhalb einer anderen Schleife zu platzieren. Dies wird als verschachtelte Schleife bezeichnet.

Die "innere Schleife" wird einmal für jede Iteration der "äußeren Schleife" ausgeführt:
### Beispiel:
```cpp
// Outer loop
for (int i = 1; i <= 2; ++i) {
  cout << "Outer: " << i << "\n"; // Executes 2 times

  // Inner loop
  for (int j = 1; j <= 3; ++j) {
    cout << " Inner: " << j << "\n"; // Executes 6 times (2 * 3)
  }
}
```

-------------

# C++ Die foreach loop
## Die foreach Loop
Es gibt auch eine "**for-each** loop" (auch bekannt als ranged-basierte for-Schleife), die ausschließlich zum Durchlaufen von Elementen in einem Array (oder anderen Datenstrukturen) verwendet wird:
### Syntax:
```cpp
for (type variableName : arrayName) {
  // code block to be executed
}
```
Das folgende Beispiel gibt alle Elemente eines Arrays aus, wobei eine "**for-each** loop" verwendet wird:
### Beispiel:
```cpp
int myNumbers[5] = {10, 20, 30, 40, 50};
for (int i : myNumbers) {
  cout << i << "\n";
}
```

> **Hinweis:** Machen Sie sich keine Sorgen, wenn Sie das obige Beispiel nicht verstehen. Sie werden mehr über Arrays im Kapitel über C++-Arrays erfahren.
>
> **Gut zu wissen**: Die **for-each**-Schleife wurde in C++ Version 11 (2011) eingeführt.

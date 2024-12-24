# C++ While Loop
## C++ Loops
Schleifen können einen Codeblock so lange ausführen, wie eine festgelegte Bedingung erfüllt ist.

Schleifen sind nützlich, weil sie Zeit sparen, Fehler reduzieren und den Code leserlicher machen.
## C++ While Loop
Die `while` loop durchläuft einen Codeblock so lange, wie eine bestimmte Bedingung `true` ist:
### Syntax:
```cpp
while (condition) {
  // code block to be executed
}
```
Im folgenden Beispiel wird der Code in der Schleife immer wieder ausgeführt, solange eine Variable (`i`) kleiner als 5 ist:
### Beispiel:
```cpp
while (condition) {
  // code block to be executed
}
```

```diff
- Hinweis: Vergessen Sie nicht, die in der Bedingung verwendete Variable zu erhöhen, sonst wird die Schleife nie beendet!
```

-----------

# C++ Do/While Loop
## Die Do/While Loop
Die `do/while` Schleife ist eine Variante der `while` Schleife. Diese Schleife führt den Codeblock einmal aus, bevor überprüft wird, ob die Bedingung wahr ist. Danach wird die Schleife so lange wiederholt, wie die Bedingung wahr bleibt.
### Syntax:
```cpp
do {
  // code block to be executed
}
while (condition);
```
Das folgende Beispiel verwendet eine `do/while` Schleife. Die Schleife wird immer mindestens einmal ausgeführt, selbst wenn die Bedingung falsch ist, da der Codeblock ausgeführt wird, bevor die Bedingung getestet wird:
### Beispiel:
```cpp
int i = 0;
do {
  cout << i << "\n";
  i++;
}
while (i < 5);
```
```diff
- Hinweis: Vergessen Sie nicht, die in der Bedingung verwendete Variable zu erhöhen, sonst wird die Schleife nie beendet!
```

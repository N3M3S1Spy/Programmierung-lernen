# C++ Break und Continue
## C++ Break
Du hast das `break`-Schlüsselwort bereits in einem früheren Kapitel dieses Tutorials gesehen. Es wurde verwendet, um aus einer [switch](Switch.md) Anweisung herauszuspringen.

Das `break`-Schlüsselwort kann auch verwendet werden, um aus einer Schleife herauszuspringen.

Dieses Beispiel springt aus der Schleife, wenn `i` gleich 4 ist:
### Beispiel:
```cpp
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    break;
  }
  cout << i << "\n";
} 
```

## C++ Continue
Das `continue`-Schlüsselwort bricht eine Iteration (in der Schleife) ab, wenn eine festgelegte Bedingung erfüllt ist, und fährt mit der nächsten Iteration in der Schleife fort.

Dieses Beispiel überspringt den Wert 4:
### Beispiel:
```cpp
for (int i = 0; i < 10; i++) {
  if (i == 4) {
    continue;
  }
  cout << i << "\n";
} 
```

## Break und Continue in While Loop
Sie können auch `break` und continue in `while` Schleifen verwenden:
### Break Beispiel:
```cpp
int i = 0;
while (i < 10) {
  cout << i << "\n";
  i++;
  if (i == 4) {
    break;
  }
} 
```
### Continue Beispiel:
```cpp
int i = 0;
while (i < 10) {
  if (i == 4) {
    i++;
    continue;
  }
  cout << i << "\n";
  i++;
} 
```

# C++ Booleans
## C++ Booleans
In der Programmierung benötigt man sehr oft einen Datentyp, der nur einen von zwei Werten haben kann, wie z. B.:
- JA / NEIN
- AN / AUS
- WAHR / FALSCH

Dafür gibt es in C++ den Datentyp `bool`, der die Werte `true` (1) oder `false` (0) annehmen kann.

## Boolesche Werte
Eine boolesche Variable wird mit dem Schlüsselwort `bool` deklariert und kann die Werte `true` oder `false` annehmen:
### Beispiel:
```c++
bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFishTasty;  // Outputs 0 (false) 
```

Aus dem obigen Beispiel können Sie ersehen, dass ein wahrer Wert 1 und ein falscher Wert 0 zurückgibt.

Es ist jedoch üblicher, einen booleschen Wert durch den Vergleich von Werten und Variablen zurückzugeben.

-------------

# C++ Boolesche Ausdrücke
## Boolescher Ausdruck
Ein boolescher Ausdruck gibt einen booleschen Wert zurück, der entweder 1 (wahr) oder 0 (falsch) ist. 

Dies ist nützlich, um Logik aufzubauen und Antworten zu finden.

Sie können einen [Vergleichsoperator](), wie z. B. den Operator größer als (`>`), verwenden, um herauszufinden, ob ein Ausdruck (oder eine Variable) wahr oder falsch ist:
### Beispiel:
```c++
int x = 10;
int y = 9;
cout << (x > y); // returns 1 (true), because 10 is higher than 9 
```
Oder noch einfacher:
### Beispiel:
```c++
cout << (10 > 9); // returns 1 (true), because 10 is higher than 9 
```

In den folgenden Beispielen verwenden wir den Operator equal to (`==`), um einen Ausdruck auszuwerten:
### Beispiel:
```c++
int x = 10;
cout << (x == 10);  // returns 1 (true), because the value of x is equal to 10 
```
### Beispiel:
```c++
cout << (10 == 15);  // returns 0 (false), because 10 is not equal to 15 
```

# C++ Operatoren
Operatoren werden verwendet, um Operationen mit Variablen und Werten durchzuführen. 

Im folgenden Beispiel verwenden wir den Operator +, um zwei Werte zu addieren:
### Beispiel:
```cpp
int x = 100 + 50; 
```

Der Operator `+` wird zwar häufig verwendet, um zwei Werte zu addieren, wie im obigen Beispiel, er kann aber auch verwendet werden, um eine Variable und einen Wert oder eine Variable und eine andere Variable zu addieren:
### Beispiel:
```cpp
int sum1 = 100 + 50;        // 150 (100 + 50)
int sum2 = sum1 + 250;      // 400 (150 + 250)
int sum3 = sum2 + sum2;     // 800 (400 + 400) 
```

C++ unterteilt die Operatoren in die folgenden Gruppen:
- Arithmetic operators
- Assignment operators
- Comparison operators
- Logical operators
- Bitwise operators

## Arithmetic Operators
Arithmetische Operatoren werden verwendet, um allgemeine mathematische Operationen durchzuführen.
| Operatoren | Namen | Beschreibung | Beispiel |
|-------------|---------------|---------------|----------|
| + | Addition | Addiert zwei Werte zusammen | x + y |
| - | Subtraction | Subtrahiert einen Wert von einem anderen | x + y |
| * | Multiplication | Multipliziert zwei Werte | x * y |
| / | Division | Dividiert einen Wert durch einen anderen | x / y |
| % | Modulus | Gibt den Rest der Division zurück | x % y |
| ++ | Increment | Erhöht den Wert einer Variablen um 1 | ++x |
| -- | Decrement | Verringert den Wert einer Variablen um 1 | --x |

-------------

# C++ Zuweisungsoperatoren
Zuweisungsoperatoren werden verwendet, um Variablen Werte zuzuweisen. 

Im folgenden Beispiel verwenden wir den Zuweisungsoperator (`=`), um einer Variablen namens x den Wert 10 zuzuweisen:
### Beispiel:
```cpp
int x = 10; 
```

Der **Additionszuweisungsoperator** (`+=`) fügt einer Variablen einen Wert hinzu:
### Beispiel:
```cpp
int x = 10;
x += 5; 
```

Eine Liste aller Zuweisungsoperatoren:
| Operator | Beispiel | Das selbe wie |
|----------|----------|------------|
| =        | x = 5    | x = 5      |
| +=       | x += 3   | x = x + 3  |
| -=       | x -= 3   | x = x - 3  |
| *=       | x *= 3   | x = x * 3  |
| /=       | x /= 3   | x = x / 3  |
| %=       | x %= 3   | x = x % 3  |
| &=       | x &= 3   | x = x & 3  |
| \|=      | x \|= 3  | x = x \| 3 |
| ^=       | x ^= 3   | x = x ^ 3  |
| >>=      | x >>= 3  | x = x >> 3 |
| <<=      | x <<= 3  | x = x << 3 |

-------------

# C++ Vergleichsoperatoren
Vergleichsoperatoren werden verwendet, um zwei Werte (oder Variablen) zu vergleichen. Dies ist in der Programmierung wichtig, weil es uns hilft, Antworten zu finden und Entscheidungen zu treffen.

Der Rückgabewert eines Vergleichs ist entweder `1` oder `0`, was **wahr** (1) oder **falsch** (0) bedeutet. Diese Werte sind als boolesche Werte bekannt, und Sie werden mehr über sie im Kapitel Boolesche Werte und If..Else erfahren.

Im folgenden Beispiel verwenden wir den **Größer-als**-Operator (`>`), um herauszufinden, ob 5 größer ist als 3:
### Beispiel:
```cpp
int x = 5;
int y = 3;
cout << (x > y); // returns 1 (true) because 5 is greater than 3 
```

Eine Liste mit allen Vergleichsoperatoren:
| Operator | Name                           | Beispiel   |
|----------|--------------------------------|------------|
| ==       | Gleich                         | x == y     |
| !=       | Ungleich                       | x != y     |
| >        | Größer als                     | x > y      |
| <        | Kleiner als                    | x < y      |
| >=       | Größer oder gleich             | x >= y     |
| <=       | Kleiner oder gleich            | x <= y     |

-------------

# C++ Logische Operatoren
Wie bei Vergleichsoperatoren können Sie auch mit logischen Operatoren auf **wahre** (`1`) oder **falsche** (`0`) Werte testen.

Logische Operatoren werden verwendet, um die Logik zwischen Variablen oder Werten zu bestimmen:
# Logische Operatoren

| Operator | Name           | Beschreibung                                                             | Beispiel              |
|----------|----------------|--------------------------------------------------------------------------|-----------------------|
| &&       | Logisches UND  | Gibt `true` zurück, wenn beide Aussagen wahr sind                        | x < 5 && x < 10       |
| \|\|     | Logisches ODER | Gibt `true` zurück, wenn eine der Aussagen wahr ist                      | x < 5 || x < 4        |
| !        | Logisches NICHT| Kehrt das Ergebnis um, gibt `false` zurück, wenn das Ergebnis `true` ist | !(x < 5 && x < 10)    |

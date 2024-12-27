## C++ Operatoren

Operatoren werden verwendet, um Operationen mit Variablen und Werten durchzuführen.

Im folgenden Beispiel verwenden wir den Operator `+`, um zwei Werte zu addieren:

### Beispiel:

```c++
int x = 100 + 50;
```

Der Operator `+` wird zwar häufig verwendet, um zwei Werte zu addieren, wie im obigen Beispiel, er kann aber auch verwendet werden, um eine Variable und einen Wert oder eine Variable und eine andere Variable zu addieren:

### Beispiel:

```c++
int summe1 = 100 + 50;   // 150 (100 + 50)
int summe2 = summe1 + 250; // 400 (150 + 250)
int summe3 = summe2 + summe2; // 800 (400 + 400)
```

C++ unterteilt die Operatoren in die folgenden Gruppen:

*   Arithmetische Operatoren
*   Zuweisungsoperatoren
*   Vergleichsoperatoren
*   Logische Operatoren
*   Bitweise Operatoren

## Arithmetische Operatoren

Arithmetische Operatoren werden verwendet, um allgemeine mathematische Operationen durchzuführen.

| Operator | Name         | Beschreibung                               | Beispiel |
| :------- | :----------- | :----------------------------------------- | :------- |
| `+`      | Addition     | Addiert zwei Werte zusammen.                 | `x + y`  |
| `-`      | Subtraktion  | Subtrahiert einen Wert von einem anderen.    | `x - y`  |
| `*`      | Multiplikation | Multipliziert zwei Werte.                    | `x * y`  |
| `/`      | Division     | Dividiert einen Wert durch einen anderen.       | `x / y`  |
| `%`      | Modulo       | Gibt den Rest der Division zurück.           | `x % y`  |
| `++`     | Inkrement    | Erhöht den Wert einer Variablen um 1.       | `++x`    |
| `--`     | Dekrement    | Verringert den Wert einer Variablen um 1.    | `--x`    |

-------------

## C++ Zuweisungsoperatoren

Zuweisungsoperatoren werden verwendet, um Variablen Werte zuzuweisen.

Im folgenden Beispiel verwenden wir den Zuweisungsoperator (`=`), um einer Variablen namens `x` den Wert 10 zuzuweisen:

### Beispiel:

```c++
int x = 10;
```

Der **Additionszuweisungsoperator** (`+=`) fügt einer Variablen einen Wert hinzu:

### Beispiel:

```c++
int x = 10;
x += 5; // x ist jetzt 15 (x = x + 5)
```

Eine Liste aller Zuweisungsoperatoren:

| Operator | Beispiel   | Entspricht                               |
| :------- | :--------- | :--------------------------------------- |
| `=`      | `x = 5`    | `x = 5`                                  |
| `+=`     | `x += 3`   | `x = x + 3`                             |
| `-=`     | `x -= 3`   | `x = x - 3`                             |
| `*=`     | `x *= 3`   | `x = x * 3`                             |
| `/=`     | `x /= 3`   | `x = x / 3`                             |
| `%=`     | `x %= 3`   | `x = x % 3`                             |
| `&=`     | `x &= 3`   | `x = x & 3` (Bitweises UND und Zuweisung) |
| `|=`     | `x |= 3`   | `x = x \| 3` (Bitweises ODER und Zuweisung)|
| `^=`     | `x ^= 3`   | `x = x ^ 3` (Bitweises XOR und Zuweisung)|
| `>>=`    | `x >>= 3`  | `x = x >> 3` (Bitweise Rechtsverschiebung und Zuweisung) |
| `<<=`    | `x <<= 3`  | `x = x << 3` (Bitweise Linksverschiebung und Zuweisung) |

-------------

## C++ Vergleichsoperatoren

Vergleichsoperatoren werden verwendet, um zwei Werte (oder Variablen) zu vergleichen. Dies ist in der Programmierung wichtig, weil es uns hilft, Antworten zu finden und Entscheidungen zu treffen.

Der Rückgabewert eines Vergleichs ist entweder `1` oder `0`, was **wahr** (`true`, 1) oder **falsch** (`false`, 0) bedeutet. Diese Werte sind als boolesche Werte bekannt.

Im folgenden Beispiel verwenden wir den **Größer-als**-Operator (`>`), um herauszufinden, ob 5 größer ist als 3:

### Beispiel:

```c++
int x = 5;
int y = 3;
cout << (x > y); // Gibt 1 (true) aus, weil 5 größer als 3 ist
```

Eine Liste mit allen Vergleichsoperatoren:

| Operator | Name                | Beispiel   |
| :------- | :------------------ | :--------- |
| `==`     | Gleich              | `x == y`   |
| `!=`     | Ungleich            | `x != y`   |
| `>`      | Größer als          | `x > y`    |
| `<`      | Kleiner als         | `x < y`    |
| `>=`     | Größer oder gleich  | `x >= y`   |
| `<=`     | Kleiner oder gleich | `x <= y`   |

-------------

## C++ Logische Operatoren

Wie bei Vergleichsoperatoren können Sie auch mit logischen Operatoren auf **wahre** (`true`, 1) oder **falsche** (`false`, 0) Werte testen.

Logische Operatoren werden verwendet, um die Logik zwischen Variablen oder Werten zu bestimmen:

| Operator | Name           | Beschreibung                                                                                             | Beispiel            |
| :------- | :------------- | :------------------------------------------------------------------------------------------------------- | :------------------ |
| `&&`     | Logisches UND    | Gibt `true` zurück, wenn *beide* Aussagen wahr sind.                                                      | `x < 5 && x < 10`   |
| `\|\|`   | Logisches ODER   | Gibt `true` zurück, wenn *mindestens eine* der Aussagen wahr ist.                                           | `x < 5 \|\| x < 4`  |
| `!`      | Logisches NICHT | Kehrt das Ergebnis um; gibt `false` zurück, wenn das Ergebnis `true` ist, und umgekehrt. | `!(x < 5 && x < 10)` |

## C++ Datentypen

Wie im Kapitel über Variablen erläutert, muss eine Variable in C++ einen bestimmten Datentyp haben:

### Beispiel:

```c++
int meineZahl = 5;         // Integer (ganze Zahl)
float meineFliesskommazahl = 5.99; // Fließkommazahl
double meineDoppelteFliesskommazahl = 9.98; // Fließkommazahl mit doppelter Genauigkeit
char meinBuchstabe = 'D';     // Zeichen
bool meinBoolean = true;     // Boolean (Wahrheitswert)
string meinText = "Hallo";    // Zeichenkette (Text)
```

## Grundlegende Datentypen

Der Datentyp gibt die Größe und die Art der Informationen an, die die Variable speichern soll:

| Datentyp | Größe (ungefährt) | Beschreibung                                                                                                                                                                                                                                                                                       |
| -------- | ----------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| `bool`   | 1 Byte            | Speichert den Wert `true` (wahr) oder `false` (falsch).                                                                                                                                                                                                                                              |
| `char`   | 1 Byte            | Speichert ein einzelnes Zeichen/Buchstaben/Zahl oder ASCII-Werte.                                                                                                                                                                                                                                    |
| `int`    | 2 oder 4 Bytes    | Speichert ganze Zahlen, ohne Dezimalstellen. Die genaue Größe hängt von der Systemarchitektur ab.                                                                                                                                                                                                    |
| `float`  | 4 Bytes           | Speichert Fließkommazahlen, die eine oder mehrere Dezimalstellen enthalten. Ausreichend für die Speicherung von 6–7 Dezimalstellen.                                                                                                                                                                   |
| `double` | 8 Bytes           | Speichert Fließkommazahlen mit doppelter Genauigkeit, die eine oder mehrere Dezimalstellen enthalten. Ausreichend für die Speicherung von ca. 15 Dezimalstellen. Bietet eine höhere Genauigkeit als `float`.                                                                                             |

>   **Hinweis:** Mehr zu den einzelnen Datentypen erfährst du in den nächsten Kapiteln.

--------------

## C++ Numerische Datentypen

Verwende `int`, wenn du eine ganze Zahl ohne Nachkommastellen speichern musst, wie 35 oder 1000, und `float` oder `double`, wenn du eine Fließkommazahl (mit Nachkommastellen) benötigst, wie 9,99 oder 3,1415.

### `int`

```c++
int meineGanzzahl = 1000;
cout << meineGanzzahl;
```

### `float`

```c++
float meineFliesskommazahl = 5.75;
cout << meineFliesskommazahl;
```

### `double`

```c++
double meineDoppelteFliesskommazahl = 19.99;
cout << meineDoppelteFliesskommazahl;
```

>   `float` vs. `double`
>
>   Die **Genauigkeit** einer Fließkommazahl gibt an, wie viele Stellen der Wert nach dem Dezimalpunkt haben kann. Die Genauigkeit von `float` beträgt nur sechs oder sieben Dezimalstellen, während `double`-Variablen eine Genauigkeit von etwa 15 Stellen haben. Daher ist es in den meisten Fällen sicherer, `double` für Berechnungen zu verwenden, insbesondere wenn eine hohe Genauigkeit erforderlich ist.

## Wissenschaftliche Notation (Exponentialschreibweise)

Eine Fließkommazahl kann auch in wissenschaftlicher Notation mit einem "e" oder "E" geschrieben werden, um die Potenz von 10 anzugeben:

### Beispiel:

```c++
float f1 = 35e3;  // 35 * 10^3 = 35000
double d1 = 12E4; // 12 * 10^4 = 120000
cout << f1 << endl; // Gibt 35000 aus
cout << d1 << endl; // Gibt 120000 aus
```

--------------

## C++ Boolesche Datentypen

Ein boolescher Datentyp wird mit dem Schlüsselwort `bool` deklariert und kann nur die Werte `true` (wahr) oder `false` (falsch) annehmen.

Wenn der Wert ausgegeben wird, entspricht `true` dem Wert `1` und `false` dem Wert `0`.

### Beispiel:

```c++
bool istProgrammierenCool = true;
bool schmecktFischGut = false;
cout << istProgrammierenCool << endl;  // Gibt 1 (true) aus
cout << schmecktFischGut << endl;  // Gibt 0 (false) aus
```

--------------

## C++ Zeichendatentypen (`char`)

Der Datentyp `char` wird verwendet, um ein **einzelnes** Zeichen zu speichern. Das Zeichen muss von einfachen Anführungszeichen umgeben sein, wie 'A' oder 'c':

### Beispiel:

```c++
char meineNote = 'B';
cout << meineNote << endl;
```

Wenn du mit ASCII vertraut bist, kannst du auch ASCII-Werte verwenden, um bestimmte Zeichen anzuzeigen:

### Beispiel:

```c++
char a = 65, b = 66, c = 67;
cout << a << b << c << endl; // Gibt ABC aus
```

--------------

## C++ Zeichenketten (Strings)

Der Typ `string` wird zum Speichern einer Folge von Zeichen (Text) verwendet. Er ist kein eingebauter Typ, verhält sich aber in seiner grundlegendsten Verwendung wie ein solcher. String-Werte müssen von doppelten Anführungszeichen umgeben sein:

### Beispiel:

```c++
string meineBegruessung = "Hallo";
cout << meineBegruessung << endl;
```

Um Strings zu verwenden, musst du die `<string>`-Bibliothek in den Quellcode einbinden:

### Beispiel:

```c++
#include <iostream>
#include <string> // Die string-Bibliothek einbinden

using namespace std;

int main() {
    string meineBegruessung = "Hallo";
    cout << meineBegruessung << endl;
    return 0;
}
```

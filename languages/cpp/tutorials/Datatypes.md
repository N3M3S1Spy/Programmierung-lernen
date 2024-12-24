# C++ Datentypen
Wie im Kapitel über Variablen erläutert, muss eine Variable in C++ einen bestimmten Datentyp haben:
### Beispiel:
```cpp
int myNum = 5;               // Integer (whole number)
float myFloatNum = 5.99;     // Floating point number
double myDoubleNum = 9.98;   // Floating point number
char myLetter = 'D';         // Character
bool myBoolean = true;       // Boolean
string myText = "Hello";     // String 
```

## Grundlegende Datentypen
Der Datentyp gibt die Größe und die Art der Informationen an, die die Variable speichern soll:

| Daten Typen | Size | Beschreibung |
|-------------|---------------|---------------|
| boolean | 1 byte | Speichert den Wert wahr oder falsch |
| char | 1 byte | Speichert ein einzelnes Zeichen/Buchstabe/Zahl oder ASCII-Werte |
| int | 2 or 4 bytes | Speichert ganze Zahlen, ohne Dezimalstellen |
| float | 4 bytes | Speichert Bruchzahlen, die eine oder mehrere Dezimalstellen enthalten. Ausreichend für die Speicherung von 6-7 Dezimalziffern |
| double | 8 bytes | Speichert Bruchzahlen, die eine oder mehrere Dezimalstellen enthalten. Ausreichend für die Speicherung von 15 Dezimalziffern |

> **Hinweis:** Mehr zu den einzelnen Datentypen erfahren Sie in den nächsten Kapiteln.

--------------

# C++ Numerische Datentypen
Verwenden Sie `int`, wenn Sie eine ganze Zahl ohne Nachkommastellen speichern müssen, wie 35 oder 1000, und `float` oder `double`, wenn Sie eine Fließkommazahl (mit Nachkommastellen) benötigen, wie 9,99 oder 3,14515.
### int
```cpp
int myNum = 1000;
cout << myNum; 
```
### float
```cpp
float myNum = 5.75;
cout << myNum; 
```
### double
```cpp
double myNum = 19.99;
cout << myNum; 
```

> `float` vs. `double`
>
> Die **Genauigkeit** einer Fließkommazahl gibt an, wie viele Stellen der Wert nach dem Dezimalpunkt haben kann. Die Genauigkeit von `float` beträgt nur sechs oder sieben Dezimalstellen, während `double` Variablen eine Genauigkeit von etwa 15 Stellen haben. Daher ist es sicherer, `double` für die meisten Berechnungen zu verwenden.

## Wissenschaftliche Zahlen
Eine Gleitkommazahl kann auch eine wissenschaftliche Zahl mit einem "e" sein, um die Potenz von 10 anzugeben:
### Beispiel:
```cpp
float f1 = 35e3;
double d1 = 12E4;
cout << f1;
cout << d1; 
```

--------------

# C++ Boolesche Datentypen
Ein boolescher Datentyp wird mit dem Schlüsselwort `bool` deklariert und kann nur die Werte `true` oder `false` annehmen.

Wenn der Wert zurückgegeben wird, ist `true` = `1` und `false` = `0`.
### Beispiel:
```cpp
bool isCodingFun = true;
bool isFishTasty = false;
cout << isCodingFun;  // Outputs 1 (true)
cout << isFishTasty;  // Outputs 0 (false) 
```

--------------

# C++ Character Datentypen
Der Datentyp `char` wird verwendet, um ein **einzelnes** Zeichen zu speichern. Das Zeichen muss von einfachen Anführungszeichen umgeben sein, wie 'A' oder 'c':
### Beispiel:
```cpp
char myGrade = 'B';
cout << myGrade; 
```

Wenn Sie mit ASCII vertraut sind, können Sie auch ASCII-Werte verwenden, um bestimmte Zeichen anzuzeigen:
### Beispiel:
```cpp
char a = 65, b = 66, c = 67;
cout << a;
cout << b;
cout << c;
```

--------------

# C++ String Datentypen
Der Typ `String` wird zum Speichern einer Folge von Zeichen (Text) verwendet. Er ist kein eingebauter Typ, verhält sich aber in seiner grundlegendsten Verwendung wie ein solcher. String-Werte müssen von doppelten Anführungszeichen umgeben sein:
### Beispiel:
```cpp
string greeting = "Hello";
cout << greeting; 
```

Um Strings zu verwenden, müssen Sie eine zusätzliche Header-Datei in den Quellcode aufnehmen, die `<string>` Bibliothek:
```cpp
// Include the string library
#include <string>

// Create a string variable
string greeting = "Hello";

// Output string value
cout << greeting; 
```

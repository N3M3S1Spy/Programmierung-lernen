# C++ Strings
Strings werden zum Speichern von Text/Zeichen verwendet,

z. B. ist "Hello World" ein String.

Eine `String` Variable enthält eine Sammlung von Zeichen, die von doppelten Anführungszeichen umgeben sind:
### Beispiel:
Create a variable of type `string` and assign it a value:
```cpp
string greeting = "Hello"; 
```

Um Strings zu verwenden, müssen Sie eine zusätzliche Header-Datei in den Quellcode aufnehmen, die `<string>` Bibliothek:
### Beispiel:
```cpp
// Include the string library
#include <string>

// Create a string variable
string greeting = "Hello"; 
```

----------------

# C++ String Verkettung
Der Operator `+` kann zwischen Zeichenketten verwendet werden, um sie zu einer neuen Zeichenkette zu addieren. Dies wird als **Verkettung** bezeichnet:
### Beispiel:
```cpp
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName + lastName;
cout << fullName; 
```

Im obigen Beispiel haben wir ein Leerzeichen nach firstName eingefügt, um bei der Ausgabe ein Leerzeichen zwischen John und Doe zu erzeugen. Sie können jedoch auch ein Leerzeichen mit Anführungszeichen (`" "` oder `' '`) einfügen:
### Beispiel:
```cpp
string firstName = "John";
string lastName = "Doe";
string fullName = firstName + " " + lastName;
cout << fullName; 
```

## Anhängen
Ein String in C++ ist eigentlich ein Objekt, das Funktionen enthält, die bestimmte Operationen mit Strings durchführen können. Zum Beispiel können Sie mit der Funktion `append()` auch Strings aneinanderhängen:
### Beispiel:
```cpp
string firstName = "John ";
string lastName = "Doe";
string fullName = firstName.append(lastName);
cout << fullName; 
```

----------------

# C++ Nummern and Strings

```diff
- ACHTUNG!
- C++ verwendet den Operator `+` sowohl für die **Addition** als auch für die **Verkettung**.
- Zahlen werden addiert. Zeichenketten werden verkettet.
```

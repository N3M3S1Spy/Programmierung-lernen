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

Wenn Sie zwei Zahlen addieren, ist das Ergebnis eine Zahl:
### Beispiel:
```cpp
int x = 10;
int y = 20;
int z = x + y;      // z will be 30 (an integer) 
```

Wenn Sie zwei Zeichenfolgen addieren, ist das Ergebnis eine Verkettung von Zeichenfolgen:
### Beispiel:
```cpp
string x = "10";
string y = "20";
string z = x + y;   // z will be 1020 (a string)  
```

Wenn Sie versuchen, eine Zahl an eine Zeichenkette anzuhängen, tritt ein Fehler auf:
### Beispiel:
```cpp
string x = "10";
int y = 20;
string z = x + y; 
```

----------------

# C++ String Lenght
Um die Länge einer Zeichenkette zu ermitteln, verwenden Sie die Funktion `length()`:
### Beispiel:
```cpp
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.length();
```

**Tipp:** In einigen C++-Programmen wird die Funktion `size()`  verwendet, um die Länge einer Zeichenkette zu ermitteln. Dies ist nur ein Alias von `length()`. Es bleibt Ihnen überlassen, ob Sie `length()` oder `size()` verwenden wollen:
### Beispiel:
```cpp
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "The length of the txt string is: " << txt.size(); 
```

----------------

# C++ Access Strings
Sie können auf die Zeichen in einer Zeichenkette zugreifen, indem Sie auf die Indexnummer in eckigen Klammern `[]` verweisen. 

Dieses Beispiel gibt das **erste Zeichen** in **myString** aus:
### Beispiel:
```cpp
string myString = "Hello";
cout << myString[0];
// Outputs H
```

> **Hinweis:** String-Indizes beginnen mit 0: [0] ist das erste Zeichen. [1] ist das zweite Zeichen, usw.

Dieses Beispiel gibt das **zweite Zeichen** in **myString** aus:
### Beispiel:
```cpp
string myString = "Hello";
cout << myString[1];
// Outputs e
```

Um das letzte Zeichen einer Zeichenkette zu drucken, können Sie den folgenden Code verwenden:
### Beispiel:
```cpp
string myString = "Hello";
cout << myString[myString.length() - 1];
// Outputs o
```

## String Zeichen ändern
Um den Wert eines bestimmten Zeichens in einer Zeichenkette zu ändern, geben Sie die Indexnummer an und verwenden Sie einfache Anführungszeichen:
### Beispiel:
```cpp
string myString = "Hello";
myString[0] = 'J';
cout << myString;
// Outputs Jello instead of Hello
```

## Die Funktion at()
Die `<string>` Bibliothek verfügt auch über eine `at()` Funktion, die für den Zugriff auf Zeichen in einer Zeichenkette verwendet werden kann:
### Beispiel:
```cpp
string myString = "Hello";
cout << myString; // Outputs Hello

cout << myString.at(0);  // First character
cout << myString.at(1);  // Second character
cout << myString.at(myString.length() - 1);  // Last character

myString.at(0) = 'J';
cout << myString;  // Outputs Jello
```

----------------

# C++ Special Characters
Da Zeichenketten in Anführungszeichen geschrieben werden müssen, wird C++ diese Zeichenkette falsch verstehen und einen Fehler erzeugen:
```cpp
string txt = "We are the so-called "Vikings" from the north.";
```

Die Lösung, um dieses Problem zu vermeiden, ist die Verwendung des Backslash-Escape-Zeichens. 

Das Backslash-Escape-Zeichen (\) verwandelt Sonderzeichen in Zeichenfolgen:
# Escape-Zeichen

| Escape-Zeichen | Ergebnis | Beschreibung     |
|----------------|----------|------------------|
| \'             | '        | Einfaches Anführungszeichen |
| \"             | "        | Doppeltes Anführungszeichen |
| \\             | \        | Backslash        |

Die Sequenz `\"` fügt ein doppeltes Anführungszeichen in eine Zeichenkette ein:
### Beispiel:
```cpp
string txt = "We are the so-called \"Vikings\" from the north.";
```

Die Sequenz `\'` fügt ein einzelnes Anführungszeichen in eine Zeichenkette ein:
### Beispiel:
```cpp
string txt = "It\'s alright.";
```

The sequence `\\`  inserts a single backslash in a string:
### Beispiel:
```cpp
string txt = "The character \\ is called backslash.";
```

Andere beliebte Escape-Zeichen in C++ sind:
| Escape-Zeichen | Ergebnis   |
|----------------|------------|
| \n             | Neue Zeile |
| \t             | Tabulator  |

----------------

# C++ Benutzereingabe Strings
Es ist möglich, den Extraktionsoperator `>>` auf `cin` zu verwenden, um eine vom Benutzer eingegebene Zeichenkette zu speichern:
### Beispiel:
```cpp
string firstName;
cout << "Type your first name: ";
cin >> firstName; // get user input from the keyboard
cout << "Your name is: " << firstName;

// Type your first name: John
// Your name is: John
```

Allerdings betrachtet `cin` ein Leerzeichen (Whitespace, Tabulator usw.) als Abschlusszeichen, was bedeutet, dass es nur ein einziges Wort speichern kann (auch wenn Sie viele Wörter eingeben):
### Beispiel:
```cpp
string fullName;
cout << "Type your full name: ";
cin >> fullName;
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John
```

Im obigen Beispiel würde man erwarten, dass das Programm "John Doe" ausgibt, aber es gibt nur "John" aus.

Aus diesem Grund verwenden wir bei der Arbeit mit Strings oft die Funktion `getline()`, um eine Textzeile zu lesen. Sie nimmt `cin` als ersten Parameter und die String-Variable als zweiten:
### Beispiel:
```cpp
string fullName;
cout << "Type your full name: ";
getline (cin, fullName);
cout << "Your name is: " << fullName;

// Type your full name: John Doe
// Your name is: John Doe 
```

----------------

# C++ String Namespace
Sie werden vielleicht einige C++-Programme sehen, die ohne die Standard-Namespace-Bibliothek laufen. Die Zeile `using namespace std` kann weggelassen und durch das Schlüsselwort `std` ersetzt werden, gefolgt von dem Operator `::` für `string` ( und `cout` ) Objekte
### Beispiel:
```cpp
#include <iostream>
#include <string>
// using namespace std; - Remove this line

int main() {
  std::string greeting = "Hello";
  std::cout << greeting;
  return 0;
}
```

> Es bleibt Ihnen überlassen, ob Sie die Standard-Namespace-Bibliothek einbinden wollen oder nicht.
>
> In unserem Lernprogramm werden wir die Bibliothek weiter einbeziehen.

----------------

# C++ C-Style Strings
Strings im C-Stil werden mit dem Typ `char` anstelle von `string` erstellt.

Der Name stammt von der Sprache C, die im Gegensatz zu vielen anderen Programmiersprachen keinen `string` Typ zur einfachen Erstellung von String-Variablen hat. Stattdessen müssen Sie den `char` Typ verwenden und ein Array von Zeichen erstellen, um in C einen "String" zu erstellen.

Da C++ als eine Erweiterung von C entwickelt wurde, wurde diese Art der Erstellung von Zeichenketten in C++ weiterhin unterstützt:
### Beispiel:
```cpp
string greeting1 = "Hello";  // Regular String
char greeting2[] = "Hello";  // C-Style String (an array of characters) 
```

**Hinweis:** Es ist bequemer, mit dem Standard `string` Typ zu arbeiten, als mit Strings im C-Stil. Ein Grund, warum einige Benutzer weiterhin Strings im C-Stil verwenden, ist jedoch, dass sie Zugriff auf Funktionen aus der C-Standardbibliothek haben.

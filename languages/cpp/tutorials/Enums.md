# C++ Enumeration (enum)
## C++ Enums

Ein **enum** ist ein spezieller Typ, der eine Gruppe von Konstanten (unveränderlichen Werten) repräsentiert.

Um ein enum zu erstellen, verwende das Schlüsselwort `enum`, gefolgt vom Namen des enum, und trenne die Elemente des enum mit einem Komma:
```cpp
 enum Level {
  LOW,
  MEDIUM,
  HIGH
};
```
> Beachte, dass das letzte Element in einem `enum`-Block kein Komma benötigt.
>
> Es ist nicht erforderlich, Großbuchstaben für die Bezeichner zu verwenden, jedoch wird dies oft als gute Praxis angesehen.
>
> `Enum` ist die Abkürzung für "Enumerationen", was so viel wie "spezifisch aufgelistete Werte" bedeutet.

Um auf ein enum zuzugreifen, musst du eine Variable des entsprechenden Typs erstellen.

Innerhalb der `main()` Methode gibst du das Schlüsselwort `enum` an, gefolgt vom Namen des enum (z. B. `Level`) und anschließend dem Namen der Variablen (im Beispiel unten `myVar`):
```cpp
enum Level myVar; 
```
Jetzt, wo du eine `enum`-Variable (myVar) erstellt hast, kannst du ihr einen Wert zuweisen.

Der zugewiesene Wert muss eines der Elemente innerhalb des `enum` sein (`LOW`, `MEDIUM` oder `HIGH`):
```cpp
enum Level myVar = MEDIUM; 
```
Standardmäßig hat das erste Element (`LOW`) den Wert `0`, das zweite (`MEDIUM`) den Wert `1` usw.

Wenn du nun versuchst, `myVar` auszugeben, wird `1` ausgegeben, was `MEDIUM` darstellt:
```cpp
int main() {
  // Create an enum variable and assign a value to it
  enum Level myVar = MEDIUM;

  // Print the enum variable
  cout << myVar;

  return 0;
}  
```
## Werte verändern
Wie du weißt, hat das erste Element eines `enum` den Wert 0. Das zweite den Wert 1, und so weiter.

Um die Werte besser nachvollziehbar zu machen, kannst du sie leicht ändern:
```cpp
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
};

int main() {
  enum Level myVar = MEDIUM;
  cout << myVar;  // Now outputs 50
  return 0;
} 
```
Beachte, dass, wenn du einem bestimmten Element einen Wert zuweist, die nächsten Elemente ihre Werte entsprechend aktualisieren:
```cpp
enum Level {
  LOW = 5,
  MEDIUM, // Now 6
  HIGH // Now 7
};
```

## Enum in einer Switch-Anweisung
Enums werden häufig in `switch`-Anweisungen verwendet, um nach den entsprechenden Werten zu prüfen:
```cpp
enum Level {
  LOW = 1,
  MEDIUM,
  HIGH
};

int main() {
  enum Level myVar = MEDIUM;

  switch (myVar) {
    case 1:
      cout << "Low Level";
      break;
    case 2:
      cout << "Medium level";
      break;
    case 3:
      cout << "High level";
      break;
  }
  return 0;
} 
```

> **Warum und wann man Enums verwenden sollte**
> 
> Enums werden verwendet, um Konstanten Namen zu geben, was den Code leichter lesbar und wartbar macht.
>
> Verwende Enums, wenn du Werte hast, von denen du weißt, dass sie sich nicht ändern werden, wie zum Beispiel Wochentage, Monatsnamen, Farben, ein Kartenspiel usw.

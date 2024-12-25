# C++ Pointers
## Erstellen eines Pointers
Du hast im vorherigen Kapitel gelernt, dass wir die **Speicheradresse** einer Variablen mit dem `&` Operator erhalten können:
### Beispiel:
```cpp
string food = "Pizza"; // A food variable of type string

cout << food;  // Outputs the value of food (Pizza)
cout << &food; // Outputs the memory address of food (0x6dfed4)
```
Ein **Pointer** ist jedoch eine Variable, die die **Speicheradresse als ihren Wert speichert.**

Eine Zeigervariable zeigt auf einen Datentyp (wie `int` oder `string`) des gleichen Typs und wird mit dem `*` Operator erstellt. Die Adresse der Variablen, mit der du arbeitest, wird dem Zeiger zugewiesen:
### Beispiel:
```cpp
string food = "Pizza";  // A food variable of type string
string* ptr = &food;    // A pointer variable, with the name ptr, that stores the address of food

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";
```

### Beispiel erklärt
Erstelle eine Zeigervariable mit dem Namen `ptr`, die auf eine `string`-Variable zeigt, indem du das Sternchenzeichen `*` verwendest (`string* ptr`). Beachte, dass der Typ des Zeigers mit dem Typ der Variablen übereinstimmen muss, mit der du arbeitest.

Verwende den `&` Operator, um die Speicheradresse der Variablen `food` zu speichern und sie dem Zeiger zuzuweisen.

Nun hält `ptr` den Wert der Speicheradresse von `food`.

> Tipp: Es gibt drei Möglichkeiten, Zeigervariablen zu deklarieren, wobei die erste Möglichkeit vorzuziehen ist:
```cpp
string* mystring; // Preferred
string *mystring;
string * mystring;
```

------

# C++ Dereferenz
## Speicheradresse und Wert abrufen
Im Beispiel von der vorherigen Seite haben wir die Zeigervariable verwendet, um die Speicheradresse einer Variablen zu erhalten (zusammen mit dem `&`-Referenzoperator). Du kannst jedoch auch den Zeiger verwenden, um den Wert der Variablen zu erhalten, indem du den `*`-Operator (den **Dereferenzierungsoperator**) verwendest:
### Beispiel:
```cpp
string food = "Pizza";  // Variable declaration
string* ptr = &food;    // Pointer declaration

// Reference: Output the memory address of food with the pointer (0x6dfed4)
cout << ptr << "\n";

// Dereference: Output the value of food with the pointer (Pizza)
cout << *ptr << "\n";
```

> Beachte, dass das Sternchenzeichen `*` hier verwirrend sein kann, da es zwei verschiedene Dinge in unserem Code tut:
>
>  - Wenn es in der Deklaration verwendet wird (`string* ptr`), erstellt es eine Zeigervariable.
>  - Wenn es nicht in der Deklaration verwendet wird, fungiert es als Dereferenzierungsoperator.

------

# C++ Pointer modifizieren
## Pointer werte modifizieren
Du kannst auch den Wert des Zeigers ändern. Beachte jedoch, dass dies auch den Wert der ursprünglichen Variablen ändern wird:
### Beispiel:
```cpp
string food = "Pizza";
string* ptr = &food;

// Output the value of food (Pizza)
cout << food << "\n";

// Output the memory address of food (0x6dfed4)
cout << &food << "\n";

// Access the memory address of food and output its value (Pizza)
cout << *ptr << "\n";

// Change the value of the pointer
*ptr = "Hamburger";

// Output the new value of the pointer (Hamburger)
cout << *ptr << "\n";

// Output the new value of the food variable (Hamburger)
cout << food << "\n";
```

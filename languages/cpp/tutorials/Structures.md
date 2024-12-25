# C++ Strukturen (struct)
## C++ Strukturen
Strukturen (auch Structs genannt) sind eine Möglichkeit, mehrere zusammengehörige Variablen an einem Ort zu gruppieren. Jede Variable in der Struktur wird als ein Mitglied der Struktur bezeichnet.

Im Gegensatz zu einem Array kann eine Struktur viele verschiedene Datentypen enthalten (int, string, bool, etc.).
## Das erstellen einer Struktur
Um eine Struktur zu erstellen, verwende das Schlüsselwort `struct` und deklariere die einzelnen Mitglieder der Struktur in geschweiften Klammern.

Nach der Deklaration gib den Namen der Strukturvariable an (im Beispiel unten `myStructure`):
```cpp
struct {             // Structure declaration
  int myNum;         // Member (int variable)
  string myString;   // Member (string variable)
} myStructure;       // Structure variable 
```
## Zugriff auf Mitglieder einer Struktur
### Beispiel:
Um auf Mitglieder einer Struktur zuzugreifen, verwende die Punkt-Syntax (.):
```cpp
// Create a structure variable called myStructure
struct {
  int myNum;
  string myString;
} myStructure;

// Assign values to members of myStructure
myStructure.myNum = 1;
myStructure.myString = "Hello World!";

// Print members of myStructure
cout << myStructure.myNum << "\n";
cout << myStructure.myString << "\n";
```
## Eine Struktur in mehreren Variablen
Du kannst ein Komma (`,`) verwenden, um eine Struktur in mehreren Variablen zu nutzen:
```cpp
 struct {
  int myNum;
  string myString;
} myStruct1, myStruct2, myStruct3; // Multiple structure variables separated with commas 
```
Dieses Beispiel zeigt, wie man eine Struktur in zwei verschiedenen Variablen verwendet:  
### Beispiel
Verwende eine Struktur, um zwei Autos darzustellen:
```cpp
 struct {
  string brand;
  string model;
  int year;
} myCar1, myCar2; // We can add variables by separating them with a comma here

// Put data into the first structure
myCar1.brand = "BMW";
myCar1.model = "X5";
myCar1.year = 1999;

// Put data into the second structure
myCar2.brand = "Ford";
myCar2.model = "Mustang";
myCar2.year = 1969;

// Print the structure members
cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
```
## Benannte Strukturen

Indem du einer Struktur einen Namen gibst, kannst du sie wie einen Datentyp behandeln. Das bedeutet, dass du Variablen mit dieser Struktur jederzeit und überall im Programm erstellen kannst.

Um eine benannte Struktur zu erstellen, setze den Namen der Struktur direkt hinter das Schlüsselwort `struct`:
```cpp
struct myDataType { // This structure is named "myDataType"
  int myNum;
  string myString;
};
```
Um eine Variable zu deklarieren, die die Struktur verwendet, nutze den Namen der Struktur als Datentyp der Variable:
```cpp
myDataType myVar;
```
### Beispiel
Verwende eine Struktur, um zwei Autos darzustellen:
```cpp
// Declare a structure named "car"
struct car {
  string brand;
  string model;
  int year;
};

int main() {
  // Create a car structure and store it in myCar1;
  car myCar1;
  myCar1.brand = "BMW";
  myCar1.model = "X5";
  myCar1.year = 1999;

  // Create another car structure and store it in myCar2;
  car myCar2;
  myCar2.brand = "Ford";
  myCar2.model = "Mustang";
  myCar2.year = 1969;
 
  // Print the structure members
  cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
  cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
 
  return 0;
}
```

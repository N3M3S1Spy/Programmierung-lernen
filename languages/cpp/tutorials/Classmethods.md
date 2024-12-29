## C++ Klassenmethoden

### Klassenmethoden

Methoden sind Funktionen, die zu einer Klasse gehören.

Es gibt zwei Möglichkeiten, Funktionen zu definieren, die zu einer Klasse gehören:

*   Innerhalb der Klassendefinition
*   Außerhalb der Klassendefinition

Im folgenden Beispiel definieren wir eine Funktion innerhalb der Klasse und nennen sie `myMethod`.

**Hinweis:** Der Zugriff auf Methoden erfolgt genauso wie der Zugriff auf Attribute: durch Erstellung eines Objekts der Klasse und Verwendung der Punktnotation (`.`):

### Beispiel (Definition innerhalb der Klasse):

```c++
#include <iostream>
using namespace std;

class MyClass {      // Die Klasse
public:             // Zugriffsspezifizierer
    void myMethod() { // Methode/Funktion innerhalb der Klasse definiert
        cout << "Hallo Welt!";
    }
};

int main() {
    MyClass myObj;   // Erstelle ein Objekt von MyClass
    myObj.myMethod(); // Rufe die Methode auf
    return 0;
}

// Ausgabe: Hallo Welt!
```

Um eine Funktion *außerhalb* der Klassendefinition zu definieren, musst du sie zuerst innerhalb der Klasse deklarieren und sie dann außerhalb definieren. Dies geschieht, indem du den Namen der Klasse, gefolgt vom Bereichsauflösungsoperator `::` und dem Namen der Funktion angibst:

### Beispiel (Definition außerhalb der Klasse):

```c++
#include <iostream>
using namespace std;

class MyClass {      // Die Klasse
public:             // Zugriffsspezifizierer
    void myMethod(); // Methodendeklaration innerhalb der Klasse
};

// Methodendefinition außerhalb der Klasse
void MyClass::myMethod() {
    cout << "Hallo Welt!";
}

int main() {
    MyClass myObj;   // Erstelle ein Objekt von MyClass
    myObj.myMethod(); // Rufe die Methode auf
    return 0;
}

// Ausgabe: Hallo Welt!
```

### Parameter in Methoden

Methoden können auch Parameter entgegennehmen, genau wie normale Funktionen.

### Beispiel:

```c++
#include <iostream>
#include <string>
using namespace std;

class MyClass {
public:
    void greet(string name) { // Methode mit Parameter
        cout << "Hallo, " << name << "!\n";
    }
    void setAge(int age);
    int getAge();
private:
    int age_;
};

void MyClass::setAge(int age){
    age_ = age;
}

int MyClass::getAge(){
    return age_;
}

int main() {
    MyClass myObj;
    myObj.greet("Max");      // Rufe die Methode mit Argument auf
    myObj.setAge(20);
    cout << "Alter: " << myObj.getAge() << "\n";
    return 0;
}

// Ausgabe:
// Hallo, Max!
// Alter: 20
```

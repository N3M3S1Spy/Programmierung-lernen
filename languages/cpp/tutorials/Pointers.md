# C++ Zeiger (Pointers)

## Was sind Zeiger?

Ein Zeiger ist eine Variable, die die Speicheradresse einer anderen Variable speichert. Im Gegensatz zu einer Referenz, die nur ein Alias ist, ist ein Zeiger eine eigenständige Variable mit eigenem Speicherplatz. Zeiger ermöglichen eine direkte Manipulation des Speichers und sind ein mächtiges Werkzeug in C++.

## Erstellen eines Zeigers

Wir können die **Speicheradresse** einer Variablen mit dem `&`-Operator erhalten:

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
    std::string food = "Pizza";

    std::cout << food << "\n";          // Gibt den Wert von food aus (Pizza)
    std::cout << &food << "\n";         // Gibt die Speicheradresse von food aus (z.B. 0x7ffeeef618a8)
    std::cout << static_cast<void*>(&food) << "\n"; // Korrekte Ausgabe der Adresse
    return 0;
}
```

Ein **Zeiger** ist eine Variable, die diese **Speicheradresse als ihren Wert speichert**.

Eine Zeigervariable "zeigt" auf einen Datentyp (wie `int`, `string`, `double` usw.) und wird mit dem `*`-Operator deklariert. Der Adresse der Variablen, mit der du arbeiten möchtest, wird dem Zeiger zugewiesen:

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << food << "\n";
    std::cout << static_cast<void*>(&food) << "\n";
    std::cout << ptr << "\n";
    std::cout << static_cast<void*>(ptr) << "\n"; // Korrekte Ausgabe der Adresse mit dem Pointer
    return 0;
}
```

### Beispiel erklärt

1.  Erstelle eine Zeigervariable mit dem Namen `ptr`, die auf eine `string`-Variable zeigt, indem du das Sternchenzeichen `*` verwendest (`std::string* ptr`). Der Typ des Zeigers (`std::string*`) muss mit dem Typ der Variablen (`std::string`) übereinstimmen.

2.  Verwende den `&`-Operator, um die Speicheradresse der Variablen `food` zu erhalten und sie dem Zeiger `ptr` zuzuweisen.

3.  Nun enthält `ptr` den Wert der Speicheradresse von `food`. `ptr` "zeigt" auf `food`.

> Tipp: Es gibt drei Möglichkeiten, Zeigervariablen zu deklarieren, wobei die erste Möglichkeit (direkt am Typ) vorzuziehen ist:

```c++
std::string* mystring; // Bevorzugt
std::string *mystring;
std::string * mystring;
```

## Initialisierung von Zeigern

Initialisiere Zeiger immer, um undefiniertes Verhalten zu vermeiden. Wenn keine sofortige Initialisierung möglich ist, verwende `nullptr` (C++11 und neuer) oder `NULL` (älteres C++):

```c++
std::string* ptr1 = &food;   // Initialisierung mit Adresse
std::string* ptr2 = nullptr; // Initialisierung mit Nullzeiger
```

## Dereferenzierung

Mit dem `*`-Operator (Dereferenzierungsoperator) greifst du auf den *Wert* der Variablen zu, auf die der Zeiger zeigt:

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << static_cast<void*>(ptr) << "\n"; // Speicheradresse
    std::cout << *ptr << "\n";                 // Wert (Pizza)
    return 0;
}
```

> `*` hat zwei Bedeutungen:
>
> *   In der Deklaration (`std::string* ptr`): Deklariert eine Zeigervariable.
> *   Sonst (z.B. `*ptr`): Dereferenziert den Zeiger.

## Zeiger modifizieren

Du kannst den Wert, auf den ein Zeiger zeigt, direkt ändern. Dies ändert auch den Wert der ursprünglichen Variablen:

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
    std::string food = "Pizza";
    std::string* ptr = &food;

    std::cout << food << "\n";
    std::cout << static_cast<void*>(&food) << "\n";
    std::cout << *ptr << "\n";

    *ptr = "Hamburger"; // Ändert den Wert über den Zeiger

    std::cout << *ptr << "\n";
    std::cout << food << "\n"; // food wurde ebenfalls geändert
    return 0;
}
```

## Wann sollte man Zeiger verwenden?

*   **Call by Reference:** Wenn eine Funktion die Originalwerte ändern muss.
*   **Dynamische Speicherverwaltung:** Für Speicher, dessen Größe zur Kompilierzeit nicht bekannt ist.
*   **Hardwarenahe Programmierung:** Für die Interaktion mit Hardware.
*   **Datenstrukturen:** Für die Implementierung komplexer Datenstrukturen.

Okay, hier ist Teil 2 des C++ Zeiger-Tutorials, formatiert für eine README-Datei mit Markdown. Dieser Teil behandelt, wann man Zeiger *nicht* verwenden sollte, fasst die Verwendung zusammen und erklärt Smart Pointer:

## Wann sollte man *keine* Zeiger verwenden?

Obwohl Zeiger mächtig sind, können sie auch zu Fehlern führen, wenn sie nicht korrekt verwendet werden. Hier sind einige Situationen, in denen du *keine* Zeiger verwenden solltest:

*   **Wenn es eine einfachere Lösung gibt (z.B. Referenzen):** In vielen Fällen sind Referenzen (`&`) eine sicherere und einfachere Alternative. Referenzen sind implizit dereferenziert und können nicht `nullptr` sein, was viele potenzielle Fehler vermeidet.

    ```c++
    void tauscheMitReferenz(int& a, int& b) { // Übergabe per Referenz
        int temp = a;
        a = b;
        b = temp;
    }

    int main() {
        int x = 5, y = 10;
        tauscheMitReferenz(x, y); // Einfacher und sicherer als mit Zeigern
    }
    ```

*   **Wenn die Lebensdauer der referenzierten Variable nicht garantiert ist:** Zeiger sollten nur auf Speicherstellen zeigen, deren Lebensdauer mindestens so lange ist wie die des Zeigers selbst. Wenn ein Zeiger auf eine Variable zeigt, die bereits zerstört wurde (sog. "dangling pointer"), führt der Zugriff auf diesen Zeiger zu undefiniertem Verhalten (oft einem Programmabsturz).

*   **Bei unnötiger Komplexität:** Wenn ein Problem ohne Zeiger elegant gelöst werden kann, solltest du auf Zeiger verzichten. Sie erhöhen die Komplexität des Codes und können schwerer zu debuggen sein.

*   **In Hochsprachen mit automatischer Speicherverwaltung:** Sprachen wie Java, C# oder Python verwenden automatische Speicherverwaltung (Garbage Collection). In diesen Sprachen sind Zeiger im herkömmlichen C++-Sinne nicht notwendig oder gar nicht vorhanden.

## Zusammenfassung: Wann Zeiger verwenden?

*   Funktionen müssen übergebene Variablen verändern (Call by Reference).
*   Dynamische Speicherverwaltung ist erforderlich (z.B. für dynamische Arrays, Listen, Bäume).
*   Hardwarenahe Programmierung oder Interaktion mit Systemfunktionen, die Speicheradressen erfordern.
*   Effiziente Implementierung bestimmter Algorithmen und Datenstrukturen.

## Zusammenfassung: Wann Zeiger *nicht* verwenden?

*   Referenzen sind eine einfachere und sicherere Alternative.
*   Die Lebensdauer der referenzierten Variable ist nicht sichergestellt.
*   Das Problem kann ohne Zeiger elegant gelöst werden und Zeiger fügen unnötige Komplexität hinzu.
*   In Sprachen mit automatischer Speicherverwaltung (Garbage Collection).

## Smart Pointer (Intelligente Zeiger)

In modernem C++ sollten nach Möglichkeit *Smart Pointer* anstelle von rohen Zeigern verwendet werden. Smart Pointer sind Klassen, die sich um die automatische Speicherfreigabe kümmern und so Speicherlecks und andere Fehler verhindern. Die wichtigsten Smart Pointer sind:

*   `std::unique_ptr`: Exklusiver Besitz des zugewiesenen Speichers. Der Speicher wird automatisch freigegeben, wenn der `unique_ptr` seinen Gültigkeitsbereich verlässt.

    ```c++
    #include <memory>

    int main() {
        std::unique_ptr<int> ptr = std::make_unique<int>(42); // Speicher wird allokiert
        // ... ptr verwenden ...
        // Speicher wird automatisch freigegeben, wenn ptr den Gültigkeitsbereich verlässt
    }
    ```

*   `std::shared_ptr`: Geteilter Besitz des zugewiesenen Speichers (Referenzzählung). Der Speicher wird freigegeben, wenn der letzte `shared_ptr`, der auf ihn zeigt, seinen Gültigkeitsbereich verlässt.

    ```c++
    #include <memory>

    int main() {
        std::shared_ptr<int> ptr1 = std::make_shared<int>(42);
        std::shared_ptr<int> ptr2 = ptr1; // ptr1 und ptr2 teilen sich den Besitz

        // Speicher wird erst freigegeben, wenn ptr1 UND ptr2 den Gültigkeitsbereich verlassen
    }
    ```

*   `std::weak_ptr`: Nicht-besitzender Zeiger. Er beobachtet das Objekt, auf das ein `shared_ptr` zeigt, ohne den Besitz zu teilen. `weak_ptr` kann verwendet werden, um zu überprüfen, ob das Objekt noch existiert, bevor darauf zugegriffen wird.

    ```c++
    #include <memory>
    #include <iostream>

    int main() {
        std::shared_ptr<int> sharedPtr = std::make_shared<int>(42);
        std::weak_ptr<int> weakPtr = sharedPtr;

        if (auto lockedPtr = weakPtr.lock()) { // Überprüfen, ob das Objekt noch existiert
            std::cout << *lockedPtr << std::endl; // Zugriff auf das Objekt
        } else {
            std::cout << "Objekt nicht mehr vorhanden" << std::endl;
        }
    }
    ```

Die Verwendung von Smart Pointern wird dringend empfohlen, um die Sicherheit und Wartbarkeit von C++-Code zu verbessern. Sie vermeiden Speicherlecks und reduzieren das Risiko von Fehlern durch ungültige Zeiger.

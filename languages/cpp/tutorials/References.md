# C++ Referenzen

## Was sind Referenzen?

Eine Referenzvariable ist ein Alias oder ein alternativer Name für eine bereits existierende Variable. Sie ist kein eigenständiges Objekt im Speicher, sondern verweist direkt auf den Speicherort der ursprünglichen Variable. Referenzen werden mit dem Operator `&` deklariert.

## Erstellen einer Referenz

```c++
std::string food = "Pizza";  // food Variable
std::string& meal = food;   // Referenz auf food
```

In diesem Beispiel ist `meal` eine Referenz auf `food`. Jede Änderung an `meal` wirkt sich direkt auf `food` aus und umgekehrt, da beide auf denselben Speicherbereich verweisen.

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
  std::string food = "Pizza";
  std::string& meal = food;

  std::cout << "Food: " << food << "\n";  // Gibt "Food: Pizza" aus
  std::cout << "Meal: " << meal << "\n";  // Gibt "Meal: Pizza" aus

  meal = "Burger"; // Ändert den Wert über die Referenz

  std::cout << "Food: " << food << "\n";  // Gibt "Food: Burger" aus (food wurde auch geändert!)
  std::cout << "Meal: " << meal << "\n";  // Gibt "Meal: Burger" aus

    food = "Pommes";

    std::cout << "Food: " << food << "\n";  // Gibt "Food: Pommes" aus
    std::cout << "Meal: " << meal << "\n";  // Gibt "Meal: Pommes" aus

  return 0;
}
```

## Initialisierung von Referenzen

Es ist wichtig zu beachten, dass eine Referenz *immer* bei der Deklaration initialisiert werden muss. Sie kann nicht nachträglich auf eine andere Variable verweisen.

```c++
std::string food = "Pizza";
std::string& meal = food; // Korrekt: Referenz wird initialisiert

// std::string& anotherMeal; // Fehler: Referenz muss initialisiert werden!
```

# C++ Speicheradressen

## Was ist eine Speicheradresse?

Jede Variable, die in einem C++-Programm deklariert wird, belegt einen bestimmten Bereich im Arbeitsspeicher des Computers. Dieser Bereich hat eine eindeutige Adresse, die als Speicheradresse bezeichnet wird. Die Speicheradresse ist eine hexadezimale Zahl, die den Ort im Speicher angibt, an dem die Daten der Variable gespeichert sind.

## Zugriff auf die Speicheradresse

Der Adressoperator `&` liefert die Speicheradresse einer Variable:

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
  std::string food = "Pizza";

  std::cout << "Speicheradresse von food: " << &food << "\n"; // Gibt z.B. "Speicheradresse von food: 0x7ffeeef618a8" aus (kann variieren)
    std::cout << "Speicheradresse von food: " << static_cast<void*>(&food) << "\n"; // Bessere Darstellung der Adresse

  int number = 42;
  std::cout << "Speicheradresse von number: " << &number << "\n"; // Gibt z.B. "Speicheradresse von number: 0x7ffeeef618a4" aus (kann variieren)
    std::cout << "Speicheradresse von number: " << static_cast<void*>(&number) << "\n"; // Bessere Darstellung der Adresse
  return 0;
}
```

**Wichtiger Hinweis:** Die ausgegebene Speicheradresse ist eine hexadezimale Zahl und kann sich bei jeder Programmausführung ändern. Sie ist abhängig von der aktuellen Speicherbelegung des Systems. Die direkte Ausgabe mit `std::cout` für `std::string` kann zu Problemen führen, da `std::cout` für `char*` überladen ist. Die Verwendung von `static_cast<void*>` stellt sicher, dass die Adresse korrekt als Zeiger ausgegeben wird.

## Warum sind Speicheradressen wichtig?

Speicheradressen sind grundlegend für das Verständnis von:

*   **Referenzen:** Wie im vorherigen Abschnitt gezeigt, verweist eine Referenz direkt auf die Speicheradresse einer anderen Variable.
*   **Zeigern:** Zeiger sind Variablen, die Speicheradressen speichern. Sie ermöglichen eine direkte Manipulation des Speichers.
*   **Dynamischer Speicherverwaltung:** Mit Hilfe von Speicheradressen kann Speicher zur Laufzeit des Programms dynamisch angefordert und freigegeben werden (mit `new` und `delete`).
*   **Call by Reference (Funktionsaufrufe):** Durch die Übergabe von Speicheradressen an Funktionen (anstatt von Kopien der Variablen) können Funktionen die Originalwerte der Variablen verändern. Dies ist effizienter, besonders bei großen Datenstrukturen.

## Praktische Beispiele zur Verdeutlichung der Bedeutung von Speicheradressen

**1. Call by Reference (Funktionsaufrufe):**

```c++
#include <iostream>

void tausche(int& a, int& b) { // Übergabe per Referenz
  int temp = a;
  a = b;
  b = temp;
}

int main() {
  int x = 5;
  int y = 10;

  std::cout << "Vor dem Tausch: x = " << x << ", y = " << y << "\n"; // Gibt "Vor dem Tausch: x = 5, y = 10" aus
  tausche(x, y);
  std::cout << "Nach dem Tausch: x = " << x << ", y = " << y << "\n";  // Gibt "Nach dem Tausch: x = 10, y = 5" aus

  return 0;
}
```

In diesem Beispiel werden die Werte von `x` und `y` innerhalb der Funktion `tausche()` vertauscht, da die Funktion Referenzen auf `x` und `y` entgegennimmt. Ohne Referenzen (oder Zeiger) würde die Funktion nur mit Kopien der Variablen arbeiten, und die Originalwerte würden unverändert bleiben.

**2. Direkte Speicherzugriffe (später mit Zeigern):**

Obwohl wir hier noch keine Zeiger behandelt haben, ist es wichtig zu erwähnen, dass Speicheradressen in Verbindung mit Zeigern eine sehr mächtige Möglichkeit bieten, direkt auf den Speicher zuzugreifen und ihn zu manipulieren. Dies ist besonders relevant für performante Anwendungen, die hardwarenahe Programmierung oder die Arbeit mit großen Datenmengen.

**Zusammenfassung:**

Das Verständnis von Referenzen und Speicheradressen ist entscheidend für das Verständnis von C++. Sie ermöglichen effizientere Programme, die direkten Zugriff auf den Speicher erlauben und somit eine feinere Kontrolle über die Datenverwaltung bieten. Referenzen bieten eine einfachere und sicherere Möglichkeit, auf Variablen zu verweisen, während Zeiger (die im nächsten Kapitel behandelt werden) noch mehr Flexibilität, aber auch mehr Verantwortung bei der Speicherverwaltung bieten.

## C++-Vektoren (std::vector)

Ein Vektor in C++ (genauer gesagt `std::vector`) ist wie ein dynamisches Array.

Sowohl Vektoren als auch Arrays sind Datenstrukturen, die verwendet werden, um mehrere Elemente desselben Datentyps zu speichern.

Der Hauptunterschied zwischen einem Array und einem Vektor besteht darin, dass die Größe eines Arrays nach seiner Erstellung nicht mehr verändert werden kann (du kannst keine Elemente hinzufügen oder entfernen). Ein Vektor hingegen kann seine Größe nach Bedarf dynamisch anpassen (vergrößern oder verkleinern).

Um einen Vektor zu verwenden, musst du die Headerdatei `<vector>` einbinden:

```c++
// Die Vektor-Bibliothek einbinden
#include <vector>
#include <iostream> // Für die Ausgabe
#include <string>   // Für Strings (im Beispiel)
using namespace std;
```

## Einen Vektor erstellen

Um einen Vektor zu erstellen, verwendest du das Schlüsselwort `vector` und gibst den Datentyp der zu speichernden Werte innerhalb von spitzen Klammern `<>` an, gefolgt vom Namen des Vektors: `vector<Datentyp> vektorName;`.

### Beispiel:

```c++
// Einen Vektor namens 'autos' erstellen, der Strings speichert
vector<string> autos;

// Einen Vektor namens 'zahlen' erstellen, der Integers speichert
vector<int> zahlen;
```

Wenn du beim Erstellen des Vektors bereits Elemente hinzufügen möchtest, kannst du diese (wie bei Arrays) in geschweifte Klammern `{}` und durch Kommas getrennt angeben:

### Beispiel:

```c++
// Einen Vektor namens 'autos' erstellen und initialisieren
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Die Vektorelemente ausgeben (mit bereichsbasierter for-Schleife)
for (const string& autoName : autos) { // const & für effizientes Durchlaufen
    cout << autoName << "\n";
}
```

> **Hinweis:** Der Datentyp des Vektors (im Beispiel `string`) kann nach der Deklaration nicht mehr geändert werden.

## Auf Vektorelemente zugreifen

Du kannst auf ein Vektorelement zugreifen, indem du den Index in eckigen Klammern `[]` angibst.

Vektoren sind wie Arrays 0-basiert, d. h. `[0]` ist das erste Element, `[1]` das zweite usw.:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Das erste Element abrufen
cout << autos[0] << "\n"; // Gibt "Volvo" aus

// Das zweite Element abrufen
cout << autos[1] << "\n"; // Gibt "BMW" aus
```

Ein Vorteil der Verwendung von `std::vector` besteht darin, dass es viele nützliche Funktionen bietet. Zum Beispiel kannst du mit den Funktionen `.front()` und `.back()` auf das erste bzw. letzte Element eines Vektors zugreifen:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Das erste Element abrufen
cout << autos.front() << "\n"; // Gibt "Volvo" aus

// Das letzte Element abrufen
cout << autos.back() << "\n"; // Gibt "Mazda" aus
```

Um auf ein Element an einem bestimmten Index zuzugreifen, kannst du die Funktion `.at()` verwenden und den Index angeben:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Das zweite Element abrufen
cout << autos.at(1) << "\n"; // Gibt "BMW" aus

// Das dritte Element abrufen
cout << autos.at(2) << "\n"; // Gibt "Ford" aus
```

**Hinweis:** Die Funktion `.at()` wird oft den eckigen Klammern `[]` vorgezogen, da sie eine Ausnahme wirft (`std::out_of_range`), wenn der Index außerhalb des gültigen Bereichs liegt. Dies hilft, Laufzeitfehler zu vermeiden.

### Beispiel (Fehlerbehandlung mit `.at()`):

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

try {
    cout << autos.at(6) << "\n"; // Versucht, auf ein nicht existierendes Element zuzugreifen
} catch (const std::out_of_range& e) {
    cerr << "Fehler: Index außerhalb des Bereichs: " << e.what() << "\n";
}
```

## Ein Vektorelement ändern

Um den Wert eines bestimmten Elements zu ändern, kannst du den Index verwenden:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Den Wert des ersten Elements ändern
autos[0] = "Opel";

cout << autos[0] << "\n"; // Gibt jetzt "Opel" aus
```

Es ist jedoch sicherer, die Funktion `.at()` zu verwenden (aus den oben genannten Gründen):

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

// Den Wert des ersten Elements ändern (mit .at())
autos.at(0) = "Opel";

cout << autos.at(0) << "\n"; // Gibt jetzt "Opel" aus
```

## Vektorelemente hinzufügen

Der größte Unterschied zwischen einem Vektor und einem Array besteht darin, dass Vektoren dynamisch wachsen können. Das bedeutet, du kannst Elemente zum Vektor hinzufügen oder aus ihm entfernen.

Um ein Element am Ende des Vektors hinzuzufügen, verwendest du die Funktion `.push_back()`:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};
autos.push_back("Tesla"); // Fügt "Tesla" am Ende hinzu

for (const string& autoName : autos) {
    cout << autoName << "\n";
}
```

Du kannst beliebig viele Elemente hinzufügen:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};
autos.push_back("Tesla");
autos.push_back("VW");
autos.push_back("Mitsubishi");
autos.push_back("Mini");

for (const string& autoName : autos) {
    cout << autoName << "\n";
}
```

## Vektorelemente entfernen

Um ein Element vom Ende des Vektors zu entfernen, verwendest du die Funktion `.pop_back()`:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};
autos.pop_back(); // Entfernt "Mazda"

for (const string& autoName : autos) {
    cout << autoName << "\n";
}
```

**Hinweis:** Elemente werden normalerweise nur am Ende des Vektors hinzugefügt und entfernt. Wenn du Elemente an beiden Enden hinzufügen oder entfernen musst, ist es oft besser, `std::deque` anstelle von `std::vector` zu verwenden.

## Vektorgröße

Um herauszufinden, wie viele Elemente ein Vektor enthält, verwendest du die Funktion `.size()`:

### Beispiel:

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};
cout << "Anzahl der Autos: " << autos.size() << "\n"; // Gibt "Anzahl der Autos: 4" aus
```

## Überprüfen, ob ein Vektor leer ist

Die Funktion `.empty()` gibt `true` (1) zurück, wenn der Vektor leer ist, und `false` (0), wenn er mindestens ein Element enthält:

### Beispiel:

```c++
vector<string> autos;
cout << "Ist der Vektor leer? " << autos.empty() << "\n"; // Gibt "Ist der Vektor leer? 1" aus (true)

vector<string> weitereAutos = {"Audi"};
cout << "Ist der Vektor leer? " << weitereAutos.empty() << "\n"; // Gibt "Ist der Vektor leer? 0" aus (false)
```

## Durch einen Vektor iterieren (schleifen)

Eleganter und oft bevorzugt ist die **bereichsbasierte `for`-Schleife** (auch bekannt als "for-each loop", eingeführt in C++11):

### Beispiel (bereichsbasiert):

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

for (const string& autoName : autos) { // const & für Effizienz (vermeidet Kopien)
    cout << autoName << "\n";
}
```

Diese Schleife iteriert über jedes Element im Vektor `autos` und weist den Wert des aktuellen Elements der Variablen `autoName` zu. Das `const &` sorgt dafür, dass keine unnötigen Kopien der Strings erstellt werden, was die Effizienz verbessert, besonders bei großen Vektoren.

### Iteratoren

Eine weitere Möglichkeit, durch einen Vektor zu iterieren, sind **Iteratoren**. Iteratoren sind Objekte, die wie Zeiger funktionieren und es ermöglichen, durch die Elemente eines Containers zu navigieren.

### Beispiel (mit Iteratoren):

```c++
vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

for (vector<string>::iterator it = autos.begin(); it != autos.end(); ++it) {
    cout << *it << "\n"; // *it dereferenziert den Iterator, um den Wert zu erhalten
}

// Noch kürzer mit auto:
for (auto it = autos.begin(); it != autos.end(); ++it) {
    cout << *it << "\n";
}

// C++11 Range-based for loop ist meistens die beste Wahl
for (const auto& autoName : autos){
    cout << autoName << "\n";
}
```

*   `autos.begin()` gibt einen Iterator zurück, der auf das erste Element des Vektors zeigt.
*   `autos.end()` gibt einen Iterator zurück, der *hinter* das letzte Element des Vektors zeigt (er zeigt nicht auf ein gültiges Element).
*   `++it` bewegt den Iterator zum nächsten Element.
*   `*it` dereferenziert den Iterator und gibt den Wert des Elements zurück, auf das der Iterator zeigt.

Obwohl Iteratoren mächtig sind und in vielen Fällen benötigt werden (z.B. bei bestimmten Algorithmen), ist die bereichsbasierte `for`-Schleife in den meisten Fällen einfacher und übersichtlicher.

## Vektorkapazität und -größe

Es gibt einen wichtigen Unterschied zwischen der **Größe** (`size()`) und der **Kapazität** (`capacity()`) eines Vektors:

*   **Größe (`size()`):** Gibt die Anzahl der aktuell im Vektor gespeicherten Elemente zurück.
*   **Kapazität (`capacity()`):** Gibt die Anzahl der Elemente zurück, für die der Vektor bereits Speicher reserviert hat.

Wenn du ein neues Element mit `push_back()` hinzufügst und die aktuelle Kapazität des Vektors nicht ausreicht, um das neue Element aufzunehmen, muss der Vektor neuen Speicher reservieren. Dieser Vorgang ist relativ aufwendig, da der Vektor möglicherweise seinen gesamten Inhalt in einen neuen, größeren Speicherbereich kopieren muss.

Um unnötige Speicherreservierungen und Kopiervorgänge zu vermeiden, kannst du mit der Funktion `reserve()` im Voraus Speicherplatz reservieren:

### Beispiel:

```c++
vector<int> zahlen;
cout << "Groesse: " << zahlen.size() << ", Kapazitaet: " << zahlen.capacity() << "\n"; // Ausgabe: Groesse: 0, Kapazitaet: 0

zahlen.reserve(100); // Reserviert Speicher für 100 Elemente
cout << "Groesse: " << zahlen.size() << ", Kapazitaet: " << zahlen.capacity() << "\n"; // Ausgabe: Groesse: 0, Kapazitaet: 100

for(int i = 0; i < 50; ++i){
    zahlen.push_back(i);
}
cout << "Groesse: " << zahlen.size() << ", Kapazitaet: " << zahlen.capacity() << "\n"; // Ausgabe: Groesse: 50, Kapazitaet: 100

zahlen.push_back(50);
cout << "Groesse: " << zahlen.size() << ", Kapazitaet: " << zahlen.capacity() << "\n"; // Ausgabe: Groesse: 51, Kapazitaet: (mindestens 100, möglicherweise mehr)
```

`shrink_to_fit()` kann verwendet werden, um überschüssige Kapazität freizugeben.

## Weitere nützliche Vektorfunktionen

*   `clear()`: Entfernt alle Elemente aus dem Vektor (die Kapazität bleibt jedoch erhalten).
*   `insert()`: Fügt ein oder mehrere Elemente an einer bestimmten Position ein.
*   `erase()`: Entfernt ein oder mehrere Elemente an einer bestimmten Position.
*   `assign()`: Weist dem Vektor neue Elemente zu und ersetzt den alten Inhalt.

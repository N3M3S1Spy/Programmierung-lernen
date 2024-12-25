# C++ References
## Erstellen einer Referenc
Eine Referenzvariable ist ein "Verweis" auf eine bestehende Variable und wird mit dem Operator `&` erstellt:
```cpp
string food = "Pizza";  // food variable
string &meal = food;    // reference to food
```
Jetzt können wir entweder den Variablennamen `food` oder den Referenznamen `meal` verwenden, um auf die Variable `food` zu verweisen:
### Beispiel:
```cpp
string food = "Pizza";
string &meal = food;

cout << food << "\n";  // Outputs Pizza
cout << meal << "\n";  // Outputs Pizza
```

------

# C++ Speicheradressen
## Speicheradresse
Im Beispiel von der vorherigen Seite wurde der Operator `&` verwendet, um eine Referenzvariable zu erstellen. Er kann jedoch auch verwendet werden, um die Speicheradresse einer Variablen zu erhalten, also die Stelle, an der die Variable auf dem Computer gespeichert ist.

Wenn eine Variable in C++ erstellt wird, wird ihr eine Speicheradresse zugewiesen. Und wenn wir der Variablen einen Wert zuweisen, wird dieser an dieser Speicheradresse gespeichert.

Um darauf zuzugreifen, verwende den Operator `&`, und das Ergebnis zeigt, wo die Variable gespeichert ist:
### Beispiel:
```cpp
string food = "Pizza";

cout << &food; // Outputs 0x6dfed4
```
**Hinweis:** Die Speicheradresse ist in hexadezimaler Form (0x..). Beachte, dass du möglicherweise nicht dasselbe Ergebnis in deinem Programm erhältst.

> Warum ist es nützlich, die Speicheradresse zu kennen?
>
> Referenzen und Zeiger (die du im nächsten Kapitel lernen wirst) sind in C++ wichtig, weil sie dir die Möglichkeit geben, die Daten im Arbeitsspeicher des Computers zu manipulieren – was den Code verkürzen und die Leistung verbessern kann.
>
> Diese beiden Merkmale gehören zu den Dingen, die C++ von anderen Programmiersprachen wie Python und Java abheben.

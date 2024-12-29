# C++ Variablenumfang
Da Sie nun wissen, wie Funktionen funktionieren, ist es wichtig zu erfahren, wie sich Variablen innerhalb und außerhalb von Funktionen verhalten.

In C++ sind Variablen nur innerhalb des Bereichs zugänglich, in dem sie erstellt wurden. Dies wird Geltungsbereich genannt.
## Lokaler Geltungsbereich
Eine Variable, die innerhalb einer Funktion erstellt wird, gehört zum lokalen Bereich dieser Funktion und kann nur innerhalb dieser Funktion verwendet werden:
### Example:
```cpp
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;

  // Print the variable x
  cout << x;
}

int main() {
  myFunction();
  return 0;
}
```
Eine **lokale Variable** kann nicht außerhalb der Funktion verwendet werden, zu der sie gehört.

Wenn Sie versuchen, außerhalb der Funktion darauf zuzugreifen, tritt ein Fehler auf:
### Example:
```cpp
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;
}

int main() {
  myFunction();

  // Print the variable x in the main function
  cout << x;
  return 0;
}
```

## Globaler Geltungsbereich
Eine Variable, die außerhalb einer Funktion erstellt wird, wird als globale Variable bezeichnet und gehört zum globalen Bereich.

Globale Variablen sind von jedem Bereich aus verfügbar, global und lokal:
### Example:
Eine außerhalb einer Funktion erstellte Variable ist global und kann daher von jedem verwendet werden:
```cpp
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;
}

int main() {
  myFunction();

  // Print the variable x in the main function
  cout << x;
  return 0;
}
```

#### Benennung von Variablen
Wenn Sie innerhalb und außerhalb einer Funktion mit demselben Variablennamen operieren, behandelt C++ sie als zwei getrennte Variablen: eine, die im globalen Bereich (außerhalb der Funktion) verfügbar ist, und eine, die im lokalen Bereich (innerhalb der Funktion) verfügbar ist:
### Example:
Die Funktion gibt das lokale `x` aus, und der Code gibt dann das globale `x` aus:
```cpp
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;
}

int main() {
  myFunction();

  // Print the variable x in the main function
  cout << x;
  return 0;
}
```
Sie sollten jedoch vermeiden, denselben Variablennamen sowohl für globale als auch für lokale Variablen zu verwenden, da dies zu Fehlern und Verwechslungen führen kann.

Im Allgemeinen sollten Sie mit globalen Variablen vorsichtig umgehen, da auf sie von jeder Funktion aus zugegriffen und sie verändert werden können:
### Example:
Ändern Sie den Wert von `x` aus `myFunction`:
```cpp
void myFunction() {
  // Local variable that belongs to myFunction
  int x = 5;
}

int main() {
  myFunction();

  // Print the variable x in the main function
  cout << x;
  return 0;
}
```

## Schlussfolgerung
Zusammenfassend lässt sich sagen, dass Sie so oft wie möglich lokale Variablen (mit guten Variablennamen) verwenden sollten. Dadurch wird Ihr Code leichter zu pflegen und besser zu verstehen sein. Bei der Arbeit an bestehenden C++-Programmen oder bei der Zusammenarbeit mit anderen stoßen Sie jedoch möglicherweise auf globale Variablen. Daher ist es gut zu verstehen, wie der Geltungsbereich funktioniert und wie man ihn effektiv nutzt, um sicherzustellen, dass Ihr Code klar und funktional ist.

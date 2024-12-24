# C++ Switch
## C++ Switch Statements
Verwenden Sie die `switch` Anweisung, um einen von mehreren Codeblöcken auszuwählen, die ausgeführt werden sollen.
### Syntax:
```cpp
switch(expression) {
  case x:
    // code block
    break;
  case y:
    // code block
    break;
  default:
    // code block
}
```
Das funktioniert folgendermaßen:
- Der Ausdruck im `switch` wird einmal ausgewertet.
- Der Wert des Ausdrucks wird mit den Werten jeder `case` Bedingung verglichen.
- Wenn eine Übereinstimmung gefunden wird, wird der zugehörige Codeblock ausgeführt.
- Die Schlüsselwörter `break` und `default` sind optional und werden später in diesem Kapitel beschrieben.

Das folgende Beispiel verwendet die Wochentagsnummer zur Berechnung des Wochentagsnamens:
### Beispiel:
```cpp
int day = 4;
switch (day) {
  case 1:
    cout << "Monday";
    break;
  case 2:
    cout << "Tuesday";
    break;
  case 3:
    cout << "Wednesday";
    break;
  case 4:
    cout << "Thursday";
    break;
  case 5:
    cout << "Friday";
    break;
  case 6:
    cout << "Saturday";
    break;
  case 7:
    cout << "Sunday";
    break;
}
// Outputs "Thursday" (day 4) 
```
## Das Schlüsselwort: break
Wenn C++ auf ein `break`-Schlüsselwort stößt, wird der `switch` Block verlassen.

Dies stoppt die Ausführung von weiterem Code und das Testen weiterer `case` Bedingungen innerhalb des Blocks.

Wenn eine Übereinstimmung gefunden wurde und die Aufgabe erledigt ist, ist es Zeit für eine Pause. Es ist kein weiteres Testen mehr nötig.
> Eine Unterbrechung kann viel Ausführungszeit sparen, da sie die Ausführung des gesamten restlichen Codes im Schalterblock "ignoriert".

## Das default Keyword
Das Schlüsselwort `default` gibt einen Code an, der ausgeführt werden soll, wenn es keine Übereinstimmung in der Groß-/Kleinschreibung gibt:
### Beispiel:
```cpp
int day = 4;
switch (day) {
  case 6:
    cout << "Today is Saturday";
    break;
  case 7:
    cout << "Today is Sunday";
    break;
  default:
    cout << "Looking forward to the Weekend";
}
// Outputs "Looking forward to the Weekend" 
```

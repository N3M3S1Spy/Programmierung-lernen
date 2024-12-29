# C++ Funktionsparameter
## Parameter und Argumente
Informationen können als Parameter an Funktionen übergeben werden. Parameter fungieren als Variablen innerhalb der Funktion.

Die Parameter werden nach dem Funktionsnamen innerhalb der Klammern angegeben. Sie können so viele Parameter hinzufügen, wie Sie wollen, trennen Sie sie einfach mit einem Komma:
### Syntax:
```cpp
void functionName(parameter1, parameter2, parameter3) {
  // code to be executed
}
```

Das folgende Beispiel hat eine Funktion, die einen `string `namens **fname** als Parameter annimmt. Wenn die Funktion aufgerufen wird, übergeben wir einen Vornamen, der innerhalb der Funktion verwendet wird, um den vollständigen Namen zu drucken:
### Beispiel:
```cpp
void myFunction(string fname) {
  cout << fname << " Refsnes\n";
}

int main() {
  myFunction("Liam");
  myFunction("Jenny");
  myFunction("Anja");
  return 0;
}

// Liam Refsnes
// Jenny Refsnes
// Anja Refsnes
```

> Wenn ein **Parameter** an die Funktion übergeben wird, nennt man ihn ein **Argument**. Im obigen Beispiel ist also `fname` ein **Parameter**, während `Liam`, `Jenny` und `Anja` **Argumente** sind.

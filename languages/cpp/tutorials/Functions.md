# C++ Functions
Eine Funktion ist ein Codeblock, der nur ausgeführt wird, wenn er aufgerufen wird.

Sie können Daten, sogenannte Parameter, an eine Funktion übergeben.

Funktionen werden verwendet, um bestimmte Aktionen auszuführen, und sie sind wichtig für die Wiederverwendung von Code: Definieren Sie den Code einmal, und verwenden Sie ihn mehrmals.

## Eine Funktion erstellen
C++ bietet einige vordefinierte Funktionen, wie z. B. `main()` , die zur Ausführung von Code verwendet wird. Sie können aber auch Ihre eigenen Funktionen erstellen, um bestimmte Aktionen auszuführen.

Um eine Funktion zu erstellen (oft auch als Deklaration bezeichnet), geben Sie den Namen der Funktion an, gefolgt von Klammern ():
### Syntax:
```cpp
void myFunction() {
  // code to be executed
}
```

#### Erklärtes Beispiel
- `myFunction()` ist der Name der Funktion
- `void` bedeutet, dass die Funktion keinen Rückgabewert hat. Mehr über Rückgabewerte erfahren Sie später im nächsten Kapitel
- Fügen Sie innerhalb der Funktion (dem Hauptteil) Code hinzu, der definiert, was die Funktion tun soll

## Eine Funktion aufrufen
Deklarierte Funktionen werden nicht sofort ausgeführt. Sie werden "für spätere Verwendung" gespeichert und später ausgeführt, wenn sie aufgerufen werden.

Um eine Funktion aufzurufen, schreiben Sie den Namen der Funktion, gefolgt von zwei Klammern `()` und einem Semikolon `;`

Im folgenden Beispiel wird `myFunction()` verwendet, um einen Text (die Aktion) zu drucken, wenn sie aufgerufen wird:
### Beispiel:
Rufen Sie innerhalb von `main` die Funktion `myFunction()` auf:
```cpp
// Create a function
void myFunction() {
  cout << "I just got executed!";
}

int main() {
  myFunction(); // call the function
  return 0;
}

// Outputs "I just got executed!"
```
Eine Funktion kann mehrfach aufgerufen werden:
### Beispiel:
```cpp
void myFunction() {
  cout << "I just got executed!\n";
}

int main() {
  myFunction();
  myFunction();
  myFunction();
  return 0;
}

// I just got executed!
// I just got executed!
// I just got executed!
```

## Funktionsdeklaration und -definition
Eine C++-Funktion besteht aus zwei Teilen:
- **Deklaration:** den Rückgabetyp, den Namen der Funktion und die Parameter (falls vorhanden)
- **Definition:** der Körper der Funktion (auszuführender Code)

```cpp
void myFunction() { // declaration
  // the body of the function (definition)
}
```
**Hinweis:** Wenn eine benutzerdefinierte Funktion wie `myFunction()`  nach der `main()` Funktion deklariert wird, **tritt ein Fehler auf:**
```cpp
int main() {
  myFunction();
  return 0;
}

void myFunction() {
  cout << "I just got executed!";
}

// Error
```
Es ist jedoch möglich, die Deklaration und die Definition der Funktion zu trennen, um den Code zu optimieren.

Sie werden oft C++-Programme sehen, bei denen die Funktionsdeklaration über `main()` und die Funktionsdefinition unter `main()` steht. Dadurch wird der Code übersichtlicher und leichter zu lesen:
### Beispiel:
```cpp
// Function declaration
void myFunction();

// The main method
int main() {
  myFunction();  // call the function
  return 0;
}

// Function definition
void myFunction() {
  cout << "I just got executed!";
}
```

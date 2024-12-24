# C++ Ausgabe (Text drucken)
Das Objekt `cout` wird zusammen mit dem Operator `<<` verwendet, um Werte auszugeben und Text zu drucken.

Vergessen Sie nicht, den Text mit doppelten Anführungszeichen (`""`) zu umgeben:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
} 
```

Sie können so viele `cout` Objekte hinzufügen, wie Sie möchten. Beachten Sie jedoch, dass dadurch keine neue Zeile am Ende der Ausgabe eingefügt wird:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
} 
```

# C++ Ausgabe von Nummern
Sie können auch `cout()` verwenden, um Zahlen zu drucken.

Im Gegensatz zu Text werden Zahlen jedoch nicht in Anführungszeichen gesetzt:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << 3;
  return 0;
} 
```

Sie können auch mathematische Berechnungen durchführen:
### Beispiel:
```cpp
cout << 3 + 3; 
```
### Beispiel:
```cpp
cout << 2 * 5; 
```

# C++ Zeilenumbruch
Um eine neue Zeile in Ihre Ausgabe einzufügen, können Sie das Zeichen `\n` verwenden:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
} 
```

Sie können auch einen anderen `<<` Operator verwenden und das `\n` Zeichen hinter den Text setzen, etwa so:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n";
  cout << "I am learning C++";
  return 0;
} 
```

Tipp: Zwei `\n` Zeichen hintereinander erzeugen eine Leerzeile:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n\n";
  cout << "I am learning C++";
  return 0;
} 
```

Eine andere Möglichkeit, eine neue Zeile einzufügen, ist die Verwendung des `endl` Manipulators:
### Beispiel:
```cpp
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
} 
```

> **Hinweis:** Sowohl `\n` als auch `endl` werden zum Umbrechen von Zeilen verwendet. Am häufigsten wird jedoch `\n` verwendet.
>
> **Aber was genau ist `\n`?**
>
> Das Newline-Zeichen (`\n`) wird als Escape-Sequenz bezeichnet und zwingt den Cursor, seine Position zum Anfang der nächsten Zeile auf dem Bildschirm zu ändern. Dies führt zu einer neuen Zeile.
>
> Beispiele für andere gültige Escape-Sequenzen sind:


| Escape Sequence | Beschreibung | 
|-------------|---------------|
| \t | Erzeugt eine horizontale Registerkarte | 
| \\ | Einfügen eines Backslash-Zeichens (\) | 
| \" | Fügt ein doppeltes Anführungszeichen ein | 

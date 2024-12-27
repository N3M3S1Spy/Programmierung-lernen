## C++ Ausgabe (Text drucken)

Das Objekt `cout` wird zusammen mit dem Operator `<<` verwendet, um Werte auszugeben und Text zu drucken.

Vergiss nicht, den Text mit doppelten Anführungszeichen (`""`) zu umgeben:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
}
```

Du kannst so viele `cout`-Objekte hinzufügen, wie du möchtest. Beachte jedoch, dass dadurch keine neue Zeile am Ende der Ausgabe eingefügt wird:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  cout << "I am learning C++";
  return 0;
}
```

## C++ Ausgabe von Nummern

Du kannst auch `cout` verwenden, um Zahlen zu drucken.

Im Gegensatz zu Text werden Zahlen jedoch nicht in Anführungszeichen gesetzt:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << 3;
  return 0;
}
```

Du kannst auch mathematische Berechnungen durchführen:

### Beispiel:

```c++
cout << 3 + 3;
```

### Beispiel:

```c++
cout << 2 * 5;
```

## C++ Zeilenumbruch

Um eine neue Zeile in deine Ausgabe einzufügen, kannst du das Zeichen `\n` verwenden:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World! \n";
  cout << "I am learning C++";
  return 0;
}
```

Du kannst auch einen weiteren `<<`-Operator verwenden und das `\n`-Zeichen hinter den Text setzen, etwa so:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n";
  cout << "I am learning C++";
  return 0;
}
```

Tipp: Zwei `\n`-Zeichen hintereinander erzeugen eine Leerzeile:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << "\n\n";
  cout << "I am learning C++";
  return 0;
}
```

Eine andere Möglichkeit, eine neue Zeile einzufügen, ist die Verwendung des `endl`-Manipulators:

### Beispiel:

```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!" << endl;
  cout << "I am learning C++";
  return 0;
}
```

>   **Hinweis:** Sowohl `\n` als auch `endl` werden zum Umbrechen von Zeilen verwendet. Am häufigsten wird jedoch `\n` verwendet.

>   **Aber was genau ist `\n`?**

>   Das Newline-Zeichen (`\n`) wird als Escape-Sequenz bezeichnet und zwingt den Cursor, seine Position zum Anfang der nächsten Zeile auf dem Bildschirm zu ändern. Dies führt zu einer neuen Zeile.

>   Beispiele für andere gültige Escape-Sequenzen sind:

| Escape Sequence | Beschreibung                     |
| --------------- | -------------------------------- |
| `\t`            | Erzeugt eine horizontale Registerkarte |
| `\\`            | Fügt ein Backslash-Zeichen (`\`) ein |
| `\"`            | Fügt ein doppeltes Anführungszeichen ein |

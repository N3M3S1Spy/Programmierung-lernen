## C++ Zeichenketten (Strings)

Zeichenketten (Strings) werden zum Speichern von Text/Zeichen verwendet.

z. B. ist "Hello World" eine Zeichenkette.

Eine `string`-Variable enthält eine Sammlung von Zeichen, die von doppelten Anführungszeichen umgeben sind:

### Beispiel:

Erstelle eine Variable vom Typ `string` und weise ihr einen Wert zu:

```c++
string begruessung = "Hallo";
```

Um Strings zu verwenden, musst du die `<string>`-Bibliothek in den Quellcode einbinden:

### Beispiel:

```c++
#include <string> // Die string-Bibliothek einbinden

// Eine string-Variable erstellen
string begruessung = "Hallo";
```

----------------

## C++ String-Verkettung

Der Operator `+` kann zwischen Zeichenketten verwendet werden, um sie zu einer neuen Zeichenkette zu verbinden. Dies wird als **Verkettung** bezeichnet:

### Beispiel:

```c++
string vorname = "John ";
string nachname = "Doe";
string vollerName = vorname + nachname;
cout << vollerName; // Gibt "John Doe" aus
```

Im obigen Beispiel haben wir ein Leerzeichen nach `vorname` eingefügt, um bei der Ausgabe ein Leerzeichen zwischen John und Doe zu erzeugen. Du kannst jedoch auch ein Leerzeichen mit Anführungszeichen (`" "` oder `' '`) einfügen:

### Beispiel:

```c++
string vorname = "John";
string nachname = "Doe";
string vollerName = vorname + " " + nachname;
cout << vollerName; // Gibt "John Doe" aus
```

## Anhängen (`append()`)

Ein String in C++ ist eigentlich ein Objekt, das Funktionen enthält, die bestimmte Operationen mit Strings durchführen können. Zum Beispiel kannst du mit der Funktion `append()` auch Strings aneinanderhängen:

### Beispiel:

```c++
string vorname = "John ";
string nachname = "Doe";
string vollerName = vorname.append(nachname);
cout << vollerName; // Gibt "John Doe" aus
```

----------------

## C++ Zahlen und Strings

>   **Achtung!**
>
>   C++ verwendet den Operator `+` sowohl für die **Addition** als auch für die **Verkettung**.
>
>   Zahlen werden addiert. Zeichenketten werden verkettet.

Wenn du zwei Zahlen addierst, ist das Ergebnis eine Zahl:

### Beispiel:

```c++
int x = 10;
int y = 20;
int z = x + y; // z ist 30 (eine Ganzzahl)
```

Wenn du zwei Zeichenfolgen addierst, ist das Ergebnis eine Verkettung von Zeichenfolgen:

### Beispiel:

```c++
string x = "10";
string y = "20";
string z = x + y; // z ist "1020" (eine Zeichenkette)
```

Wenn du versuchst, eine Zahl an eine Zeichenkette anzuhängen (ohne explizite Konvertierung), kann es zu unerwartetem Verhalten oder Fehlern kommen. In neueren C++ Versionen ist das direkte Anhängen einer Zahl an einen String nicht mehr ohne Weiteres möglich. Stattdessen muss die Zahl in einen String konvertiert werden.

**Korrekte Konvertierung einer Zahl in einen String:**

```c++
#include <string>
#include <sstream> // Für stringstream

int y = 20;
std::stringstream ss;
ss << y;
std::string y_str = ss.str();

std::string x = "10";
std::string z = x + y_str; // z ist "1020" (eine Zeichenkette)
std::cout << z;
```

----------------

## C++ String-Länge (`length()`/`size()`)

Um die Länge einer Zeichenkette zu ermitteln, verwendest du die Funktion `length()`:

### Beispiel:

```c++
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "Die Länge der Zeichenkette txt ist: " << txt.length(); // Gibt 26 aus
```

**Tipp:** In einigen C++-Programmen wird die Funktion `size()` verwendet, um die Länge einer Zeichenkette zu ermitteln. Dies ist nur ein Alias von `length()`. Es bleibt dir überlassen, ob du `length()` oder `size()` verwenden möchtest:

### Beispiel:

```c++
string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
cout << "Die Länge der Zeichenkette txt ist: " << txt.size(); // Gibt 26 aus
```

----------------

## C++ Zugriff auf String-Zeichen

Du kannst auf die Zeichen in einer Zeichenkette zugreifen, indem du auf die Indexnummer in eckigen Klammern `[]` verweist.

Dieses Beispiel gibt das **erste Zeichen** in `meinString` aus:

### Beispiel:

```c++
string meinString = "Hallo";
cout << meinString[0]; // Gibt 'H' aus
```

>   **Hinweis:** String-Indizes beginnen mit 0: `[0]` ist das erste Zeichen, `[1]` ist das zweite Zeichen usw.

Dieses Beispiel gibt das **zweite Zeichen** in `meinString` aus:

### Beispiel:

```c++
string meinString = "Hallo";
cout << meinString[1]; // Gibt 'a' aus
```

Um das letzte Zeichen einer Zeichenkette auszugeben, kannst du den folgenden Code verwenden:

### Beispiel:

```c++
string meinString = "Hallo";
cout << meinString[meinString.length() - 1]; // Gibt 'o' aus
```

## Zeichen in einem String ändern

Um den Wert eines bestimmten Zeichens in einer Zeichenkette zu ändern, gibst du die Indexnummer an und verwendest einfache Anführungszeichen:

### Beispiel:

```c++
string meinString = "Hallo";
meinString[0] = 'J';
cout << meinString; // Gibt "Jallo" aus
```

## Die Funktion `at()`

Die `<string>`-Bibliothek verfügt auch über eine `at()`-Funktion, die für den Zugriff auf Zeichen in einer Zeichenkette verwendet werden kann. Sie bietet zusätzliche Sicherheit durch Überprüfung auf gültige Indizes.

### Beispiel:

```c++
string meinString = "Hallo";
cout << meinString; // Gibt "Hallo" aus

cout << meinString.at(0);     // Erstes Zeichen ('H')
cout << meinString.at(1);     // Zweites Zeichen ('a')
cout << meinString.at(meinString.length() - 1); // Letztes Zeichen ('o')

meinString.at(0) = 'J';
cout << meinString; // Gibt "Jallo" aus
```

----------------

## C++ Sonderzeichen (Escape-Sequenzen)

Da Zeichenketten in Anführungszeichen geschrieben werden müssen, würde C++ diese Zeichenkette falsch verstehen und einen Fehler erzeugen:

```c++
// string txt = "Wir sind die sogenannten "Wikinger" aus dem Norden."; // Fehler!
```

Die Lösung, um dieses Problem zu vermeiden, ist die Verwendung des Backslash-Escape-Zeichens (`\`).

Das Backslash-Escape-Zeichen (`\`) verwandelt Sonderzeichen in normale Zeichen innerhalb von Strings:

| Escape-Sequenz | Ergebnis | Beschreibung                 |
| :------------- | :------- | :--------------------------- |
| `\'`           | `'`      | Einfaches Anführungszeichen     |
| `\"`           | `"`      | Doppeltes Anführungszeichen    |
| `\\`           | `\`      | Backslash                    |
| `\n`           |          | Neue Zeile                    |
| `\t`           |          | Tabulator                    |

Die Sequenz `\"` fügt ein doppeltes Anführungszeichen in eine Zeichenkette ein:

### Beispiel:

```c++
string txt = "Wir sind die sogenannten \"Wikinger\" aus dem Norden.";
cout << txt; // Gibt "Wir sind die sogenannten "Wikinger" aus dem Norden." aus
```

Die Sequenz `\'` fügt ein einzelnes Anführungszeichen in eine Zeichenkette ein:

### Beispiel:

```c++
string txt = "Es ist \'okay\'.";
cout << txt; // Gibt "Es ist 'okay'." aus
```

Die Sequenz `\\` fügt einen einzelnen Backslash in eine Zeichenkette ein:

### Beispiel:

```c++
string txt = "Der Buchstabe \\ wird Backslash genannt.";
cout << txt; // Gibt "Der Buchstabe \ wird Backslash genannt." aus
```

----------------

Okay, hier ist die überarbeitete Fortsetzung des Texts über C++-Strings, Teil 2, mit allen Verbesserungen und zusätzlichen Erklärungen:

----------------

## C++ Benutzereingabe von Strings (Fortsetzung)

Wie bereits erwähnt, betrachtet `cin` ein Leerzeichen (Whitespace, Tabulator usw.) als Abschlusszeichen, was bedeutet, dass es nur ein einziges Wort speichern kann.

### Beispiel:

```c++
string vollerName;
cout << "Gib deinen vollen Namen ein: ";
cin >> vollerName;
cout << "Dein Name ist: " << vollerName;

// Eingabe: John Doe
// Ausgabe: Dein Name ist: John
```

Im obigen Beispiel würde man erwarten, dass das Programm "John Doe" ausgibt, aber es gibt nur "John" aus.

Aus diesem Grund verwenden wir bei der Arbeit mit Strings oft die Funktion `getline()`, um eine ganze Textzeile zu lesen. Sie nimmt `cin` als ersten Parameter und die String-Variable als zweiten:

### Beispiel:

```c++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string vollerName;
    cout << "Gib deinen vollen Namen ein: ";
    getline(cin, vollerName); // Liest die ganze Zeile inklusive Leerzeichen
    cout << "Dein Name ist: " << vollerName;
    return 0;
}

// Eingabe: John Doe
// Ausgabe: Dein Name ist: John Doe
```

**Erklärung zu `getline()`:**

Die Funktion `getline(cin, str)` liest Zeichen von einem Eingabestrom (`cin`) und speichert sie in einer Zeichenkette (`str`), bis ein Zeilenumbruch ('\n') gefunden wird. Der Zeilenumbruch wird gelesen, aber nicht in der Zeichenkette gespeichert. Dies ermöglicht das Einlesen von Strings mit Leerzeichen.

**Wichtiger Hinweis zur Verwendung von `getline()` nach `cin >>`:**

Wenn du `getline()` direkt nach der Verwendung von `cin >>` verwendest, kann es zu einem unerwarteten Verhalten kommen. Der Grund dafür ist, dass `cin >>` den Zeilenumbruch im Eingabepuffer lässt, der dann von `getline()` sofort gelesen wird, was zu einer leeren Zeile führt. Um dieses Problem zu beheben, musst du den Eingabepuffer leeren, bevor du `getline()` verwendest. Hier ist ein Beispiel:

```c++
#include <iostream>
#include <string>
#include <limits> // Für numeric_limits

using namespace std;

int main() {
    int alter;
    string name;

    cout << "Gib dein Alter ein: ";
    cin >> alter;

    // Eingabepuffer leeren
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Gib deinen vollen Namen ein: ";
    getline(cin, name);

    cout << "Du bist " << alter << " Jahre alt und dein Name ist " << name << endl;
    return 0;
}
```

Die Zeile `cin.ignore(numeric_limits<streamsize>::max(), '\n');` verwirft alle Zeichen im Eingabepuffer bis zum nächsten Zeilenumbruch.

----------------

## C++ String-Namespace

Du wirst vielleicht einige C++-Programme sehen, die ohne die Standard-Namespace-Bibliothek laufen. Die Zeile `using namespace std;` kann weggelassen und durch das Schlüsselwort `std::` ersetzt werden, gefolgt vom Operator `::` für `string`- (und `cout`-) Objekte.

### Beispiel:

```c++
#include <iostream>
#include <string>

int main() {
    std::string begruessung = "Hallo";
    std::cout << begruessung << std::endl;
    return 0;
}
```

>   Es bleibt dir überlassen, ob du die Standard-Namespace-Bibliothek einbinden möchtest oder nicht. Die Verwendung von `using namespace std;` kann den Code kürzer machen, aber in größeren Projekten kann es zu Namenskonflikten führen. Die explizite Verwendung von `std::` ist die empfohlene Vorgehensweise in professionellen Projekten.

----------------

## C++ C-Style Strings (C-Zeichenketten)

Strings im C-Stil werden mit dem Typ `char` anstelle von `string` erstellt.

Der Name stammt von der Sprache C, die im Gegensatz zu vielen anderen Programmiersprachen keinen `string`-Typ zur einfachen Erstellung von String-Variablen hat. Stattdessen musst du den `char`-Typ verwenden und ein Array von Zeichen erstellen, um in C einen "String" zu erstellen.

Da C++ als eine Erweiterung von C entwickelt wurde, wird diese Art der Erstellung von Zeichenketten in C++ weiterhin unterstützt:

### Beispiel:

```c++
#include <iostream>

using namespace std;

int main() {
    string begruessung1 = "Hallo"; // Regulärer String (C++)
    char begruessung2[] = "Hallo"; // C-Style String (ein Array von Zeichen)

    cout << begruessung1 << endl;
    cout << begruessung2 << endl;
    return 0;
}
```

**Wichtige Unterschiede und Hinweise zu C-Style Strings:**

*   **Nullterminierung:** C-Style Strings sind nullterminiert, d.h., sie enden mit einem Nullzeichen (`\0`). Dieses Zeichen markiert das Ende des Strings.
*   **Array-Größe:** Bei der Deklaration eines C-Style Strings als Array muss entweder die Größe explizit angegeben werden oder der Compiler ermittelt die Größe anhand der Initialisierung.
*   **Keine dynamische Größenänderung:** Die Größe eines C-Style Strings ist festgelegt. Eine dynamische Größenänderung ist nicht ohne Weiteres möglich.
*   **Funktionen aus `<cstring>`:** Für die Arbeit mit C-Style Strings stehen Funktionen in der Header-Datei `<cstring>` (früher `<string.h>`) zur Verfügung, z.B. `strcpy()`, `strcat()`, `strlen()`.

**Beispiel mit `<cstring>`:**

```c++
#include <iostream>
#include <cstring> // Für C-String-Funktionen

using namespace std;

int main() {
    char str1[10] = "Hallo";
    char str2[] = " Welt";
    strcat(str1, str2); // Verkettet str2 an str1 (Achtung: Pufferüberlauf möglich!)
    cout << str1 << endl; // Gibt "Hallo Welt" aus
    cout << strlen(str1) << endl; // Gibt die Länge des Strings aus (10)
    return 0;
}
```

>   **Hinweis:** Es ist bequemer und sicherer, mit dem Standard-`string`-Typ (`std::string`) zu arbeiten als mit Strings im C-Stil. Ein Grund, warum einige Benutzer weiterhin Strings im C-Stil verwenden, ist die Kompatibilität mit älterem C-Code oder der Zugriff auf bestimmte Funktionen der C-Standardbibliothek. In modernem C++ wird jedoch der `std::string`-Typ bevorzugt.
Allerdings betrachtet `cin`

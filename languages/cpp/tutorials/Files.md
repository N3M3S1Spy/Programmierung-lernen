## C++ Dateien

### Arbeiten mit Dateien in C++

Die `fstream`-Bibliothek ermöglicht es uns, mit Dateien in C++ zu arbeiten.

Um die `fstream`-Bibliothek zu verwenden, müssen wir sowohl die Standardheaderdatei `<iostream>` **ALS AUCH** die `<fstream>`-Headerdatei einbinden:

### Beispiel:

```c++
#include <iostream>
#include <fstream> 
```

Die `fstream`-Bibliothek bietet drei Klassen zum Erstellen, Schreiben und Lesen von Dateien:

| **Klasse** | **Beschreibung** |
|---|---|
| `ofstream` | Dient zum Erstellen und Schreiben in Dateien |
| `ifstream` | Dient zum Lesen aus Dateien | 
| `fstream` | Eine Kombination aus `ofstream` und `ifstream`: Erstellt, liest und schreibt in Dateien |

## Erstellen und Schreiben in eine Datei

Um eine Datei zu erstellen, verwenden wir entweder die Klasse `ofstream` oder `fstream` und geben den Namen der Datei an.

Zum Schreiben in die Datei verwenden wir den EinAusgabe-Operator (`<<`).

### Beispiel:

```c++
#include <iostream>
#include <fstream>
using namespace std;

int main() {
  // Erstellen und öffnen einer Textdatei
  ofstream meineDatei("dateiname.txt");

  // In die Datei schreiben
  meineDatei << "Dateien können knifflig sein, aber es macht trotzdem Spaß!";

  // Schließen der Datei
  meineDatei.close();
}
```

> **Warum schließen wir die Datei?**

Das Schließen der Datei gilt als gute Praxis und kann unnötigen Speicherplatz freigeben.

## Lesen aus einer Datei

Um aus einer Datei zu lesen, verwenden wir entweder die Klasse `ifstream` oder `fstream` und geben den Namen der Datei an.

Beachte, dass wir zusätzlich eine `while`-Schleife zusammen mit der Funktion `getline()` (die zur Klasse `ifstream` gehört) verwenden, um die Datei Zeile für Zeile zu lesen und den Inhalt der Datei auszugeben:

### Beispiel:

```c++
// Text-String zum Ausgeben der Textdatei
string meinText;

// Aus der Textdatei lesen
ifstream meineLeseDatei("dateiname.txt");

// Verwendung einer while-Schleife mit der getline()-Funktion zum zeilenweisen Lesen der Datei
while (getline (meineLeseDatei, meinText)) {
  // Text aus der Datei ausgeben
  cout << meinText;
}

// Schließen der Datei
meineLeseDatei.close(); 
```

## Vollständige Referenz für `fstream`

Eine vollständige Referenz der `fstream`-Klassen und -Funktionen findest du in unserer [C++ fstream-Referenz](../reference/fstream.md).

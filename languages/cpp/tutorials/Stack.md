## C++-Stapel (`std::stack`)

Ein Stapel (**LIFO** - **Last In, First Out**) ist eine lineare Datenstruktur, die Elemente in einer bestimmten Reihenfolge speichert. Ähnlich wie bei einem Stapel Pfannkuchen werden Elemente nur oben hinzugefügt und auch wieder von oben entfernt. 

Im Gegensatz zu Vektoren kann auf Elemente im Stapel nicht über Indexnummern zugegriffen werden. Da Elemente oben hinzugefügt und entfernt werden, kannst du immer nur auf das oberste Element zugreifen.

Um einen Stapel zu verwenden, musst du die Headerdatei `<stack>` einbinden:

```c++
#include <iostream>
#include <stack>
#include <string> // Für das Beispiel mit Strings
using namespace std;
```

## Einen Stapel erstellen

Um einen Stapel zu erstellen, verwendest du das Schlüsselwort `stack` und gibst innerhalb von spitzen Klammern `<>` den **Datentyp** der zu speichernden Werte an, gefolgt vom Namen des Stapels: `stack<Datentyp> stapelName`.

```c++
// Einen Stapel namens 'autos' erstellen, der Strings speichert
stack<string> autos;

// Einen Stapel namens 'zahlen' erstellen, der Integers speichert
stack<int> zahlen;
```

**Hinweis:** Der Datentyp des Stapels (im Beispiel `string`) kann nach der Deklaration nicht mehr geändert werden.

## Elemente hinzufügen

Um Elemente zu einem Stapel hinzuzufügen, verwendest du die Funktion `.push()`. Diese fügt das Element an die **Spitze** des Stapels hinzu:

### Beispiel:

```c++
// Einen Stapel namens 'autos' erstellen
stack<string> autos;

// Elemente zum Stapel hinzufügen
autos.push("Volvo");
autos.push("BMW");
autos.push("Ford");
autos.push("Mazda");

// Den Inhalt des Stapels ausgeben (iterieren)
while (!autos.empty()) {
  cout << autos.top() << endl; // .top() gibt das oberste Element aus, .pop() entfernt es
  autos.pop();
}
```

**Beachte:** Im Gegensatz zu Vektoren kannst du beim Erstellen eines Stapels keine Elemente initial mit angeben.

## Auf Stapelelemente zugreifen

Du kannst nicht über Indexnummern auf Elemente im Stapel zugreifen, wie bei Arrays und Vektoren. 

Stattdessen verwendest du die Funktion `.top()`, um auf das **oberste Element** des Stapels zuzugreifen:

### Beispiel:

```c++
// Erstelle einen Stapel mit Autos
stack<string> autos;
autos.push("Volvo");
autos.push("BMW");
autos.push("Ford");

// Greife auf das oberste Element zu (ohne es zu entfernen)
cout << "Oberstes Element: " << autos.top() << endl;
```

## Stapelelement ändern

Du kannst den Wert des obersten Elements auch mit der Funktion `.top()` ändern:

### Beispiel:

```c++
// Erstelle einen Stapel mit Autos
stack<string> autos;
autos.push("Volvo");
autos.push("BMW");
autos.push("Ford");

// Ändere den Wert des obersten Elements
autos.top() = "Tesla";

// Greife erneut auf das oberste Element zu
cout << "Oberstes Element (nach Änderung): " << autos.top() << endl;
```

## Elemente entfernen

Verwende die Funktion `.pop()`, um das **oberste Element** vom Stapel zu entfernen:

### Beispiel:

```c++
// Erstelle einen Stapel mit Autos
stack<string> autos;
autos.push("Volvo");
autos.push("BMW");
autos.push("Ford");

// Entferne das oberste Element (Ford)
autos.pop();

// Greife auf das neue oberste Element zu (BMW)
cout << "Oberstes Element (nach Entfernen): " << autos.top() << endl;
```

## Stapelgröße ermitteln

Die Funktion `.size()` gibt die Anzahl der aktuell im Stapel enthaltenen Elemente zurück:

### Beispiel:

```c++
stack<string> autos;
autos.push("Volvo");
autos.push("BMW");
autos.push("Ford");

cout << "Anzahl Elemente im Stapel: " << autos.size() << endl; // Gibt "Anzahl Elemente im Stapel: 3" aus
```

## Prüfen, ob der Stapel leer ist

Verwende die Funktion `.empty()`, um zu überprüfen, ob der Stapel leer ist. Die Funktion gibt `true` (1) zurück, wenn der Stapel leer ist, und `false` (0), wenn er mindestens ein Element enthält:

### Beispiel:

```c++
stack<string> autos;
cout << "Ist der Stapel leer? " << autos.empty() << endl; // Gibt "Ist der Stapel leer? 1" (true) aus

autos.push("Audi");
cout << "Ist der Stapel leer? " << autos.empty() << endl; // Gibt "Ist der Stapel leer? 0" (false) aus
```

## Anwendungsfälle für Stapel

Stapel sind in der Informatik sehr nützliche Datenstrukturen. Hier sind einige typische Anwendungsfälle:

*   **Funktionsaufrufe (Call Stack):** Wenn in einem Programm eine Funktion aufgerufen wird, werden Informationen über den Aufruf (z.B. Rücksprungadresse, lokale Variablen) auf dem Call Stack gespeichert. Wenn die Funktion beendet ist, werden diese Informationen vom Stapel entfernt.

*   **Undo/Redo-Funktionen:** In vielen Anwendungen (z.B. Texteditoren, Grafikprogrammen) werden Aktionen in einem Stapel gespeichert, um Undo/Redo-Funktionen zu implementieren. Mit `push()` wird eine Aktion hinzugefügt, mit `pop()` wird die letzte Aktion rückgängig gemacht.

*   **Auswertung von Ausdrücken (z.B. Postfix-Notation):** Stapel können verwendet werden, um arithmetische Ausdrücke in Postfix-Notation (umgekehrte polnische Notation) auszuwerten.

*   **Backtracking-Algorithmen:** Bei Algorithmen, die verschiedene Möglichkeiten ausprobieren (z.B. bei der Lösung von Labyrinthen), kann ein Stapel verwendet werden, um den Pfad zu verfolgen.

*   **Browsing-Verlauf (Browser History):** Der Zurück-Button im Browser funktioniert im Prinzip wie ein Stapel. Jede besuchte Seite wird auf dem Stapel gespeichert. Durch Klicken auf "Zurück" wird die oberste Seite vom Stapel entfernt und die vorherige Seite angezeigt.

## Stapel vs. Warteschlangen (Queues)

Stapel und Warteschlangen sind beides lineare Datenstrukturen, unterscheiden sich aber in der Art und Weise, wie Elemente hinzugefügt und entfernt werden:

*   **Stapel (LIFO):** Das zuletzt hinzugefügte Element wird zuerst entfernt.
*   **Warteschlange (FIFO - First In, First Out):** Das zuerst hinzugefügte Element wird zuerst entfernt (wie beim Anstehen an einer Kasse).

## Zusammenfassung der Stapel-Funktionen

Hier eine kurze Zusammenfassung der wichtigsten `std::stack`-Funktionen:

*   `push(element)`: Fügt ein Element an der Spitze des Stapels hinzu.
*   `pop()`: Entfernt das oberste Element vom Stapel.
*   `top()`: Gibt das oberste Element zurück (ohne es zu entfernen).
*   `size()`: Gibt die Anzahl der Elemente im Stapel zurück.
*   `empty()`: Gibt `true` zurück, wenn der Stapel leer ist, andernfalls `false`.

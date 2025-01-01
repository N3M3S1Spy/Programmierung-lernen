## C++ Datenstrukturen und die STL (Standard Template Library)

### Datenstrukturen

Datenstrukturen dienen dazu, Daten zu speichern und zu organisieren. Ein Array ist ein einfaches Beispiel: Es ermöglicht die Speicherung mehrerer Elemente in einer einzelnen Variable.

C++ bietet jedoch noch viele weitere, flexiblere Datenstrukturen, die jeweils für unterschiedliche Zwecke optimiert sind. Diese sind Teil der C++ STL (Standard Template Library).

### Die C++ STL

Die STL ist eine Bibliothek, die verschiedene Datenstrukturen (Container) und Algorithmen zur effektiven Speicherung und Bearbeitung von Daten bereitstellt.

Datenstrukturen *speichern* Daten, während Algorithmen dazu dienen, verschiedene Probleme zu *lösen*, oft durch das Durchsuchen und Bearbeiten dieser Datenstrukturen.

Die Wahl der richtigen Datenstruktur und des passenden Algorithmus kann die Ausführungsgeschwindigkeit eines Programms erheblich verbessern, insbesondere bei großen Datenmengen.

Die gängigsten Datenstrukturen (Container) in der STL sind:

| Datenstruktur (Container) | Beschreibung                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                |
|---------------------------|-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------|
| **`vector` (dynamisches Array)** | Speichert Elemente wie ein Array, kann aber seine Größe dynamisch ändern. Das Hinzufügen und Entfernen von Elementen erfolgt in der Regel am Ende. Der Zugriff auf Elemente ist über den Index möglich (wie bei Arrays).                                                                                                                                                                                                                                                                                       |
| **`list` (doppelt verkettete Liste)** | Speichert Elemente sequenziell, wobei jedes Element mit dem nächsten verbunden ist. Das Hinzufügen und Entfernen von Elementen ist an beiden Enden möglich. Kein direkter Zugriff über den Index möglich (man muss die Liste durchlaufen).                                                                                                                                                                                                                                                              |
| **`stack` (Stapel)**      | Speichert Elemente in einer bestimmten Reihenfolge, genannt LIFO (Last In, First Out – Letztes Rein, Erstes Raus). Elemente können nur oben hinzugefügt und entfernt werden. Kein direkter Zugriff über den Index möglich. Vergleichbar mit einem Stapel Teller.                                                                                                                                                                                                                                                             |
| **`queue` (Warteschlange)**    | Speichert Elemente in einer bestimmten Reihenfolge, genannt FIFO (First In, First Out – Erstes Rein, Erstes Raus). Elemente werden am Ende hinzugefügt und am Anfang entfernt. Kein direkter Zugriff über den Index möglich. Vergleichbar mit einer Warteschlange an der Kasse.                                                                                                                                                                                                                                                  |
| **`deque` (Doppel-End-Warteschlange)** | Speichert Elemente in einer Warteschlange mit zwei Enden. Elemente können an beiden Enden hinzugefügt und entfernt werden. Der Zugriff auf Elemente ist über den Index möglich.                                                                                                                                                                                                                                                                                                                                       |
| **`set` (Menge)**         | Speichert *eindeutige* Elemente (keine Duplikate). Die Elemente sind automatisch sortiert. Kein direkter Zugriff über den Index möglich.                                                                                                                                                                                                                                                                                                                                                                                      |
| **`map` (assoziatives Array/Wörterbuch)** | Speichert Elemente in "Schlüssel/Wert"-Paaren (Key/Value-Pairs). Der Zugriff erfolgt über die *Schlüssel* (Keys), nicht über den Index. Jeder Schlüssel ist eindeutig. Dient dem schnellen Nachschlagen von Werten anhand ihrer Schlüssel.                                                                                                                                                                                                                                                                          |

Die Wahl der richtigen Datenstruktur hängt von den jeweiligen Anforderungen ab. Alle diese Container haben gemeinsam, dass du die entsprechende Headerdatei einbinden musst, um sie verwenden zu können:

### Beispiel (Headerdateien einbinden):

```c++
#include <vector> // Für Vektoren
#include <list>   // Für Listen
#include <set>    // Für Mengen
#include <map>    // Für Maps
#include <stack>  // Für Stacks
#include <queue>  // Für Queues
#include <deque> // Für Deques
#include <iostream> // Für die Ausgabe
#include <string> // Für Strings
using namespace std;
```

Hier ist ein einfaches Beispiel für die Verwendung von Vektoren (nachdem die Headerdatei `<vector>` eingebunden wurde):

### Beispiel (Vektor verwenden):

```c++
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    // Erstellt einen Vektor namens 'autos', der Strings speichert
    vector<string> autos = {"Volvo", "BMW", "Ford", "Mazda"};

    // Gibt die Elemente des Vektors aus
    for (string autoName : autos) { // Bereichsbasierte for-Schleife (Range-based for loop)
        cout << autoName << "\n";
    }
    return 0;
}
```

Die nächsten Kapitel werden detaillierter erklären, wie jede dieser Datenstrukturen funktioniert und wie man sie verwendet.

### Schlüsselkonzepte der STL

Die wichtigsten Komponenten der STL sind **Container**, **Iteratoren** und **Algorithmen** sowie die Beziehung zwischen ihnen:

*   **Container** sind Datenstrukturen, die eine Möglichkeit zur Datenspeicherung bieten, wie z. B. Vektoren, Listen usw.
*   **Iteratoren** sind Objekte, die verwendet werden, um auf die Elemente eines Containers zuzugreifen. Sie funktionieren ähnlich wie Pointer, sind aber allgemeiner.
*   **Algorithmen** umfassen Funktionen wie `sort()` (sortieren) und `find()` (finden), die Operationen auf Containern mithilfe von **Iteratoren** ausführen.

In der Informatik gehen Datenstrukturen und Algorithmen Hand in Hand. Eine Datenstruktur ist wenig wert, wenn man sie nicht effizient mit Algorithmen durchsuchen oder bearbeiten kann, und Algorithmen sind ohne eine Datenstruktur, auf der sie arbeiten können, ebenfalls wenig nützlich.

In den folgenden Kapiteln wirst du sehen, wie alles zusammenhängt.

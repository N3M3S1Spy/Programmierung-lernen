## C++-Warteschlange (std::queue)

**Was ist eine Warteschlange?**

Stell dir eine Schlange vor einem Geschäft vor. Die erste Person, die in die Schlange kommt, ist auch die erste, die bedient wird. Das ist das Prinzip der **Warteschlange** (im Englischen: queue) in der Informatik. Elemente werden in der Reihenfolge hinzugefügt, in der sie benötigt werden, und auch in dieser Reihenfolge wieder entnommen. Dieses Prinzip wird als **First-In-First-Out (FIFO)** bezeichnet.

**Verwendung der `std::queue` in C++**

Um eine Warteschlange in C++ zu verwenden, musst du die `queue`-Bibliothek einbinden:

```c++
#include <queue>
```

**Erstellen einer Warteschlange:**

```c++
queue<Datentyp> nameDerWarteschlange;
```

* **Datentyp:** Der Datentyp der Elemente, die in der Warteschlange gespeichert werden sollen (z.B. `int`, `double`, `string`).
* `nameDerWarteschlange`: Der gewählte Name für die Warteschlange.

**Beispiel:**

```c++
queue<string> autoWarteschlange;
```

**Elemente hinzufügen:**

```c++
warteschlange.push("Element");
```

**Zugriff auf Elemente:**

* **`.front()`:** Gibt das **erste** Element zurück (ohne es zu entfernen).
* **`.back()`:** Gibt das **letzte** Element zurück (ohne es zu entfernen).

**Elemente entfernen:**

```c++
warteschlange.pop();
```
Entfernt das **erste** Element (das Element am Anfang) aus der Warteschlange.

**Größe der Warteschlange:**

```c++
warteschlange.size();
```

**Überprüfen, ob die Warteschlange leer ist:**

```c++
warteschlange.empty();
```

**Anwendungsbeispiele**

* **Simulation von Warteschlangen:** In Simulationen von Supermärkten, Callcentern, Verkehrssystemen.
* **Breitensuche in Graphen:** Bei der Breitensuche wird eine Warteschlange verwendet, um die Knoten eines Graphen zu besuchen.
* **Task-Scheduling:** Aufgaben können in einer Warteschlange gespeichert werden, um sie in der Reihenfolge ihres Eingangs abzuarbeiten.
* **Pufferung von Daten:** Warteschlangen können verwendet werden, um Daten zwischen verschiedenen Teilen eines Programms zu puffern.

**Warum eine Warteschlange verwenden?**

* **Einfach zu verstehen und zu implementieren:** Das FIFO-Prinzip ist intuitiv und leicht zu verstehen.
* **Effizient für viele Anwendungsfälle:** Warteschlangen sind für viele Aufgaben gut geeignet, bei denen Elemente in der Reihenfolge ihres Eingangs verarbeitet werden müssen.

**Zusammenfassung**

Die `std::queue` ist eine wertvolle Datenstruktur in C++, die in vielen Bereichen der Programmierung eingesetzt wird. Sie bietet eine einfache und effiziente Möglichkeit, Elemente in einer bestimmten Reihenfolge zu verwalten.

**Wichtige Punkte:**

* **FIFO:** First-In-First-Out
* **Zugriff:** Nur auf das erste und letzte Element
* **Anwendungen:** Simulationen, Graphensuche, Task-Scheduling, Pufferung

**Zusätzliche Hinweise:**

* **Verwandte Datenstrukturen:** Stapel (LIFO), Vektoren (direkter Zugriff auf jedes Element)
* **Thread-Sicherheit:** Bei Mehrthreadszenarien sind Synchronisationsmechanismen erforderlich.

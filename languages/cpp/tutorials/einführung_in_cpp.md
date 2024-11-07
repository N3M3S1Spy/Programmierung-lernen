# Einführung in C++: Ein Überblick über die Programmiersprache

### Erklärung der Struktur:
1. **Einführung**: Allgemeine Vorstellung von C++ und seinen Merkmalen.
2. **Grundstruktur eines C++-Programms**: Erklärt die grundlegenden Bestandteile eines C++-Programms.
3. **Compiler und Ausführung**: Beschreibt den Ablauf der Kompilierung und Ausführung eines C++-Programms.
4. **Wichtige Komponenten**: Diskussion von Kommentaren und Anweisungen.
5. **Standardbibliothek**: Einführung in die Verwendung der Standardbibliotheken in C++.
6. **Zusammenfassung**: Kurze Wiederholung der wichtigsten Punkte.
7. **Übung**: Praktische Aufgaben zur Vertiefung des Wissens.

Wenn du bereit bist für das nächste Thema, lass es mich wissen!

C++ ist eine weit verbreitete, leistungsstarke Programmiersprache, die in vielen Anwendungsbereichen eingesetzt wird, von Systemsoftware bis hin zu Spieleentwicklung und wissenschaftlichen Anwendungen. Sie wurde von Bjarne Stroustrup in den 1970er Jahren entwickelt und ist eine Erweiterung der Programmiersprache C, die objektorientierte und andere moderne Programmierparadigmen hinzufügt.

In diesem Tutorial geben wir einen Überblick über die wichtigsten Konzepte von C++, die Syntax und die grundlegende Struktur eines C++-Programms.

## 1. Was ist C++?

C++ ist eine **kompilerbasierte Programmiersprache**, die in verschiedenen Bereichen weit verbreitet ist. Sie bietet eine **objektorientierte Programmierung (OOP)**, was bedeutet, dass Programme aus "Objekten" bestehen, die Daten und Funktionen kombinieren. C++ unterstützt auch andere Programmierparadigmen wie **generische Programmierung** und **prozedurale Programmierung**.

### Wichtige Merkmale von C++:
- **Objektorientiert**: C++ ermöglicht es, Daten und Funktionen in Klassen und Objekten zu organisieren.
- **Leistungsfähig und effizient**: C++ bietet direkten Zugriff auf Speicher und Hardware, was eine sehr hohe Leistung ermöglicht.
- **Portabilität**: C++-Programme können auf verschiedenen Betriebssystemen und Plattformen ausgeführt werden.

## 2. Die Grundstruktur eines C++-Programms

Ein einfaches C++-Programm besteht aus mehreren grundlegenden Komponenten:

1. **Include-Direktiven**: Mit `#include` können Bibliotheken in das Programm eingebunden werden, die Funktionen und Datentypen bereitstellen.
2. **main() Funktion**: Der Einstiegspunkt jedes C++-Programms. Hier beginnt die Ausführung.
3. **Anweisungen und Ausdrücke**: Der Code, der in der `main()` Funktion oder anderen Funktionen ausgeführt wird.

### Beispiel eines einfachen C++-Programms:

```cpp
#include <iostream>  // Bibliothek für die Ein-/Ausgabe

int main() {
    std::cout << "Hallo, C++!" << std::endl;  // Ausgabe eines Textes
    return 0;  // Rückgabewert an das Betriebssystem
}
```

#### Erklärung des Codes:
- `#include <iostream>`: Diese Direktive fügt die Header-Datei für die Ein- und Ausgabe ein, sodass wir `std::cout` verwenden können, um Text auf dem Bildschirm auszugeben.
- `int main()`: Die `main`-Funktion ist der Startpunkt des Programms. Wenn das Programm ausgeführt wird, beginnt es mit der Ausführung dieser Funktion.
- `std::cout`: Dies ist der Standard-Ausgabestrom in C++. Mit `std::cout` können wir Texte und Daten auf dem Bildschirm ausgeben.
- `return 0`: Das bedeutet, dass das Programm erfolgreich beendet wurde und an das Betriebssystem zurückgegeben wird.

## 3. Der C++-Compiler und die Ausführung von Programmen

C++ ist eine kompilierte Sprache, was bedeutet, dass der Quellcode in eine ausführbare Datei (z. B. eine `.exe`-Datei) übersetzt werden muss. Dieser Vorgang erfolgt durch den **Compiler**.

- **Compiler**: Ein Programm, das den Quellcode in Maschinensprache übersetzt, damit der Computer ihn ausführen kann.
- **Linker**: Verbindet die von der Compiler-Übersetzung erzeugte Maschinensprache mit Bibliotheken und anderen Programmen.

### Beispiel für den Ablauf:
1. Du schreibst den Quellcode in einer Datei (z. B. `programm.cpp`).
2. Der Compiler übersetzt den Quellcode in eine ausführbare Datei (z. B. `programm.exe`).
3. Du führst das Programm aus, und der Computer führt die Anweisungen im Programm aus.

## 4. Die wichtigsten Komponenten eines C++-Programms

- **Kommentare**: Kommentare im C++-Code helfen, den Code zu dokumentieren und für andere Entwickler verständlicher zu machen. Kommentare werden vom Compiler ignoriert.
  
  - **Einzeilige Kommentare**: Mit `//` wird ein Kommentar für eine einzelne Zeile eingeleitet.
  - **Mehrzeilige Kommentare**: Mit `/* Kommentar */` können mehrere Zeilen kommentiert werden.

- **Anweisungen**: Jede Zeile im C++-Code, die eine Aktion ausführt, wird als Anweisung bezeichnet. Diese enden normalerweise mit einem Semikolon (`;`).

  Beispiel:

  ```cpp
  int x = 5;  // Eine Anweisung, die eine Variable deklariert und initialisiert
  ```

## 5. Die C++-Standardbibliothek

C++ enthält eine Vielzahl von Standardbibliotheken, die grundlegende Funktionen bereitstellen. Ein Beispiel ist die **iostream**-Bibliothek, die Eingabe- und Ausgabefunktionen bereitstellt.

- `#include <iostream>`: Diese Bibliothek wird häufig verwendet, um Text auf dem Bildschirm anzuzeigen oder Benutzereingaben zu lesen.
- Weitere Bibliotheken sind z. B. `#include <cmath>` für mathematische Funktionen oder `#include <vector>` für dynamische Arrays (Vectoren).

## 6. Zusammenfassung

In diesem ersten Tutorial haben wir die Grundlagen von C++ kennengelernt:
- **Was ist C++** und welche Vorteile bietet die Sprache.
- Die **Struktur eines einfachen C++-Programms**.
- Wie der **Compiler und Linker** arbeiten.
- Die wichtigsten **Komponenten eines C++-Programms** wie Kommentare und Anweisungen.

## 7. Übung:

1. Erstelle ein einfaches C++-Programm, das deinen Namen ausgibt.
2. Füge einen Kommentar hinzu, der das Programm erklärt.

Viel Spaß beim Üben!

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

---

## 1. Was ist C++?

C++ ist eine **kompilerbasierte Programmiersprache**, die in verschiedenen Bereichen weit verbreitet ist. Sie wurde von Bjarne Stroustrup in den 1970er Jahren entwickelt und ist eine Erweiterung der Programmiersprache C, die **objektorientierte** und andere moderne Programmierparadigmen hinzufügt.

### Wichtige Merkmale von C++:
- **Objektorientiert**: Daten und Funktionen werden in Klassen und Objekten organisiert.
- **Leistungsfähig und effizient**: Direkter Zugriff auf Speicher und Hardware ermöglicht eine sehr hohe Leistung.
- **Portabilität**: C++-Programme können auf verschiedenen Betriebssystemen und Plattformen ausgeführt werden.
- **Statische Typisierung**: Fehler können bereits zur Kompilierungszeit erkannt werden.

### Programmierparadigmen in C++:
C++ unterstützt mehrere Paradigmen:
- **Objektorientierte Programmierung (OOP)**: Organisiert Programme um Objekte mit Attributen (Daten) und Methoden (Funktionen).
- **Generische Programmierung**: Ermöglicht flexible und wiederverwendbare Codekonstrukte durch Templates.
- **Prozedurale Programmierung**: Fokussiert sich auf Funktionen und Anweisungen, ähnlich wie in C.

---

## 2. Die Grundstruktur eines C++-Programms

Ein einfaches C++-Programm besteht aus mehreren grundlegenden Komponenten:

1. **Include-Direktiven**: Mit `#include` können Bibliotheken eingebunden werden, die Funktionen und Datentypen bereitstellen.
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
- **`#include <iostream>`**: Diese Direktive fügt die Header-Datei für die Ein- und Ausgabe ein, sodass wir `std::cout` verwenden können, um Text auf dem Bildschirm auszugeben.
- **`int main()`**: Die `main`-Funktion ist der Startpunkt des Programms. Wenn das Programm ausgeführt wird, beginnt es mit der Ausführung dieser Funktion.
- **`std::cout`**: Dies ist der Standard-Ausgabestrom in C++. Mit `std::cout` können wir Texte und Daten auf dem Bildschirm ausgeben.
- **`std::endl`**: Fügt einen Zeilenumbruch hinzu und leert den Ausgabepuffer.
- **`return 0`**: Signalisiert dem Betriebssystem, dass das Programm erfolgreich beendet wurde.

> **Hinweis:** `std` ist der Standard-Namensraum in C++. Er enthält viele grundlegende Funktionen und Objekte. Alternativ könnte man `using namespace std;` verwenden, um `std::` wegzulassen, was jedoch zu Namenskonflikten führen kann.

---

## 3. Der C++-Compiler und die Ausführung von Programmen

C++ ist eine kompilierte Sprache. Der Quellcode wird vom **Compiler** in Maschinensprache übersetzt, bevor er ausgeführt werden kann.

### Ablauf der Kompilierung:
1. **Quellcode schreiben**: Der Code wird in einer Datei gespeichert (z. B. `programm.cpp`).
2. **Kompilierung**: Der Compiler übersetzt den Quellcode in Maschinensprache (z. B. `programm.obj`).
3. **Linking**: Der Linker verbindet die erzeugte Maschinensprache mit Bibliotheken und erstellt eine ausführbare Datei (z. B. `programm.exe`).
4. **Ausführung**: Der Computer führt die ausführbare Datei aus.

### Tools:
- **Compiler**: Beispiele sind `g++` (GNU Compiler) für Linux und Mac oder Visual Studio Compiler für Windows.
- **IDEs**: Integrierte Entwicklungsumgebungen wie Visual Studio oder Code::Blocks vereinfachen den Entwicklungsprozess.

### Häufige Fehler:
- **Fehlendes Semikolon**: Anweisungen in C++ müssen mit `;` enden.
- **Nicht eingebundene Bibliotheken**: Vergessen, nötige Header-Dateien wie `<iostream>` einzufügen.

---

## 4. Die wichtigsten Komponenten eines C++-Programms

### Kommentare:
Kommentare helfen, den Code zu dokumentieren und besser verständlich zu machen. Der Compiler ignoriert Kommentare.

- **Einzeilige Kommentare**: Beginnen mit `//`.
- **Mehrzeilige Kommentare**: Eingeschlossen zwischen `/*` und `*/`.

**Beispiele:**
```cpp
// Dies ist ein einzeiliger Kommentar
/*
Dies ist ein mehrzeiliger Kommentar.
Er kann über mehrere Zeilen gehen.
*/
```

> **Tipp:** Verwende Kommentare, um komplexe Logik zu erklären, aber vermeide überflüssige Kommentare bei offensichtlichem Code.

### Anweisungen:
Eine Anweisung ist eine Zeile, die eine Aktion ausführt. Sie endet normalerweise mit einem Semikolon (`;`).

**Beispiel:**
```cpp
int x = 5;  // Deklariert und initialisiert eine Variable
x = x + 1;  // Erhöht den Wert von x um 1
```

---

## 5. Die C++-Standardbibliothek

C++ bietet eine Vielzahl von Standardbibliotheken, die wiederverwendbare Funktionen bereitstellen.

### Beispiele für wichtige Bibliotheken:
- **`#include <iostream>`**: Für Ein- und Ausgabefunktionen wie `std::cout` und `std::cin`.
- **`#include <cmath>`**: Für mathematische Funktionen wie `sqrt()` (Quadratwurzel) und `pow()` (Potenz).
- **`#include <vector>`**: Für dynamische Arrays (Vectoren).

**Beispiel für `cmath`:**
```cpp
#include <cmath>
#include <iostream>

int main() {
    double x = 9.0;
    std::cout << "Die Quadratwurzel von 9 ist: " << sqrt(x) << std::endl;
    return 0;
}
```

**Beispiel für `vector`:**
```cpp
#include <vector>
#include <iostream>

int main() {
    std::vector<int> zahlen = {1, 2, 3};
    zahlen.push_back(4);  // Fügt die Zahl 4 hinzu
    for (int zahl : zahlen) {
        std::cout << zahl << " ";
    }
    return 0;
}
```

---

## 6. Zusammenfassung

In diesem ersten Tutorial haben wir die Grundlagen von C++ kennengelernt:
- **Was ist C++** und welche Vorteile bietet die Sprache.
- Die **Struktur eines einfachen C++-Programms**.
- Wie der **Compiler und Linker** arbeiten.
- Die wichtigsten **Komponenten eines C++-Programms** wie Kommentare und Anweisungen.
- Eine Einführung in die **Standardbibliothek**.

---

## 7. Übung:

1. Schreibe ein Programm, das deinen Namen und dein Alter ausgibt.
2. Schreibe ein Programm, das zwei Zahlen einliest und ihre Summe berechnet.
3. Füge zu einem der Programme Kommentare hinzu, die erklären, was der Code macht.

Viel Spaß beim Übungsprogrammieren!

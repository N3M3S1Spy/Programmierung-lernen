# Strings in C++: Grundlagen und Anwendung

### Erklärung der Struktur:
1. **Was ist ein String?**: Einführung in Strings und Unterschiede zwischen C-Strings und `std::string`.
2. **Strings mit `std::string` manipulieren**: Methoden zur Manipulation und Bearbeitung von Strings, wie Verkettung und Vergleich.
3. **Wichtige Funktionen von `std::string`**: Detaillierte Erklärung wichtiger Methoden wie `substr`, `find` und `append`.
4. **Eingabe und Ausgabe von Strings**: Erklärt, wie Benutzereingaben mit Strings verarbeitet werden.
5. **C-Strings vs. `std::string`**: Vergleich von C-Strings und der modernen `std::string`-Klasse.
6. **Zusammenfassung**: Kurze Zusammenfassung der behandelten Themen.
7. **Übung**: Aufgaben zur Festigung des Gelernten.

In C++ ist ein **String** eine Sequenz von Zeichen, die als Text dargestellt wird. Strings werden häufig in der Programmierung verwendet, um mit Benutzereingaben, Ausgaben und Textdaten zu arbeiten. In C++ gibt es mehrere Möglichkeiten, Strings zu handhaben, wobei die gängigste Methode die Verwendung der Standardbibliothek `std::string` ist.

In diesem Tutorial werden wir uns mit der Deklaration, Manipulation und den häufigsten Methoden von Strings in C++ befassen.

## 1. Was ist ein String?

Ein **String** ist eine Abfolge von Zeichen. In C++ gibt es zwei Hauptarten, mit Strings zu arbeiten:

- **C-Strings**: Diese bestehen aus einem Array von `char`-Elementen, das mit einem Nullzeichen (`\0`) endet.
- **std::string**: Eine komfortablere und modernere Möglichkeit, mit Text in C++ zu arbeiten, die in der C++ Standardbibliothek enthalten ist.

### Beispiel eines C-Strings:

```cpp
#include <iostream>
using namespace std;

int main() {
    char cString[] = "Hallo, Welt!";  // C-String
    cout << cString << endl;
    return 0;
}
```

#### Erklärung:
- Ein **C-String** ist ein Array von `char`-Elementen, das mit einem Nullzeichen (`\0`) endet. Dies markiert das Ende des Strings.

### Beispiel eines `std::string`:

```cpp
#include <iostream>
#include <string>  // Für die Verwendung der Standardbibliothek string
using namespace std;

int main() {
    string str = "Hallo, Welt!";  // std::string
    cout << str << endl;
    return 0;
}
```

#### Erklärung:
- Ein **std::string** ist ein Objekt der Klasse `string`, das die Verwaltung von Text vereinfacht und viele nützliche Funktionen bietet.

## 2. Strings mit `std::string` manipulieren

Die Klasse `std::string` in C++ bietet viele Funktionen zum Arbeiten mit Strings, wie z. B. das Hinzufügen, Ersetzen, Suchen und Vergleichen von Text.

### String-Operatoren:

- **Verkettung**: Zwei Strings zusammenfügen
- **Vergleich**: Strings vergleichen
- **Länge**: Die Anzahl der Zeichen in einem String ermitteln

#### Beispiel für String-Verkettung:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hallo";
    string str2 = "Welt";
    string result = str1 + " " + str2;  // Verkettung der Strings
    cout << result << endl;  // Ausgabe: Hallo Welt
    return 0;
}
```

#### Beispiel für String-Vergleich:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1 = "Hallo";
    string str2 = "Hallo";
    if (str1 == str2) {
        cout << "Die Strings sind gleich!" << endl;
    } else {
        cout << "Die Strings sind unterschiedlich!" << endl;
    }
    return 0;
}
```

#### Beispiel für die Bestimmung der Länge eines Strings:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hallo, Welt!";
    cout << "Die Länge des Strings ist: " << str.length() << endl;  // Ausgabe: 12
    return 0;
}
```

## 3. Wichtige Funktionen von `std::string`

Die Klasse `std::string` stellt viele nützliche Methoden zur Verfügung, die uns das Arbeiten mit Text erheblich erleichtern.

### Wichtige Methoden:

- **`length()`**: Gibt die Länge des Strings zurück.
- **`empty()`**: Überprüft, ob der String leer ist.
- **`substr(start, length)`**: Gibt einen Teilstring zurück.
- **`find(substring)`**: Sucht nach einem Teilstring und gibt den Index des ersten Vorkommens zurück.
- **`append(text)`**: Fügt einen Text am Ende des Strings hinzu.
- **`erase(start, length)`**: Löscht einen Teil des Strings.

#### Beispiel für `substr`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hallo, Welt!";
    string subStr = str.substr(7, 4);  // Gibt den Teilstring "Welt" zurück
    cout << "Teilstring: " << subStr << endl;
    return 0;
}
```

#### Beispiel für `find`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hallo, Welt!";
    size_t found = str.find("Welt");
    if (found != string::npos) {
        cout << "'Welt' gefunden an Index: " << found << endl;
    } else {
        cout << "'Welt' nicht gefunden." << endl;
    }
    return 0;
}
```

#### Beispiel für `append`:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "Hallo";
    str.append(", Welt!");  // Fügt Text an das Ende des Strings an
    cout << str << endl;  // Ausgabe: Hallo, Welt!
    return 0;
}
```

## 4. Eingabe und Ausgabe von Strings

C++ ermöglicht es, mit Strings einfach über `cin` und `cout` zu arbeiten.

### Beispiel für Benutzereingabe:

```cpp
#include <iostream>
#include <string>
using namespace std;

int main() {
    string name;
    cout << "Bitte gib deinen Namen ein: ";
    getline(cin, name);  // Eingabe eines gesamten Strings
    cout << "Hallo, " << name << "!" << endl;
    return 0;
}
```

#### Erklärung:
- Die Funktion `getline(cin, name)` liest die gesamte Zeile vom Benutzer ein, einschließlich Leerzeichen.

## 5. C-Strings vs. `std::string`

In C++ gibt es zwei Hauptmethoden, mit Text zu arbeiten: **C-Strings** und **std::string**.

- **C-Strings**: Sind Arrays von `char`-Werten, die mit einem Nullzeichen (`\0`) enden. Sie sind weniger sicher und weniger flexibel.
- **std::string**: Eine klasse aus der Standardbibliothek, die viele nützliche Funktionen zum Arbeiten mit Text bietet.

Im Allgemeinen wird empfohlen, `std::string` zu verwenden, da es sicherer und einfacher zu handhaben ist.

## 6. Zusammenfassung

In diesem Tutorial haben wir die grundlegenden Konzepte von **Strings in C++** behandelt:

- Strings sind eine Sammlung von Zeichen.
- Es gibt zwei Hauptarten von Strings in C++: **C-Strings** und **std::string**.
- Mit `std::string` können Strings leicht manipuliert, bearbeitet und verglichen werden.
- Du kannst Eingaben von Benutzern als Strings erhalten und mit verschiedenen Methoden Strings bearbeiten.

## 7. Übung

1. Schreibe ein Programm, das den Namen des Benutzers einliest und dann begrüßt.
2. Erstelle eine Funktion, die überprüft, ob ein String ein Palindrom ist.
3. Schreibe ein Programm, das die Anzahl der Vorkommen eines bestimmten Zeichens in einem String zählt.

Viel Spaß beim Üben!

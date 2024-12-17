# Bedingungen in C++: Kontrollstrukturen

### Erklärung der Struktur:
1. **Einführung**
1. **Die `if`-Anweisung**: Einführung in die grundlegende Bedingung.
2. **Die `else`-Anweisung**: Erweiterung der `if`-Bedingung mit einer Alternative.
3. **Die `else if`-Anweisung**: Überprüfen mehrerer Bedingungen.
4. **Verschachtelte `if`-Anweisungen**: Komplexere Bedingungen mit verschachtelten `if`-Statements.
5. **Die `switch`-Anweisung**: Eine effiziente Methode zur Prüfung mehrerer Fälle.
6. **Die ternäre Bedingung**: Eine kompakte Form von `if-else`.
7. **Zusammenfassung**: Überblick über alle behandelten Kontrollstrukturen.
8. **Übung**: Aufgaben zur Anwendung der gelernten Konzepte.

## **Einführung**
In der Programmierung sind **Kontrollstrukturen** essenziell, um den Ablauf eines Programms zu steuern. Sie ermöglichen es, Entscheidungen basierend auf Bedingungen zu treffen und so unterschiedliche Verhaltensweisen zu definieren.

In diesem Tutorial werden die wichtigsten Kontrollstrukturen in C++ Schritt für Schritt erklärt. Zusätzlich gibt es praktische Beispiele und Anwendungen aus der Programmierpraxis, die zeigen, **wozu** du die Konzepte benötigst.

---

## **1. Die `if`-Anweisung**

Die `if`-Anweisung ist die einfachste Möglichkeit, Bedingungen zu prüfen. Sie führt einen Block von Code **nur dann** aus, wenn die Bedingung wahr (`true`) ist.

### **Praxisbeispiel: Altersprüfung**

```cpp
#include <iostream>
using namespace std;

int main() {
    int alter;

    cout << "Gib dein Alter ein: ";
    cin >> alter;

    if (alter >= 18) {
        cout << "Du bist volljährig." << endl;
    }

    return 0;
}
```

### **Erklärung:**
- Die Bedingung `alter >= 18` prüft, ob der Benutzer volljährig ist.
- Wenn die Bedingung erfüllt ist, wird die Nachricht ausgegeben.

**Wozu braucht man das?**  
- Um Benutzereingaben zu validieren (z.B. Altersfreigaben für Inhalte, Anmeldungen oder Spiele).
- Um bestimmte Funktionen nur für bestimmte Werte freizuschalten.

---

## **2. Die `else`-Anweisung**

Mit der `else`-Anweisung kannst du festlegen, was passiert, wenn die `if`-Bedingung **nicht** erfüllt ist.

### **Praxisbeispiel: Zugangskontrolle**

```cpp
#include <iostream>
using namespace std;

int main() {
    int alter;

    cout << "Gib dein Alter ein: ";
    cin >> alter;

    if (alter >= 18) {
        cout << "Zugang erlaubt." << endl;
    } else {
        cout << "Zugang verweigert." << endl;
    }

    return 0;
}
```

### **Erklärung:**
- Wenn die Bedingung `alter >= 18` nicht erfüllt ist, wird der `else`-Block ausgeführt.

**Wozu braucht man das?**  
- Für Entscheidungsprozesse, die zwei mögliche Pfade haben, z.B. **erlauben oder verweigern**.

---

## **3. Die `else if`-Anweisung**

Mit der `else if`-Anweisung kannst du mehrere Bedingungen überprüfen.

### **Praxisbeispiel: Notensystem**

```cpp
#include <iostream>
using namespace std;

int main() {
    int punkte;

    cout << "Gib deine Punkte ein: ";
    cin >> punkte;

    if (punkte >= 90) {
        cout << "Note: Sehr gut" << endl;
    } else if (punkte >= 75) {
        cout << "Note: Gut" << endl;
    } else if (punkte >= 60) {
        cout << "Note: Befriedigend" << endl;
    } else {
        cout << "Note: Nicht bestanden" << endl;
    }

    return 0;
}
```

### **Erklärung:**
- Der Code prüft mehrere Abstufungen der Punktzahl und gibt die entsprechende Note aus.

**Wozu braucht man das?**  
- Für Systeme mit mehreren Entscheidungspfaden, z.B. Notenberechnung, Preiskategorien, Menüs.

---

## **4. Verschachtelte `if`-Anweisungen**

Manchmal muss man mehrere Bedingungen gleichzeitig prüfen. In solchen Fällen verschachtelt man `if`-Anweisungen.

### **Praxisbeispiel: Passworteingabe mit Benutzername**

```cpp
#include <iostream>
using namespace std;

int main() {
    string benutzername, passwort;

    cout << "Benutzername: ";
    cin >> benutzername;

    if (benutzername == "admin") {
        cout << "Passwort: ";
        cin >> passwort;

        if (passwort == "1234") {
            cout << "Zugang gewährt." << endl;
        } else {
            cout << "Falsches Passwort!" << endl;
        }
    } else {
        cout << "Unbekannter Benutzer." << endl;
    }

    return 0;
}
```

**Wozu braucht man das?**  
- Für komplexere Prüfungen, z.B. Benutzername **und** Passwort zusammen.

---

## **5. Die `switch`-Anweisung**

Die `switch`-Anweisung ist nützlich, wenn du eine Variable gegen mehrere **konkrete Werte** vergleichen willst.

### **Praxisbeispiel: Wochentagsanzeige**

```cpp
#include <iostream>
using namespace std;

int main() {
    int tag;

    cout << "Gib eine Zahl von 1 bis 7 ein: ";
    cin >> tag;

    switch (tag) {
        case 1: cout << "Montag"; break;
        case 2: cout << "Dienstag"; break;
        case 3: cout << "Mittwoch"; break;
        case 4: cout << "Donnerstag"; break;
        case 5: cout << "Freitag"; break;
        case 6: cout << "Samstag"; break;
        case 7: cout << "Sonntag"; break;
        default: cout << "Ungültiger Tag"; break;
    }

    return 0;
}
```

**Wozu braucht man das?**  
- Für Menüs oder Optionen, die **eine Auswahl** zwischen vielen festen Möglichkeiten bieten.

---

## **6. Die ternäre Bedingung**

Die ternäre Bedingung ist eine **kompakte Form** von `if-else`.

### **Praxisbeispiel: Maximalwert finden**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    int max = (a > b) ? a : b;

    cout << "Der größere Wert ist: " << max << endl;

    return 0;
}
```

**Wozu braucht man das?**  
- Für kurze Entscheidungen, z.B. Wertezuweisung basierend auf einer einfachen Bedingung.

---

## **7. Zusammenfassung**

- **`if`**: Führt Code aus, wenn eine Bedingung wahr ist.
- **`else`**: Führt Code aus, wenn die Bedingung **nicht** erfüllt ist.
- **`else if`**: Überprüft zusätzliche Bedingungen.
- **Verschachtelte `if`**: Kombiniert mehrere Prüfungen.
- **`switch`**: Prüft eine Variable gegen mehrere konkrete Werte.
- **Ternäre Bedingung**: Kurzform für einfache `if-else`.

---

## **8. Übung**

1. **Größte von drei Zahlen:**  
   Schreibe ein Programm, das drei Zahlen vergleicht und die größte ausgibt.

2. **Wochentagsanzeige:**  
   Verwende die `switch`-Anweisung, um den Wochentag basierend auf einer Zahl (1-7) auszugeben.

3. **Eintrittskontrolle:**  
   Erstelle ein Programm, das basierend auf dem Alter entscheidet, ob jemand "Kind", "Jugendlicher" oder "Erwachsener" ist.

---

Viel Erfolg beim Üben! 😊

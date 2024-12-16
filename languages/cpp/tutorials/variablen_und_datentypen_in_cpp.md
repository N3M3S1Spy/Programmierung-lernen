# Variablen und Datentypen in C++: Die Grundlagen

## Übersicht:
1. **Was sind Variablen?**: Erklärung, was Variablen sind und wie man sie verwendet.
2. **Welche Datentypen gibt es?**: Übersicht der wichtigsten Typen in C++.
3. **Was sind Modifizierer?**: Einführung in Begriffe wie `signed` und `unsigned`.
4. **Wie werden Variablen initialisiert?**: Verschiedene Möglichkeiten, einer Variablen einen Startwert zu geben.
5. **Was ist der Unterschied zwischen `float` und `double`?**: Vergleich der beiden Fließkomma-Datentypen.
6. **Zusammenfassung**: Die wichtigsten Punkte auf einen Blick.
7. **Übung**: Aufgaben, um das Gelernte anzuwenden.

---

## 1. Was sind Variablen?

Eine **Variable** ist wie ein Behälter, in dem du Daten speichern kannst, zum Beispiel Zahlen oder Zeichen. Damit der Computer weiß, welche Art von Daten in einer Variable gespeichert werden, muss man einen **Datentyp** angeben. Jede Variable hat außerdem einen **Namen**, damit du sie im Programm wiederfindest.

### So sieht die Deklaration einer Variable aus:

```cpp
Datentyp Variablenname;
```

- **Datentyp**: Gibt an, welche Art von Daten die Variable speichern kann (z. B. ganze Zahlen oder Fließkommazahlen).
- **Variablenname**: Ein selbstgewählter Name für die Variable.

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    int alter;        // Speichert eine ganze Zahl
    double gewicht;   // Speichert eine Zahl mit Nachkommastellen
    char buchstabe;   // Speichert ein einzelnes Zeichen

    // Den Variablen Werte zuweisen
    alter = 25;
    gewicht = 72.5;
    buchstabe = 'A';

    // Werte ausgeben
    cout << "Alter: " << alter << endl;
    cout << "Gewicht: " << gewicht << endl;
    cout << "Buchstabe: " << buchstabe << endl;

    return 0;
}
```

**Was passiert hier?**  
- Drei Variablen werden erstellt und mit Werten gefüllt.
- Die Werte werden mit `cout` auf dem Bildschirm angezeigt.

---

## 2. Welche Datentypen gibt es?

In C++ gibt es viele Datentypen, die in Kategorien unterteilt sind:

### Grundlegende Datentypen:

1. **Ganze Zahlen**:
   - `int`: Speichert ganze Zahlen wie 0, -5 oder 42.
   - `short`: Kleinerer Ganzzahltyp (z. B. -32.768 bis 32.767).
   - `long`: Größerer Ganzzahltyp für größere Zahlen.
   - `long long`: Noch größerer Ganzzahltyp.

2. **Zahlen mit Nachkommastellen**:
   - `float`: Für Fließkommazahlen, z. B. 3.14.
   - `double`: Genauere Fließkommazahlen.
   - `long double`: Noch präziser als `double`.

3. **Zeichen**:
   - `char`: Speichert ein Zeichen, z. B. 'A' oder '1'.

4. **Wahrheitswerte**:
   - `bool`: Speichert entweder `true` (wahr) oder `false` (falsch).

---

## 3. Was sind Modifizierer?

**Modifizierer** verändern die Eigenschaften eines Datentyps, z. B. ob er nur positive Zahlen speichern kann. Hier einige wichtige:

- **signed**: Standardmäßig erlaubt (positive und negative Werte).
- **unsigned**: Nur für positive Werte.
- **long**: Macht den Datentyp größer (für größere Zahlen).

### Beispiel:

```cpp
#include <iostream>
using namespace std;

int main() {
    unsigned int positiveZahl = 10;
    int negativeZahl = -20;

    cout << "Positive Zahl: " << positiveZahl << endl;
    cout << "Negative Zahl: " << negativeZahl << endl;

    return 0;
}
```

---

## 4. Wie werden Variablen initialisiert?

Du kannst Variablen auf verschiedene Arten einen Wert geben:

1. **Direkt bei der Deklaration**:
   ```cpp
   int x = 10;
   ```

2. **Mit runden Klammern**:
   ```cpp
   int y(10);
   ```

3. **Mit geschweiften Klammern** (ab C++11):
   ```cpp
   int z{10};
   ```

---

## 5. Unterschied zwischen `float` und `double`

- **`float`**: Weniger genau, speichert etwa 7 Nachkommastellen.
- **`double`**: Höhere Genauigkeit, speichert etwa 15 Nachkommastellen.  
  Nutze `double`, wenn Präzision wichtig ist (z. B. bei wissenschaftlichen Berechnungen).

---

## 6. Zusammenfassung

- Eine **Variable** ist ein Speicherort mit einem Namen, der Daten speichern kann.
- Der **Datentyp** bestimmt, welche Art von Daten gespeichert wird (z. B. ganze Zahlen oder Zeichen).
- **Modifizierer** wie `unsigned` und `long` ändern die Eigenschaften eines Datentyps.
- Es gibt verschiedene Arten, Variablen zu initialisieren.
- Nutze `float` oder `double`, je nach Bedarf an Genauigkeit.

---

## 7. Übung

1. Deklariere Variablen für Alter, Gewicht und Körpergröße.  
2. Gib die Werte mit `cout` aus.  
3. Probiere, die Variablen auf unterschiedliche Arten zu initialisieren.  

**Viel Erfolg beim Programmieren!**

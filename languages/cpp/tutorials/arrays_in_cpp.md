# **Arrays in C++: Grundlagen und Anwendung**

---

## **Themenübersicht**

1. **Was ist ein Array?**  
   - Definition, Deklaration und Initialisierung von Arrays.  
2. **Arrays mit festen und variablen Größen**  
   - Statische Arrays (feste Größe zur Kompilierzeit).  
   - Dynamische Arrays (zur Laufzeit erstellt mit `new`).  
3. **Zugriff auf Array-Elemente**  
   - Verwendung von Indizes zum Zugriff auf Elemente.  
   - Schleifen zur Iteration durch Arrays.  
4. **Mehrdimensionale Arrays**  
   - Einführung in 2D-Arrays (Matrix).  
   - Zugriff auf mehrdimensionale Array-Elemente.  
5. **Array-Referenzen und Pointer**  
   - Zusammenhang zwischen Arrays und Zeigern.  
   - Zugriff auf Array-Elemente über Zeiger.  
6. **Zusammenfassung**  
   - Die wichtigsten Punkte zu Arrays in C++.  
7. **Übung**  
   - Praktische Aufgaben zur Festigung des Wissens.  

---

## **1. Was ist ein Array?**

Ein **Array** ist eine Datenstruktur, die mehrere Werte desselben Datentyps speichert. Die Elemente werden **nacheinander im Speicher** abgelegt und sind über einen **Index** zugänglich.

### **Deklaration und Initialisierung eines Arrays**  

**Syntax**:
```cpp
Typ Name[Größe];
```

- **Typ**: Datentyp der Elemente (z. B. `int`, `double`, `char`).
- **Name**: Name des Arrays.
- **Größe**: Anzahl der Elemente.

### **Beispiel**:
```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[5] = {1, 2, 3, 4, 5}; // Deklaration & Initialisierung
    cout << "Erstes Element: " << zahlen[0] << endl;
    cout << "Letztes Element: " << zahlen[4] << endl;

    return 0;
}
```
### **Erklärung**:
- `zahlen` ist ein Array mit 5 Elementen.  
- Die Indizes starten bei **0** (erstes Element) und enden bei **4** (letztes Element).  

---

## **2. Arrays mit festen und variablen Größen**

### **Statische Arrays**  
Die Größe eines **statischen Arrays** ist zur **Kompilierzeit** festgelegt.

**Beispiel**:
```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[3] = {10, 20, 30}; // Statisches Array mit 3 Elementen

    for (int i = 0; i < 3; i++) {
        cout << "Element " << i << ": " << zahlen[i] << endl;
    }
    return 0;
}
```

**Erklärung**:  
- Die Größe von `zahlen` (3 Elemente) ist zur Kompilierzeit bekannt.

---

### **Dynamische Arrays**  
Die Größe eines **dynamischen Arrays** wird zur **Laufzeit** festgelegt. Dafür verwenden wir den `new`-Operator.

**Beispiel**:
```cpp
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Gib die Anzahl der Elemente ein: ";
    cin >> n;

    int* zahlen = new int[n]; // Dynamisches Array

    // Initialisierung der Elemente
    for (int i = 0; i < n; i++) {
        zahlen[i] = i + 1;
    }

    // Ausgabe der Elemente
    for (int i = 0; i < n; i++) {
        cout << "Element " << i << ": " << zahlen[i] << endl;
    }

    delete[] zahlen; // Speicher freigeben
    return 0;
}
```

**Erklärung**:  
- `new` erstellt das Array zur Laufzeit.  
- `delete[]` gibt den reservierten Speicher frei.  

---

## **3. Zugriff auf Array-Elemente**

Arrays verwenden **Indizes**, um auf ihre Elemente zuzugreifen.

### **Beispiel**:
```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[5] = {10, 20, 30, 40, 50};

    // Zugriff mit Schleife
    for (int i = 0; i < 5; i++) {
        cout << "Element " << i << ": " << zahlen[i] << endl;
    }

    return 0;
}
```

**Erklärung**:  
- Der Index beginnt bei `0` und endet bei `Größe - 1`.  

---

## **4. Mehrdimensionale Arrays**

**Mehrdimensionale Arrays** erlauben die Speicherung von Arrays innerhalb von Arrays. Ein **2D-Array** (Matrix) ist ein Beispiel dafür.

### **Beispiel**:
```cpp
#include <iostream>
using namespace std;

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Element [" << i << "][" << j << "]: " << matrix[i][j] << endl;
        }
    }
    return 0;
}
```

**Erklärung**:  
- `matrix[2][3]` speichert 2 Zeilen und 3 Spalten.  
- Zugriff erfolgt mit zwei Indizes: `[Zeile][Spalte]`.

---

## **5. Array-Referenzen und Pointer**

Der **Name eines Arrays** ist ein **Zeiger** auf das erste Element des Arrays.

### **Beispiel**:
```cpp
#include <iostream>
using namespace std;

int main() {
    int zahlen[3] = {10, 20, 30};
    int* ptr = zahlen;  // Zeiger zeigt auf das erste Element

    cout << "Erstes Element: " << *ptr << endl;       // 10
    cout << "Zweites Element: " << *(ptr + 1) << endl; // 20

    return 0;
}
```

**Erklärung**:
- `ptr` zeigt auf das erste Element des Arrays.  
- Mit `*(ptr + 1)` greifen wir auf das zweite Element zu.  

---

## **6. Zusammenfassung**

- **Arrays** speichern mehrere Werte desselben Typs.
- **Statische Arrays** haben eine feste Größe zur Kompilierzeit.  
- **Dynamische Arrays** erlauben Flexibilität durch Speicherreservierung zur Laufzeit.  
- **Mehrdimensionale Arrays** ermöglichen komplexe Datenstrukturen wie Matrizen.  
- **Zeiger** und Arrays sind in C++ eng miteinander verbunden.  

---

## **7. Übung**

1. Erstelle ein Array, das die ersten **10 Fibonacci-Zahlen** speichert und ausgibt.  
2. Erstelle ein **2D-Array** (3x3 Matrix) und berechne die **Summe aller Elemente**.  
3. Verwende einen **Zeiger**, um auf die Elemente eines Arrays zuzugreifen und sie auszugeben.  

---

Mit diesen Grundlagen und Beispielen kannst du jetzt sicher mit Arrays in C++ arbeiten!

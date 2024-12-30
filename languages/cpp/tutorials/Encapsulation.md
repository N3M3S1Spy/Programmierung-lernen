## C++ Kapselung (Encapsulation)

### Kapselung

**Kapselung** bedeutet, dass "sensible" Daten vor dem direkten Zugriff durch Benutzer geschützt werden. Dies wird erreicht, indem Klassenvariablen/Attribute als `private` deklariert werden (d. h. sie können nicht direkt von außerhalb der Klasse aus aufgerufen werden). Wenn es dennoch notwendig ist, den Wert eines privaten Members zu lesen oder zu verändern, werden dafür öffentliche "Getter"- und "Setter"-Methoden bereitgestellt.

### Zugriff auf private Member

Um auf ein privates Attribut zuzugreifen, werden öffentliche "Getter"- und "Setter"-Methoden verwendet:

### Beispiel:

```c++
#include <iostream>
using namespace std;

class Mitarbeiter {
private:
    // Privates Attribut
    int gehalt;

public:
    // Setter-Methode
    void setGehalt(int s) {
        gehalt = s;
    }
    // Getter-Methode
    int getGehalt() {
        return gehalt;
    }
};

int main() {
    Mitarbeiter meinObjekt;
    meinObjekt.setGehalt(50000);
    cout << meinObjekt.getGehalt() << endl; // Ausgabe: 50000
    return 0;
}
```

**Erläuterung des Beispiels:**

Das Attribut `gehalt` ist `private` und somit nur innerhalb der Klasse zugänglich.

Die öffentliche Methode `setGehalt()` nimmt einen Parameter (`s`) entgegen und weist ihn dem Attribut `gehalt` zu (`gehalt = s`).

Die öffentliche Methode `getGehalt()` gibt den Wert des privaten Attributs `gehalt` zurück.

In `main()` erstellen wir ein Objekt der Klasse `Mitarbeiter`. Nun können wir die Methode `setGehalt()` verwenden, um den Wert des privaten Attributs auf `50000` zu setzen. Anschließend rufen wir die Methode `getGehalt()` auf dem Objekt auf, um den Wert abzurufen und auszugeben.

### Warum Kapselung?

*   Es gilt als gute Programmierpraxis, Klassenattribute so oft wie möglich als `private` zu deklarieren. Kapselung ermöglicht eine bessere Kontrolle über die Daten, da Änderungen an einem Teil des Codes keine Auswirkungen auf andere Teile haben. Dies minimiert das Risiko von unbeabsichtigten Seiteneffekten und erhöht die Wartbarkeit des Codes.
*   Erhöhte Datensicherheit: Durch die Kapselung werden die Daten vor unbefugtem Zugriff geschützt. Die Verwendung von Getter- und Setter-Methoden ermöglicht es, den Zugriff auf die Daten zu kontrollieren und beispielsweise Validierungen durchzuführen, bevor ein Wert zugewiesen wird.

**Zusätzliche Vorteile der Kapselung:**

*   **Flexibilität:** Die interne Implementierung einer Klasse kann geändert werden, ohne dass der Code, der die Klasse verwendet, angepasst werden muss, solange die öffentlichen Schnittstellen (Getter und Setter) gleich bleiben.
*   **Wiederverwendbarkeit:** Gekapselter Code ist leichter wiederverwendbar, da er unabhängig von anderen Teilen des Programms ist.
*   **Abstraktion:** Kapselung ermöglicht es, die Komplexität der internen Implementierung einer Klasse zu verbergen und dem Benutzer nur die notwendigen Informationen und Operationen über die öffentliche Schnittstelle zur Verfügung zu stellen.

**Beispiel mit Validierung im Setter:**

```c++
#include <iostream>
using namespace std;

class Mitarbeiter {
private:
    int gehalt;

public:
    void setGehalt(int s) {
        if (s >= 0) { // Validierung: Gehalt darf nicht negativ sein
            gehalt = s;
        } else {
            cout << "Ungültiges Gehalt!\n";
        }
    }

    int getGehalt() {
        return gehalt;
    }
};

int main() {
    Mitarbeiter meinObjekt;
    meinObjekt.setGehalt(-1000); // Ausgabe: Ungültiges Gehalt!
    meinObjekt.setGehalt(60000);
    cout << meinObjekt.getGehalt() << endl; // Ausgabe: 60000
    return 0;
}
```

Dieses Beispiel zeigt, wie man im Setter eine Validierung einbauen kann, um ungültige Werte zu verhindern. Dies ist ein wichtiger Aspekt der Kapselung. Durch die Kontrolle des Zugriffs über Methoden können die Datenintegrität und die Korrektheit des Programms sichergestellt werden.

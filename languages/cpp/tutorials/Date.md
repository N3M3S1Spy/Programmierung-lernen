## C++ Datum und Zeit

### Datum und Zeit

Die `<ctime>`-Bibliothek ermöglicht die Arbeit mit Datum und Zeit in C++.

Um sie zu verwenden, musst du die Headerdatei `<ctime>` einbinden:

### Beispiel:

```c++
#include <ctime> // Die ctime-Bibliothek einbinden
#include <iostream>
#include <string>
#include <iomanip> // Für setfill und setw
using namespace std;
```

### Aktuelles Datum und Uhrzeit anzeigen

Die `<ctime>`-Bibliothek bietet verschiedene Funktionen zum Messen von Datum und Zeit.

Die Funktion `time()` liefert uns einen **Zeitstempel** (Timestamp), der das aktuelle Datum und die aktuelle Uhrzeit repräsentiert. Mit der Funktion `ctime()` können wir das durch einen Zeitstempel dargestellte Datum und die Uhrzeit anzeigen:

### Beispiel:

Das aktuelle Datum anzeigen:

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Den Zeitstempel für das aktuelle Datum und die aktuelle Uhrzeit abrufen
    time_t zeitstempel;
    time(&zeitstempel);

    // Das durch den Zeitstempel dargestellte Datum und die Uhrzeit anzeigen
    cout << ctime(&zeitstempel);
    return 0;
}
```

> **Zwei Möglichkeiten zur Verwendung der Funktion `time()`:**
>
> Die Funktion `time()` schreibt einen Zeitstempel an die durch den Parameter angegebene Speicherstelle, gibt aber auch den Wert des Zeitstempels zurück.
>
> Eine alternative Möglichkeit zur Verwendung der Funktion `time()` ist die Übergabe eines `NULL`-Pointers und die Verwendung des Rückgabewerts:

```c++
time_t zeitstempel = time(NULL);
```

### Datentypen

Es gibt zwei verschiedene Datentypen zum Speichern von Datum und Uhrzeit: `time_t` für **Zeitstempel** und `struct tm` für **Datum- und Zeitstrukturen**.

**Zeitstempel** stellen einen Zeitpunkt als einzelne Zahl dar, was Berechnungen für den Computer erleichtert.

**Datum- und Zeitstrukturen** sind Strukturen, die verschiedene Komponenten des Datums und der Uhrzeit als Member darstellen. Dies erleichtert uns die Angabe von Datumsangaben. Datum- und Zeitstrukturen haben die folgenden Member:

*   `tm_sec` – Die Sekunden innerhalb einer Minute
*   `tm_min` – Die Minuten innerhalb einer Stunde
*   `tm_hour` – Die Stunde innerhalb eines Tages (von 0 bis 23)
*   `tm_mday` – Der Tag des Monats
*   `tm_mon` – Der Monat (von 0 bis 11, beginnend mit Januar)
*   `tm_year` – Die Anzahl der Jahre seit 1900
*   `tm_wday` – Der Wochentag (von 0 bis 6, beginnend mit Sonntag)
*   `tm_yday` – Der Tag des Jahres (von 0 bis 365, wobei 0 der 1. Januar ist)
*   `tm_isdst` – Positiv, wenn die Sommerzeit gilt, null, wenn sie nicht gilt, und negativ, wenn unbekannt

> Beachte immer, wie die Datumskomponenten dargestellt werden:
>
> *   Stunden werden im 24-Stunden-Format dargestellt. 23 Uhr würde als 23 dargestellt.
> *   Die Monate gehen von 0 bis 11. Dezember würde beispielsweise als 11 statt 12 dargestellt.
> *   Jahre werden relativ zum Jahr 1900 dargestellt. Das Jahr 2024 würde als 124 dargestellt, da seit 1900 124 Jahre vergangen sind.

### Zeitstempel erstellen

Die Funktion `time()` kann nur einen Zeitstempel für das aktuelle Datum erstellen, aber wir können mit der Funktion `mktime()` einen Zeitstempel für jedes beliebige Datum erstellen.

Die Funktion `mktime()` wandelt eine Datum- und Zeitstruktur in einen Zeitstempel um.

### Beispiel:

Einen Zeitstempel mit der Funktion `mktime()` erstellen:

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    struct tm datumZeit;
    time_t zeitstempel;

    datumZeit.tm_year = 2024 - 1900; // Anzahl der Jahre seit 1900
    datumZeit.tm_mon = 0;           // Anzahl der Monate seit Januar (0 = Januar)
    datumZeit.tm_mday = 17;
    datumZeit.tm_hour = 12;
    datumZeit.tm_min = 30;
    datumZeit.tm_sec = 1;
    datumZeit.tm_isdst = -1; // Sommerzeit muss angegeben werden (-1: Einstellung des Computers verwenden)

    zeitstempel = mktime(&datumZeit);

    cout << ctime(&zeitstempel);
    return 0;
}
```

> **Hinweis:** Die Funktion `mktime()` benötigt Werte für die Member `tm_year`, `tm_mon`, `tm_mday`, `tm_hour`, `tm_min`, `tm_sec` und `tm_isdst`.

### Datum- und Zeitstrukturen erstellen

Die Funktion `mktime()` füllt auch die Member `tm_wday` und `tm_yday` der Datum- und Zeitstruktur mit den korrekten Werten aus, wodurch die Struktur vervollständigt und ein gültiges Datum und eine gültige Uhrzeit erzeugt werden. Sie kann beispielsweise verwendet werden, um den Wochentag eines bestimmten Datums zu ermitteln:

### Beispiel:

Den Wochentag eines bestimmten Datums ermitteln:

```c++
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

int main() {
    // Die Datum- und Zeitstruktur erstellen und mktime verwenden, um die fehlenden Member auszufüllen
    struct tm datumZeit;
    datumZeit.tm_year = 2024 - 1900; // Anzahl der Jahre seit 1900
    datumZeit.tm_mon = 0;           // 0 ist Januar
    datumZeit.tm_mday = 17;
    datumZeit.tm_hour = 0;
    datumZeit.tm_min = 0;
    datumZeit.tm_sec = 0;
    datumZeit.tm_isdst = -1;
    mktime(&datumZeit);

    string wochentage[] = {"Sonntag", "Montag", "Dienstag", "Mittwoch", "Donnerstag", "Freitag", "Samstag"};

    cout << "Das Datum ist ein " << wochentage[datumZeit.tm_wday] << "\n";
    return 0;
}
```

Die Funktionen `localtime()` und `gmtime()` können Zeitstempel in Datum- und Zeitstrukturen umwandeln.

Die Funktion `localtime()` gibt einen Pointer auf eine Struktur zurück, die die Zeit in der Zeitzone des Computers darstellt.

Die Funktion `gmtime()` gibt einen Pointer auf eine Struktur zurück, die die Zeit in der GMT-Zeitzone darstellt.

Diese Funktionen geben einen **Pointer** auf eine Datum- und Zeitstruktur zurück. Um sicherzustellen, dass sich ihr Wert nicht unerwartet ändert, sollten wir eine Kopie erstellen, indem wir den Pointer dereferenzieren.

### Beispiel:

Eine Datum- und Zeitstruktur abrufen und die aktuelle Stunde ausgeben:

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t zeitstempel;
    time(&zeitstempel);
    struct tm datumZeit = *localtime(&zeitstempel); // Dereferenzierung für Kopie

    cout << datumZeit.tm_hour << "\n";
    return 0;
}
```

### Daten anzeigen

Bisher haben wir die Funktion `ctime()` verwendet, um das in einem Zeitstempel enthaltene Datum anzuzeigen. Um Daten aus einer Datum- und Zeitstruktur anzuzeigen, können wir die Funktion `asctime()` verwenden.

### Beispiel:

Das durch eine Datum- und Zeitstruktur dargestellte Datum anzeigen:

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t zeitstempel;
    time(&zeitstempel);
    struct tm datumZeit = *localtime(&zeitstempel);

    cout << asctime(&datumZeit);
    return 0;
}
```

> **Hinweis:** Die Funktion `asctime()` korrigiert keine ungültigen Datumsangaben. Wenn du beispielsweise den Tag des Monats auf 32 setzt, wird 32 angezeigt. Die Funktion `mktime()` kann solche Fehler korrigieren:

### Beispiel (Korrigieren eines Datums):

Ein Datum korrigieren, bevor es angezeigt wird:

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    // Die Datum- und Zeitstruktur erstellen und mktime verwenden, um Fehler zu korrigieren
    struct tm datumZeit;
    datumZeit.tm_year = 2022 - 1900; // Anzahl der Jahre seit 1900
    datumZeit.tm_mon = 0;           // 0 ist Januar
    datumZeit.tm_mday = 32;          // Ungültiger Tag (Januar hat nur 31 Tage)
    datumZeit.tm_hour = 0;
    datumZeit.tm_min = 0;
    datumZeit.tm_sec = 0;
    datumZeit.tm_isdst = -1;
    mktime(&datumZeit); // Korrigiert das Datum

    cout << asctime(&datumZeit); // Gibt das korrigierte Datum aus
    return 0;
}

// Ausgabe (ungefähr):
// Tue Feb  1 00:00:00 2022
```

In diesem Beispiel korrigiert `mktime()` den ungültigen Tag 32 im Januar automatisch zu 1. Februar.

### Daten formatiert anzeigen (`strftime()`)

Die Funktionen `ctime()` und `asctime()` ermöglichen es uns, das Datum anzuzeigen, aber sie erlauben uns nicht, das Anzeigeformat auszuwählen.

Um das Anzeigeformat eines Datums auszuwählen, können wir die Funktion `strftime()` verwenden.

### Beispiel:

Das aktuelle Datum auf verschiedene Arten darstellen:

```c++
#include <iostream>
#include <ctime>
#include <iomanip> // Für setfill und setw
using namespace std;

int main() {
    time_t zeitstempel = time(NULL);
    struct tm datumZeit = *localtime(&zeitstempel);

    char ausgabe[50];

    strftime(ausgabe, 50, "%B %e, %Y", &datumZeit); // Monat (vollständig) Tag, Jahr
    cout << ausgabe << "\n";

    strftime(ausgabe, 50, "%I:%M:%S %p", &datumZeit); // Stunde:Minute:Sekunde AM/PM
    cout << ausgabe << "\n";

    strftime(ausgabe, 50, "%m/%d/%y", &datumZeit); // Monat/Tag/Jahr (2-stellig)
    cout << ausgabe << "\n";

    strftime(ausgabe, 50, "%a %b %e %H:%M:%S %Y", &datumZeit); // Wochentag Monat Tag Stunde:Minute:Sekunde Jahr
    cout << ausgabe << "\n";

    strftime(ausgabe, 50, "%d.%m.%Y %H:%M", &datumZeit); // Tag.Monat.Jahr Stunde:Minute (Deutsches Format)
    cout << ausgabe << "\n";

    return 0;
}

// Mögliche Ausgabe (abhängig von der aktuellen Zeit):
// January 17, 2024
// 12:30:01 PM
// 01/17/24
// Wed Jan 17 12:30:01 2024
// 17.01.2024 12:30
```

Die Funktion `strftime()` formatiert ein Datum und schreibt es als C-String in ein `char`-Array. Sie hat vier Parameter:

1.  Der erste Parameter zeigt auf das `char`-Array, in das das formatierte Datum geschrieben wird.
2.  Der zweite Parameter gibt den verfügbaren Speicherplatz im Array an.
3.  Der dritte Parameter ermöglicht es uns, das Format des Datums mithilfe von Formatierungszeichen auszuwählen.
4.  Der letzte Parameter ist ein Pointer auf die Datum- und Zeitstruktur, die das anzuzeigende Datum enthält.

Die folgende Tabelle enthält einige nützliche Formatierungszeichen:

| Formatierungszeichen | Beschreibung                                     | Beispiel   |
|----------------------|-------------------------------------------------|-----------|
| `%a`                 | Kurze Darstellung des Wochentags                | Mi        |
| `%b`                 | Kurze Darstellung des Monatsnamens               | Jan       |
| `%B`                 | Vollständige Darstellung des Monatsnamens         | Januar    |
| `%d`                 | Tag des Monats mit führender Null                 | 09        |
| `%e`                 | Tag des Monats mit führenden Leerzeichen         | 9         |
| `%H`                 | 24-Stunden-Format einer Stunde                   | 14        |
| `%I`                 | 12-Stunden-Format einer Stunde                   | 02        |
| `%M`                 | Minuten innerhalb einer Stunde                     | 30        |
| `%p`                 | AM oder PM                                      | PM        |
| `%S`                 | Sekunden innerhalb einer Minute                    | 01        |
| `%y`                 | 2-stellige Jahresdarstellung                     | 24        |
| `%Y`                 | 4-stellige Jahresdarstellung                     | 2024      |
| `%m`                 | Monat als Zahl mit führender Null (01-12)         | 01, 12    |
| `%d`                 | Tag des Monats als Zahl mit führender Null (01-31) | 01, 31    |

### Zeit messen

Es gibt zwei verschiedene Funktionen, mit denen Zeitunterschiede gemessen werden können.

Die Funktion `difftime()` misst die Anzahl der Sekunden, die zwischen zwei verschiedenen Zeitstempeln vergangen sind. Dies ist nützlich, um Zeitunterschiede zwischen Datumsangaben zu messen.

### Beispiel:

Den Zeitunterschied zwischen zwei Zeitstempeln messen:

```c++
#include <iostream>
#include <ctime>
using namespace std;

int main() {
    time_t jetzt;
    time_t naechstesJahr;
    struct tm datumZeit;

    jetzt = time(NULL);
    datumZeit = *localtime(&jetzt);
    datumZeit.tm_year = datumZeit.tm_year + 1; // Nächstes Jahr
    datumZeit.tm_mon = 0; // Januar
    datumZeit.tm_mday = 1;
    datumZeit.tm_hour = 0;
    datumZeit.tm_min = 0;
    datumZeit.tm_sec = 0;
    datumZeit.tm_isdst = -1;
    naechstesJahr = mktime(&datumZeit);

    double diff = difftime(naechstesJahr, jetzt); // difftime gibt double zurück

    cout << diff << " Sekunden bis zum nächsten Jahr\n";
    return 0;
}
```

Die Funktion `clock()` ist nützlich, um kurze Zeitintervalle während der Programmausführung zu messen. Sie ist genauer als die Funktion `difftime()`.

Jeder Aufruf der Funktion `clock()` gibt einen speziellen Zeitstempel zurück, der in Taktzyklen (einer Zeiteinheit, die davon abhängt, wie die Bibliothek implementiert wurde) gemessen wird und den Datentyp `clock_t` hat. Um einen Zeitunterschied zu messen, speichere einen Zeitstempel zu zwei verschiedenen Zeitpunkten und subtrahiere sie dann. Der Zeitunterschied wird in Taktzyklen gemessen, aber du kannst ihn in Sekunden umwandeln, indem du ihn durch die Konstante `CLOCKS_PER_SEC` dividierst.

### Beispiel:

Messen, wie lange die Programmausführung dauert:

```c++
#include <iostream>
#include <ctime>
#include <iomanip> // Für setprecision
using namespace std;

int main() {
    clock_t start = clock();
    int k = 0;
    for (int i = 0; i < 100000000; i++) { // Erhöht die Anzahl der Iterationen für eine messbare Zeit
        k += i;
    }
    clock_t dauer = clock() - start;

    // Verwende setprecision, um mehr Nachkommastellen anzuzeigen
    cout << "Dauer: " << fixed << setprecision(6) << (double)dauer / CLOCKS_PER_SEC << " Sekunden\n";
    return 0;
}
```

> **Hinweis:** Stelle sicher, dass du den Wert vor der Division in `float` oder `double` castest, da es sonst zu einer Integer-Division kommen kann, wodurch der Nachkommateil abgeschnitten würde. Die Verwendung von `fixed` und `setprecision` aus `<iomanip>` ermöglicht eine genauere Ausgabe der gemessenen Zeit. Ich habe auch die Anzahl der

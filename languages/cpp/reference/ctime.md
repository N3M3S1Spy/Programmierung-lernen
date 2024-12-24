# C++ ctime-Bibliothek

Die `<ctime>`-Bibliothek bietet Funktionen zur Handhabung von Datum und Zeit. Sie stellt Möglichkeiten zur Verfügung, die aktuelle Uhrzeit zu erhalten, Zeiträume zu messen oder Datums- und Zeitinformationen zu formatieren.

---

## Hauptmerkmale

- **Zugriff auf die Systemzeit:** Funktionen, um die aktuelle Zeit und das Datum zu erhalten.
- **Formatieren und Analysieren:** Umwandlung von Zeitdaten in lesbare Zeichenketten oder umgekehrt.
- **Zeitraum-Berechnung:** Berechnung von Zeitunterschieden und Dauer.

---

## Enthaltene Typen und Funktionen

### Typen

| Typ         | Beschreibung                                                |
|-------------|-------------------------------------------------------------|
| `time_t`    | Definiert einen Datentyp, der die Zeit als Anzahl der Sekunden seit dem 1. Januar 1970 darstellt (UNIX-Epoche). |
| `tm`        | Eine Struktur, die die zerlegte Zeit darstellt (Jahr, Monat, Tag, Stunde, Minute, Sekunde usw.). |

---

### Funktionen

#### Aktuelle Zeit abrufen

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `time(time_t* timer)`    | Gibt die aktuelle Zeit als `time_t`-Wert zurück. | `time_t now = time(nullptr);`           |
| `clock()`                | Gibt die Prozessorzeit in Taktzyklen zurück.     | `clock_t cycles = clock();`              |

#### Zeitformatierung und Umwandlung

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `ctime(const time_t* t)` | Wandelt eine `time_t`-Zeit in eine lesbare Zeichenkette um. | `ctime(&now);`                    |
| `gmtime(const time_t* t)`| Zerlegt `time_t` in UTC-Zeit (Coordinated Universal Time). | `gmtime(&now);`                   |
| `localtime(const time_t* t)` | Zerlegt `time_t` in lokale Zeit.             | `localtime(&now);`                 |
| `strftime()`             | Formatiert die Zeit als Zeichenkette basierend auf einem Format. | `strftime(buffer, size, "%Y-%m-%d", tm);` |

#### Zeitdifferenzen berechnen

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `difftime(time_t end, time_t start)` | Gibt die Differenz zwischen zwei Zeitpunkten in Sekunden zurück. | `difftime(end, start);`         |

---

## Beispiele

### Beispiel 1: Aktuelle Zeit abrufen und ausgeben
```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t now = time(nullptr); // Aktuelle Zeit in Sekunden seit der Epoche
    std::cout << "Aktuelle Zeit: " << ctime(&now); // In lesbarer Form

    return 0;
}
```

### Beispiel 2: Zeit formatieren
```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t now = time(nullptr);
    tm* localTime = localtime(&now);

    char buffer[80];
    strftime(buffer, sizeof(buffer), "%d.%m.%Y %H:%M:%S", localTime);
    std::cout << "Formatierte Zeit: " << buffer << std::endl;

    return 0;
}
```

### Beispiel 3: Zeitdifferenz berechnen
```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t start = time(nullptr);

    // Simulierte Verzögerung
    for (int i = 0; i < 100000000; ++i);

    time_t end = time(nullptr);
    double seconds = difftime(end, start);

    std::cout << "Verstrichene Zeit: " << seconds << " Sekunden" << std::endl;

    return 0;
}
```

### Beispiel 4: UTC und lokale Zeit
```cpp
#include <iostream>
#include <ctime>

int main() {
    time_t now = time(nullptr);

    tm* utcTime = gmtime(&now);
    std::cout << "UTC-Zeit: " << asctime(utcTime);

    tm* localTime = localtime(&now);
    std::cout << "Lokale Zeit: " << asctime(localTime);

    return 0;
}
```

---

## Nützliche Hinweise

1. **Zeitzonen beachten:** Funktionen wie `localtime` berücksichtigen die Zeitzone des Systems.
2. **Sicherheitsrisiken vermeiden:** Verwenden Sie die Thread-sicheren Alternativen wie `gmtime_r` und `localtime_r`, falls verfügbar.
3. **Lesbare Ausgabe:** Verwenden Sie `strftime`, um benutzerdefinierte Zeit- und Datumsformate zu erzeugen.

---

## Weiterführende Informationen

- [cppreference.com - ctime](https://en.cppreference.com/w/cpp/header/ctime)

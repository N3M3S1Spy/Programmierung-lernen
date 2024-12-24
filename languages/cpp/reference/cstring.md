# C++ cstring-Bibliothek

Die `<cstring>`-Bibliothek bietet Funktionen für die Manipulation von C-Strings, also nullterminierten Zeichenketten (`char`-Arrays). Diese Funktionen sind aus der C-Standardbibliothek übernommen und in C++ weiterhin verfügbar.

---

## Hauptmerkmale

- **Arbeiten mit nullterminierten Zeichenketten:** Funktionen zum Kopieren, Vergleichen und Modifizieren von C-Strings.
- **Direkte Arbeit auf Speicherebene:** Ermöglicht effiziente Operationen, ist jedoch weniger sicher als `std::string`.
- **Erfordert Vorsicht:** Benutzer müssen auf Puffergrößen und Nullterminierung achten, um Fehler zu vermeiden.

---

## Enthaltene Funktionen

### Kopieren und Anhängen

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `strcpy(dest, src)`      | Kopiert den Inhalt von `src` nach `dest`.        | `strcpy(dest, "Hallo");`                 |
| `strncpy(dest, src, n)`  | Kopiert höchstens `n` Zeichen von `src` nach `dest`. | `strncpy(dest, "Hallo", 3);`            |
| `strcat(dest, src)`      | Hängt `src` an `dest` an.                        | `strcat(dest, " Welt");`                 |
| `strncat(dest, src, n)`  | Hängt höchstens `n` Zeichen von `src` an `dest` an. | `strncat(dest, "!", 1);`               |

---

### Vergleich

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `strcmp(str1, str2)`     | Vergleicht zwei Zeichenketten lexikografisch.    | `strcmp("abc", "def");`                  |
| `strncmp(str1, str2, n)` | Vergleicht höchstens die ersten `n` Zeichen.     | `strncmp("abc", "abd", 2);`              |

---

### Suche und Analyse

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `strlen(str)`            | Gibt die Länge eines C-Strings zurück.           | `strlen("Hallo");`                       |
| `strchr(str, c)`         | Sucht das erste Auftreten eines Zeichens `c`.    | `strchr("Hallo", 'l');`                  |
| `strrchr(str, c)`        | Sucht das letzte Auftreten eines Zeichens `c`.   | `strrchr("Hallo", 'l');`                 |
| `strstr(haystack, needle)` | Sucht den ersten Teilstring `needle` in `haystack`. | `strstr("Hallo Welt", "Welt");`       |

---

### Speicherfunktionen

| Funktion                 | Beschreibung                                      | Beispiel                                   |
|--------------------------|--------------------------------------------------|------------------------------------------|
| `memcpy(dest, src, n)`   | Kopiert `n` Bytes von `src` nach `dest`.         | `memcpy(dest, src, 10);`                 |
| `memmove(dest, src, n)`  | Kopiert `n` Bytes von `src` nach `dest`, auch bei überlappenden Bereichen. | `memmove(dest, src, 10);`      |
| `memcmp(ptr1, ptr2, n)`  | Vergleicht `n` Bytes aus zwei Speicherbereichen. | `memcmp(ptr1, ptr2, 5);`                 |
| `memset(ptr, c, n)`      | Setzt `n` Bytes eines Speicherbereichs auf den Wert `c`. | `memset(arr, 0, sizeof(arr));`      |

---

## Beispiele

### Beispiel 1: Grundlegende Operationen
```cpp
#include <iostream>
#include <cstring>

int main() {
    char str1[20] = "Hallo";
    char str2[20] = "Welt";

    strcat(str1, " ");
    strcat(str1, str2);

    std::cout << "Kombinierte Zeichenkette: " << str1 << std::endl;
    std::cout << "Länge: " << strlen(str1) << std::endl;

    return 0;
}
```

### Beispiel 2: Zeichen suchen
```cpp
#include <iostream>
#include <cstring>

int main() {
    const char* str = "Programmierung in C++";
    char* pos = strchr(str, 'C');

    if (pos) {
        std::cout << "Erstes Auftreten von 'C': " << pos - str << std::endl;
    }

    return 0;
}
```

### Beispiel 3: Vergleich und Speicher
```cpp
#include <iostream>
#include <cstring>

int main() {
    char str1[] = "abc";
    char str2[] = "abd";

    if (strncmp(str1, str2, 2) == 0) {
        std::cout << "Die ersten zwei Zeichen sind gleich." << std::endl;
    }

    char buffer[10];
    memset(buffer, '*', sizeof(buffer) - 1);
    buffer[9] = '\0';

    std::cout << "Buffer-Inhalt: " << buffer << std::endl;

    return 0;
}
```

---

## Wichtige Hinweise

1. **Nullterminierung beachten:** Funktionen wie `strcpy` und `strcat` setzen voraus, dass die Zielzeichenkette genügend Speicherplatz hat und korrekt nullterminiert ist.
2. **Sicherheitsrisiken vermeiden:** Es wird empfohlen, die sichereren Alternativen wie `strncpy` oder `strncat` zu verwenden, um Pufferüberläufe zu verhindern.
3. **`std::string` bevorzugen:** In modernen C++-Programmen sollte `std::string` bevorzugt werden, da es sicherer und einfacher zu verwenden ist.

---

## Weiterführende Informationen

- [cppreference.com - cstring](https://en.cppreference.com/w/cpp/header/cstring)

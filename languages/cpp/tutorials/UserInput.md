## C++ Benutzereingabe

Du hast bereits gelernt, dass `cout` verwendet wird, um Werte auszugeben (zu drucken). Jetzt werden wir `cin` verwenden, um Benutzereingaben zu erhalten.

`cin` ist eine vordefinierte Variable, die Daten von der Tastatur mit dem Extraktionsoperator (`>>`) liest.

Im folgenden Beispiel kann der Benutzer eine Zahl eingeben, die in der Variablen `x` gespeichert wird. Dann drucken wir den Wert von `x`:

### Beispiel:

```c++
int x;
cout << "Gib eine Zahl ein: "; // Gib eine Zahl ein und drücke Enter
cin >> x; // Holt die Benutzereingabe von der Tastatur
cout << "Deine Zahl ist: " << x; // Zeigt den eingegebenen Wert an
```

>   **Gut zu wissen:**
>
>   `cout` wird als "see-out" ausgesprochen. Wird für die **Ausgabe** verwendet und benutzt den Einfügeoperator (`<<`).
>
>   `cin` wird als "see-in" ausgesprochen. Wird für die **Eingabe** verwendet und benutzt den Extraktionsoperator (`>>`).

## Erstellen eines einfachen Rechners

In diesem Beispiel muss der Benutzer zwei Zahlen eingeben. Dann drucken wir die Summe aus, indem wir die beiden Zahlen berechnen (addieren):

### Beispiel:

```c++
int x, y;
int summe;
cout << "Gib eine Zahl ein: ";
cin >> x;
cout << "Gib eine weitere Zahl ein: ";
cin >> y;
summe = x + y;
cout << "Die Summe ist: " << summe;
```

Das war's! Du hast gerade einen einfachen Taschenrechner gebaut!

# C++ Benutzereingabe
Sie haben bereits gelernt, dass cout verwendet wird, um Werte auszugeben (zu drucken). Jetzt werden wir `cin` verwenden, um Benutzereingaben zu erhalten. 

`cin` ist eine vordefinierte Variable, die Daten von der Tastatur mit dem Extraktionsoperator (`>>`) liest. 

Im folgenden Beispiel kann der Benutzer eine Zahl eingeben, die in der Variablen `x` gespeichert wird. Dann drucken wir den Wert von `x`:
### Beispiel:
```cpp
int x; 
cout << "Type a number: "; // Type a number and press enter
cin >> x; // Get user input from the keyboard
cout << "Your number is: " << x; // Display the input value 
```

> **Gut zu wissen**
> 
> `cout` wird als "see-out" ausgesprochen. Wird für die **Ausgabe** verwendet und benutzt den Einfügeoperator (`<<`)
>
> `cin` wird als "see-in" ausgesprochen. Wird für die **Eingabe** verwendet und benutzt den Extraktionsoperator (`>>`)

## Erstellen eines einfachen Rechners
In diesem Beispiel muss der Benutzer zwei Zahlen eingeben. Dann drucken wir die Summe aus, indem wir die beiden Zahlen berechnen (addieren):
### Beispiel:
```cpp
int x, y;
int sum;
cout << "Type a number: ";
cin >> x;
cout << "Type another number: ";
cin >> y;
sum = x + y;
cout << "Sum is: " << sum; 
```

Das war's! Du hast gerade einen einfachen Taschenrechner gebaut!

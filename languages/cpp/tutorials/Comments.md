# C++ Kommentare
Kommentare können verwendet werden, um C++-Code zu erklären und ihn besser lesbar zu machen. Sie können auch verwendet werden, um die Ausführung zu verhindern, wenn alternativer Code getestet wird. Kommentare können einzeilig oder mehrzeilig sein.

## Einzeilige Kommentare
Einzeilige Kommentare beginnen mit zwei Schrägstrichen (`//`).

Jeder Text zwischen `//` und dem Ende der Zeile wird vom Compiler ignoriert (nicht ausgeführt).

In diesem Beispiel wird ein einzeiliger Kommentar vor einer Code-Zeile verwendet:
### Beispiel:
```cpp
// This is a comment
cout << "Hello World!"; 
```

In diesem Beispiel wird ein einzeiliger Kommentar am Ende einer Code-Zeile verwendet:
### Beispiel:
```cpp
cout << "Hello World!"; // This is a comment 
```

## C++ Mehrzeilige Kommentare
Mehrzeilige Kommentare beginnen mit `/*` und enden mit `*/`.

Jeder Text zwischen `/*` und `*/` wird vom Compiler ignoriert:
### Beispiel:
```cpp
/* The code below will print the words Hello World!
to the screen, and it is amazing */
cout << "Hello World!"; 
```

> **Hinweis:** Einzeilige oder mehrzeilige Kommentare?
>
> Es bleibt Ihnen überlassen, welche Sie verwenden möchten. Normalerweise verwenden wir `//` für kurze Kommentare und `/*` `*/` für längere.

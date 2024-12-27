## C++ Kommentare

Kommentare kannst du verwenden, um C++-Code zu erklären und ihn besser lesbar zu machen. Sie können auch verwendet werden, um die Ausführung von Code zu verhindern, wenn du alternativen Code testest. Kommentare können einzeilig oder mehrzeilig sein.

## Einzeilige Kommentare

Einzeilige Kommentare beginnen mit zwei Schrägstrichen (`//`).

Jeder Text zwischen `//` und dem Ende der Zeile wird vom Compiler ignoriert (nicht ausgeführt).

In diesem Beispiel wird ein einzeiliger Kommentar vor einer Code-Zeile verwendet:

### Beispiel:

```c++
// Das ist ein Kommentar
cout << "Hello World!";
```

In diesem Beispiel wird ein einzeiliger Kommentar am Ende einer Code-Zeile verwendet:

### Beispiel:

```c++
cout << "Hello World!"; // Das ist ein Kommentar
```

## C++ Mehrzeilige Kommentare

Mehrzeilige Kommentare beginnen mit `/*` und enden mit `*/`.

Jeder Text zwischen `/*` und `*/` wird vom Compiler ignoriert:

### Beispiel:

```c++
/* Der folgende Code gibt die Wörter "Hello World!"
auf dem Bildschirm aus, und das ist großartig */
cout << "Hello World!";
```

>   **Hinweis:** Einzeilige oder mehrzeilige Kommentare?

>   Es bleibt dir überlassen, welche Art von Kommentar du verwenden möchtest. Normalerweise verwenden wir `//` für kurze Kommentare und `/*` `*/` für längere Kommentare oder Codeblöcke, die vorübergehend deaktiviert werden sollen.

# Smart Pointers in C++

In C++ wird das Speichermanagement traditionell durch manuelle Verwaltung von Zeigern (Pointers) durchgeführt, was oft zu Problemen wie Speicherlecks und ungültigen Zeigern führen kann. **Smart Pointers** sind eine moderne Möglichkeit, das Speichermanagement zu vereinfachen und sicherzustellen, dass der Speicher korrekt freigegeben wird, ohne dass der Programmierer dies manuell tun muss.

C++ bietet drei Haupttypen von Smart Pointern:
- `std::unique_ptr`
- `std::shared_ptr`
- `std::weak_ptr`

Diese Smart Pointer sind Teil der C++ Standardbibliothek (ab C++11) und bieten automatisierte Speicherverwaltung, die den Code sicherer und weniger fehleranfällig macht.

## 1. `std::unique_ptr`

Ein `unique_ptr` ist ein Smart Pointer, der den Besitz eines dynamisch allozierten Objekts exklusiv übernimmt. Das bedeutet, dass nur ein `unique_ptr` auf ein bestimmtes Objekt zeigen kann. Wenn der `unique_ptr` zerstört wird, wird der Speicher automatisch freigegeben.

### Beispiel:

```cpp
#include <iostream>
#include <memory>  // Für unique_ptr

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Konstruktor aufgerufen!" << endl;
    }
    ~MyClass() {
        cout << "Destruktor aufgerufen!" << endl;
    }
};

int main() {
    // Ein unique_ptr auf ein MyClass-Objekt
    unique_ptr<MyClass> ptr1 = make_unique<MyClass>();

    // Kein manuelles Löschen notwendig, wird automatisch durch den unique_ptr freigegeben
    return 0;
}
```

#### Erklärung:
- `make_unique<MyClass>()` erstellt ein Objekt vom Typ `MyClass` und gibt einen `unique_ptr` darauf zurück.
- Wenn `ptr1` aus dem Gültigkeitsbereich austritt, wird der Destruktor von `MyClass` automatisch aufgerufen, und der Speicher wird freigegeben.

**Besondere Merkmale von `unique_ptr`:**
- Ein `unique_ptr` kann nicht kopiert werden. Er kann nur verschoben werden.
- Der Speicher wird automatisch freigegeben, wenn der `unique_ptr` aus dem Gültigkeitsbereich austritt.

## 2. `std::shared_ptr`

Ein `shared_ptr` ist ein Smart Pointer, der den Besitz eines Objekts zwischen mehreren Zeigern teilt. Der Speicher wird erst dann freigegeben, wenn alle `shared_ptr` auf das Objekt zerstört werden.

### Beispiel:

```cpp
#include <iostream>
#include <memory>  // Für shared_ptr

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Konstruktor aufgerufen!" << endl;
    }
    ~MyClass() {
        cout << "Destruktor aufgerufen!" << endl;
    }
};

int main() {
    // Zwei shared_ptr, die das gleiche Objekt teilen
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>();
    shared_ptr<MyClass> ptr2 = ptr1;  // ptr2 teilt nun den Besitz mit ptr1

    cout << "Anzahl der Shared Pointer: " << ptr1.use_count() << endl;  // Gibt 2 aus

    // Der Speicher wird freigegeben, wenn beide ptr1 und ptr2 den Gültigkeitsbereich verlassen
    return 0;
}
```

#### Erklärung:
- `make_shared<MyClass>()` erstellt ein Objekt vom Typ `MyClass` und gibt einen `shared_ptr` darauf zurück.
- Wenn `ptr1` und `ptr2` den Gültigkeitsbereich verlassen, wird der Destruktor von `MyClass` aufgerufen und der Speicher freigegeben.
- `use_count()` gibt die Anzahl der `shared_ptr`-Instanzen zurück, die auf dasselbe Objekt zeigen.

**Besondere Merkmale von `shared_ptr`:**
- Mehrere `shared_ptr`-Instanzen können denselben Speicher gemeinsam nutzen.
- Der Speicher wird automatisch freigegeben, wenn der letzte `shared_ptr` auf das Objekt zerstört wird.

## 3. `std::weak_ptr`

Ein `weak_ptr` ist ein Smart Pointer, der eine schwache Referenz auf ein Objekt hält, das von einem `shared_ptr` verwaltet wird. Ein `weak_ptr` verhindert nicht, dass das Objekt freigegeben wird, wenn keine `shared_ptr` mehr darauf zeigen. `weak_ptr` wird häufig verwendet, um Zyklen in Referenzen zu vermeiden, die sonst zu Speicherlecks führen könnten.

### Beispiel:

```cpp
#include <iostream>
#include <memory>  // Für weak_ptr

using namespace std;

class MyClass {
public:
    MyClass() {
        cout << "Konstruktor aufgerufen!" << endl;
    }
    ~MyClass() {
        cout << "Destruktor aufgerufen!" << endl;
    }
};

int main() {
    shared_ptr<MyClass> ptr1 = make_shared<MyClass>();
    weak_ptr<MyClass> weakPtr = ptr1;  // Schwache Referenz auf ptr1

    // Überprüfung, ob das Objekt noch existiert
    if (auto spt = weakPtr.lock()) {
        cout << "Das Objekt ist noch gültig." << endl;
    } else {
        cout << "Das Objekt wurde bereits freigegeben." << endl;
    }

    return 0;
}
```

#### Erklärung:
- Ein `weak_ptr` wird mit einem `shared_ptr` erstellt, hält jedoch keinen Einfluss auf den Lebenszyklus des Objekts.
- Mit der Methode `lock()` kann ein `weak_ptr` in einen `shared_ptr` umgewandelt werden, um das Objekt zu verwenden, falls es noch existiert.

**Besondere Merkmale von `weak_ptr`:**
- Ein `weak_ptr` kann keine Referenz auf ein Objekt erzeugen, es verhindert jedoch nicht, dass das Objekt freigegeben wird.
- Um auf das Objekt zuzugreifen, muss `lock()` verwendet werden, das einen `shared_ptr` zurückgibt oder `nullptr`, wenn das Objekt bereits freigegeben wurde.

## 4. Vorteile von Smart Pointern

- **Automatisches Speichermanagement:** Smart Pointer verwalten den Speicher automatisch, wodurch das Risiko von Speicherlecks und doppelte Freigaben verringert wird.
- **Einfacher zu verwenden:** Der Code wird einfacher und sicherer, da die Notwendigkeit, `delete` manuell aufzurufen, entfällt.
- **Vermeidung von Fehlern:** Smart Pointer wie `unique_ptr` und `shared_ptr` verhindern häufige Fehler wie doppelte Freigaben oder Zugriffe auf nicht mehr existierende Objekte.

## 5. Zusammenfassung

Smart Pointer sind ein leistungsfähiges Werkzeug in C++, das eine sichere und einfache Speicherverwaltung ermöglicht. Die Haupttypen von Smart Pointern sind:

- `std::unique_ptr`: Ein exklusiver Besitzer des Objekts.
- `std::shared_ptr`: Ein geteilter Besitzer des Objekts.
- `std::weak_ptr`: Eine schwache Referenz, die keine Auswirkungen auf den Lebenszyklus des Objekts hat.

Mit Smart Pointern können Sie sicherstellen, dass der Speicher automatisch freigegeben wird, und vermeiden so viele der typischen Fehler im Zusammenhang mit der manuellen Speicherverwaltung in C++.

## 6. Übung

1. Erstelle ein Programm, das `std::unique_ptr` verwendet, um ein dynamisch zugewiesenes Array zu verwalten.
2. Implementiere ein Beispiel mit `std::shared_ptr`, bei dem zwei `shared_ptr` auf dasselbe Objekt zugreifen, und überprüfe mit `use_count()`, wie viele Pointer das Objekt besitzen.

Viel Spaß beim Üben!

# C++ Funktionsüberladung
## Überladen von Funktionen
Mit der **Funktionsüberladung** können mehrere Funktionen denselben Namen mit unterschiedlichen Parametern haben:
### Beispiel:
```cpp
int myFunction(int x)
float myFunction(float x)
double myFunction(double x, double y)
```
Betrachten Sie das folgende Beispiel, das zwei Funktionen enthält, die Zahlen unterschiedlichen Typs addieren:
### Beispiel:
```cpp
int plusFuncInt(int x, int y) {
  return x + y;
}

double plusFuncDouble(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFuncInt(8, 5);
  double myNum2 = plusFuncDouble(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```
Anstatt zwei Funktionen zu definieren, die das Gleiche tun sollen, ist es besser, eine zu überladen.

Im folgenden Beispiel überladen wir die Funktion `plusFunc` so, dass sie sowohl für `int` als auch für `double` funktioniert:
### Beispiel:
```cpp
int plusFunc(int x, int y) {
  return x + y;
}

double plusFunc(double x, double y) {
  return x + y;
}

int main() {
  int myNum1 = plusFunc(8, 5);
  double myNum2 = plusFunc(4.3, 6.26);
  cout << "Int: " << myNum1 << "\n";
  cout << "Double: " << myNum2;
  return 0;
}
```
> **Hinweis:** Mehrere Funktionen können den gleichen Namen haben, solange die Anzahl und/oder der Typ der Parameter unterschiedlich sind.

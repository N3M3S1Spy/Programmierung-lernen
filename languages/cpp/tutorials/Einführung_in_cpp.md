# Einführung in C++
Um C++ zu verwenden, braucht man zwei Dinge:

- Ein Texteditor, wie Notepad, um C++ Code zu schreiben
- Ein Compiler, wie GCC, um den C++-Code in eine Sprache zu übersetzen, die der Computer versteht

Es gibt viele Texteditoren und Compiler zur Auswahl. In diesem Tutorial, verwenden wir eine IDE verwenden (siehe unten).

## C++ IDE installieren

Eine IDE (Integrated Development Environment) wird zum Bearbeiten UND Kompilieren des Codes verwendet.

Beliebte IDEs sind Code::Blocks, Eclipse und Visual Studio. Diese sind alle kostenlos und können sowohl zum Bearbeiten als auch zum Debuggen von C++-Code verwendet werden.

Hinweis: Webbasierte IDEs können ebenfalls funktionieren, aber die Funktionalität ist begrenzt.

Wir werden in unserem Tutorial Code::Blocks verwenden, das unserer Meinung nach ein guter Ausgangspunkt ist. Sie finden die neueste Version von Codeblocks unter [http://www.codeblocks.org/](https://www.codeblocks.org/downloads/binaries/). Laden Sie die Datei mingw-setup.exe herunter, die den Texteditor mit einem Compiler installiert.

## C++-Schnellstart
Erstellen wir unsere erste C++-Datei. 

Öffnen Sie Codeblocks und gehen Sie zu **Datei > Neu > Leere Datei**. 

Schreiben Sie den folgenden C++-Code und speichern Sie die Datei als `myfirstprogram.cpp` **(Datei > Datei speichern unter)**:
### myfirstprogram.cpp
```c++
#include <iostream>
using namespace std;

int main() {
  cout << "Hello World!";
  return 0;
} 
```

Machen Sie sich keine Sorgen, wenn Sie den obigen Code nicht verstehen - wir werden ihn in späteren Kapiteln im Detail besprechen. Konzentrieren Sie sich jetzt darauf, wie Sie den Code ausführen. 

In Codeblocks sollte er so aussehen:  
![codeblock2020](../bilder/codeblocks2020.png)  

Gehen Sie dann auf **Build > Build and Run**, um das Programm auszuführen. Das Ergebnis sieht in etwa so aus:
```cmd
Hello World!
Process returned 0 (0x0) execution time : 0.011 s
Press any key to continue.
```

# C# Syntax
Um zu verstehen, wie man richtig programmiert, ist es wichtig zu verstehen, dass jede Programmiersprache, ihre eigenen Regeln hat, die es zu beachten gilt, auch genannt: `Syntax`. Eine Sysntax in Programmiersprachen ist wie eine Bauanleitung für einen Roboter. Stell dir vor, du hast einen Roboter, der tanzen soll. Damit er tanzt musst du ihm genau sagen, was er tun soll - und zwar in einer bestimmten Reihenfolge, damit er es richtig versteht. Diese Reihenfolge und die genauen Regeln, wie man die Befehle schreibt, nennt man Syntax. So wie beim Bauen mit Bauklötzen, bei denen du die Klötze richtig anordnen musst, damit dein Turm steht, musst du beim Programmieren die Befehle genau richtig aufschreiben, damit der Computer weiß, was er tun soll.  
In dem vorherigen Kapitel, haben wir eine C# Datei namens Programm.cs erstellt, und wir haben sie benutzt um den Text: "Hello World", auf dem Bildschirm auszugeben:  
#### Program.cs
```C#
using System;

namespace HelloWorld
{
  class Program
  {
    static void Main(string[] args)
    {
      Console.WriteLine("Hello World!");    
    }
  }
}
```
Das ergebnis nach der erfolgreichen ausfürrung war:
```Text
Hello World
```

### Erklärung des Codes
**Zeile 1:** `using System` bedeutet das wir Klassen vom dem System namespace nutzen können.
**Zeile 2:** Eine Leere Zeile. C# ignoriert leere Zeilen. Mehrere Zeilen machen den Code jedoch lesbarer.
**Zeile 3:** `namespace` wir verwendet um den Code zu organisieren, und es ist ein Kontainer für Klassen und andere Namespaceses.
**Zeile 4:** Die geschweifte Klammer `{}`, makeirt den Anfang und das Ende eines Codeblock.
**Zeile 5:** `class` ist ein Kontainer für Daten und Methoden, was funktionalität in dein Programm bringt. Jede Zeile Code in C# muss in einer Klasse geschrieben werden. In unserem Beispiel, haben wir die Klasse: `Program` gennant.

> [!IMPORTANT]
> Sei nicht frustriert oder traurig, wenn du nicht verstehst wie, `using System`, `namespace` und `class` funktioniert. Merke dir einfach es ist etwas, was in deinem Programm auftaucht. Du wirst darüber in einem späteren Kapitel mehr lernen.



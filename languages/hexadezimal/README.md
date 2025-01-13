# Das Hexadezimalsystem: Funktionsweise und Anwendung

## Einleitung  
Das **Hexadezimalsystem** (Sechzehnersystem) ist ein Stellenwertsystem mit der Basis 16. Es wird häufig in der Informatik verwendet, um binäre Daten kompakter darzustellen. Statt nur die Ziffern 0 bis 9 zu nutzen, enthält das System auch die Buchstaben **A** bis **F**, die für die Werte 10 bis 15 stehen.

---

## Hexadezimale Ziffern  
| Dezimal | Hexadezimal | Binär  |
|---------|-------------|-------|
| 0       | 0           | 0000  |
| 1       | 1           | 0001  |
| 2       | 2           | 0010  |
| 3       | 3           | 0011  |
| 4       | 4           | 0100  |
| 5       | 5           | 0101  |
| 6       | 6           | 0110  |
| 7       | 7           | 0111  |
| 8       | 8           | 1000  |
| 9       | 9           | 1001  |
| 10      | A           | 1010  |
| 11      | B           | 1011  |
| 12      | C           | 1100  |
| 13      | D           | 1101  |
| 14      | E           | 1110  |
| 15      | F           | 1111  |

---

## Aufbau und Funktionsweise  
Im Hexadezimalsystem repräsentiert jede Stelle eine Potenz von 16:  

Beispiel für die hexadezimale Zahl **2F3**:  
- \(2 \times 16^2 = 512\)  
- \(F \times 16^1 = 15 \times 16 = 240\)  
- \(3 \times 16^0 = 3\)  

Summe: **512 + 240 + 3 = 755 (Dezimalwert)**

---

## Umrechnung: Hexadezimal zu Dezimal  
1. Multiplizieren Sie jede Stelle mit der entsprechenden Potenz von 16.  
2. Addieren Sie die Ergebnisse.  

### Beispiel  
Hexadezimalzahl: **1A3**  
- \(1 \times 16^2 = 256\)  
- \(A \times 16^1 = 10 \times 16 = 160\)  
- \(3 \times 16^0 = 3\)  

Dezimalwert: **256 + 160 + 3 = 419**

---

## Umrechnung: Dezimal zu Hexadezimal  
1. Teilen Sie die Dezimalzahl wiederholt durch 16.  
2. Notieren Sie den Rest (0 bis F) bei jedem Schritt.  
3. Lesen Sie die Reste von unten nach oben.

### Beispiel  
Dezimalzahl: **2748**  
- \(2748 ÷ 16 = 171\) Rest **12 (C)**  
- \(171 ÷ 16 = 10\) Rest **11 (B)**  
- \(10 ÷ 16 = 0\) Rest **10 (A)**  

Hexadezimalzahl: **ABC**

---

## Anwendung in der Praxis  
- **Farbcodierung in Webdesigns**: Hexadezimale Werte wie `#FF5733` geben Farbwerte an.  
- **Speicheradressen**: Prozessoren verwenden hexadezimale Speicheradressen.  
- **Kompakte Darstellung von Binärdaten**: Hexadezimal ist effizienter und besser lesbar als reine Binärdarstellung.

---

## Fazit  
Das Hexadezimalsystem ist ein unverzichtbares Werkzeug in der Informatik. Es ermöglicht eine kompakte und übersichtliche Darstellung von Daten und wird in zahlreichen Anwendungen eingesetzt.

---

## Ressourcen  
- [Wikipedia: Hexadezimalsystem](https://de.wikipedia.org/wiki/Hexadezimalsystem)  
- [Hexadecimal Tutorial by TutorialsPoint](https://www.tutorialspoint.com)

---

## Lizenz  
Dieses Projekt ist unter der MIT-Lizenz lizenziert. Weitere Informationen finden Sie in der Datei [LICENSE](LICENSE).

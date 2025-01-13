# Das Binärsystem: Funktionsweise und Anwendung

## Einleitung  
Das Binärsystem (Zweiersystem) ist die Grundlage moderner Computertechnik und Elektronik. Es verwendet nur zwei Zustände, dargestellt durch die Ziffern **0** und **1**, um Informationen zu speichern und zu verarbeiten. Diese beiden Zustände entsprechen physikalischen Zuständen wie "aus" oder "an" in elektrischen Schaltkreisen.

---

## Warum Binär?  
Computer verstehen keine komplexen Zahlen oder Buchstaben, sondern arbeiten auf einer grundlegenden Ebene mit elektrischen Signalen. Da es einfacher und stabiler ist, zwischen zwei Zuständen zu unterscheiden (Spannung an/Spannung aus), ist das Binärsystem ideal für die digitale Welt.

---

## Aufbau und Funktionsweise  
Im Binärsystem repräsentiert jede Stelle eine Potenz von **2**, beginnend mit \(2^0\) (1) auf der rechten Seite.  

Beispiel für die Binärzahl **1011**:  
- \(1 \times 2^3 = 8\)  
- \(0 \times 2^2 = 0\)  
- \(1 \times 2^1 = 2\)  
- \(1 \times 2^0 = 1\)  

Summe: **8 + 0 + 2 + 1 = 11 (Dezimalwert)**

---

## Umrechnung: Binär zu Dezimal  
Um eine Binärzahl in das Dezimalsystem umzuwandeln, multiplizieren Sie jede Stelle mit der entsprechenden Zweierpotenz und addieren die Ergebnisse.

### Beispiel  
Binärzahl: **1101**  
- \(1 \times 2^3 = 8\)  
- \(1 \times 2^2 = 4\)  
- \(0 \times 2^1 = 0\)  
- \(1 \times 2^0 = 1\)  

Dezimalwert: **8 + 4 + 0 + 1 = 13**

---

## Umrechnung: Dezimal zu Binär  
Zur Umrechnung einer Dezimalzahl in eine Binärzahl:  
1. Teilen Sie die Dezimalzahl wiederholt durch **2**.  
2. Notieren Sie den Rest (0 oder 1) bei jedem Schritt.  
3. Lesen Sie die Reste von unten nach oben.

### Beispiel  
Dezimalzahl: **19**  
- \(19 ÷ 2 = 9\) Rest **1**  
- \(9 ÷ 2 = 4\) Rest **1**  
- \(4 ÷ 2 = 2\) Rest **0**  
- \(2 ÷ 2 = 1\) Rest **0**  
- \(1 ÷ 2 = 0\) Rest **1**  

Binärzahl: **10011**

---

## Anwendung in der Praxis  
- **Speicherung von Daten**: Computer speichern alle Daten (Texte, Bilder, Videos) in binärer Form.  
- **Logikgatter in Schaltkreisen**: Elektronische Bauteile nutzen binäre Zustände, um logische Operationen durchzuführen.  
- **Kommunikation**: Netzwerke codieren Datenströme in binärer Form zur Übertragung.  

---

## Fazit  
Das Binärsystem bildet die Grundlage für alle modernen Computer und digitale Technologien. Ein Verständnis der binären Logik hilft, die Funktionsweise von Computern besser zu verstehen und effizienter mit ihnen zu arbeiten.

---

## Ressourcen  
- [Wikipedia: Binärsystem](https://de.wikipedia.org/wiki/Bin%C3%A4rsystem)  
- [Khan Academy: Number Systems](https://www.khanacademy.org/computing)  

---

## Lizenz  
Dieses Projekt ist unter der MIT-Lizenz lizenziert. Weitere Informationen finden Sie in der Datei [LICENSE](LICENSE).

# Python-Versionen unter Windows verwalten

Das Verwalten mehrerer Python-Versionen unter Windows kann eine Herausforderung sein, aber es gibt effektive Tools, die diesen Prozess vereinfachen. Die gängigsten Ansätze sind die Nutzung des `py`-Launchers (der mit Python-Installationen kommt) und `pyenv-win`.

## 1\. Verwenden des Python Launchers for Windows (`py`)

Der Python Launcher (`py.exe`) wird standardmäßig mit Python 3.3 und höher auf Windows-Systemen installiert, wenn Sie die Installation über den offiziellen Installer vornehmen und die Option "Add Python to PATH" (oder ähnliches) aktivieren. `py` ist eine ausgezeichnete Möglichkeit, zwischen installierten Python-Versionen zu wechseln, ohne die Umgebungsvariablen manuell anpassen zu müssen.

### 1.1. Überprüfen Sie, ob `py` installiert ist

Öffnen Sie die Eingabeaufforderung (cmd) oder PowerShell und geben Sie ein:

```bash
py --version
```

Wenn eine Version angezeigt wird, ist `py` installiert.

### 1.2. Installieren mehrerer Python-Versionen

Laden Sie verschiedene Python-Versionen (z.B. Python 3.9, 3.10, 3.11) von der offiziellen Python-Website ([python.org](https://www.python.org/downloads/windows/)) herunter und installieren Sie diese. Achten Sie darauf, bei der Installation die Option "Add Python to PATH" **nicht zu aktivieren**, um Konflikte zu vermeiden, wenn Sie `py` oder `pyenv-win` verwenden möchten. Lassen Sie `py` die Verknüpfungen erstellen.

### 1.3. Python-Skripte mit `py` ausführen

Sie können eine spezifische Python-Version verwenden, indem Sie `py -X.Y` vor dem Skriptnamen angeben:

  * **Standard-Python 3 verwenden:**

    ```bash
    py your_script.py
    ```

    Dies wird die höchste installierte Python 3-Version verwenden.

  * **Spezifische Python 3.x-Version verwenden:**

    ```bash
    py -3.9 your_script.py  # Verwendet Python 3.9
    py -3.10 your_script.py # Verwendet Python 3.10
    ```

  * **Standard-Python 2 (falls installiert) verwenden:**

    ```bash
    py -2 your_script.py
    ```

### 1.4. Interaktive Shell starten

Sie können auch eine interaktive Shell mit einer bestimmten Version starten:

```bash
py -3.9
```

### 1.5. `#`-Shebangs in Skripten nutzen

Sie können Shebang-Zeilen (auch "Hashbang" genannt) am Anfang Ihrer Python-Skripte verwenden, um `py` mitzuteilen, welche Python-Version verwendet werden soll:

```python
#!py -3.9
# Dein Python-Code hier
print("Hallo von Python 3.9!")
```

Wenn Sie dieses Skript dann einfach mit `your_script.py` ausführen (und `.py`-Dateien sind mit `py.exe` verknüpft), wird `py` die angegebene Version verwenden.

## 2\. Verwenden von `pyenv-win`

`pyenv-win` ist eine Windows-Portierung des beliebten `pyenv`-Tools von Linux/macOS. Es ermöglicht Ihnen, mehrere Python-Versionen zu installieren, zu verwalten und zwischen ihnen zu wechseln, ohne dass Sie sie manuell herunterladen und installieren müssen. Es integriert sich gut mit PowerShell und CMD.

### 2.1. Installation von `pyenv-win`

Die einfachste Methode ist die Installation über PowerShell mit `pip` oder `git`.

#### Methode 1: Installation über `pip` (empfohlen)

1.  Öffnen Sie PowerShell **als Administrator**.
2.  Installieren Sie `pyenv-win` mit pip:
    ```powershell
    pip install pyenv-win --target "$($env:USERPROFILE)\.pyenv"
    ```
3.  Fügen Sie die Umgebungsvariablen hinzu. Dies muss nur einmalig gemacht werden. Fügen Sie diese Zeilen zu Ihrem PowerShell-Profil (`$PROFILE`) hinzu. Geben Sie `$PROFILE` in PowerShell ein, um den Pfad zu finden und zu bearbeiten (z.B. mit Notepad):
    ```powershell
    # Wenn die Datei nicht existiert, erstellen Sie sie: New-Item -Path $PROFILE -ItemType File -Force
    # Fügen Sie diese Zeilen zu der Datei hinzu:
    $env:PYENV_ROOT = "$($env:USERPROFILE)\.pyenv"
    $env:Path = "$env:PYENV_ROOT\bin;$env:PYENV_ROOT\shims;$env:Path"
    ```
    Speichern Sie die Datei und schließen Sie sie. Starten Sie PowerShell neu.

#### Methode 2: Installation über `git`

1.  Öffnen Sie PowerShell.
2.  Klonen Sie das Repository:
    ```powershell
    git clone https://github.com/pyenv-win/pyenv-win.git "$($env:USERPROFILE)\.pyenv"
    ```
3.  Fügen Sie die Umgebungsvariablen hinzu (wie bei der `pip`-Installation oben).

### 2.2. Verwenden von `pyenv-win`

Nach der Installation und Konfiguration können Sie `pyenv-win`-Befehle verwenden:

  * **Verfügbare Python-Versionen auflisten, die installiert werden können:**

    ```bash
    pyenv install --list
    ```

  * **Eine spezifische Python-Version installieren:**

    ```bash
    pyenv install 3.9.13
    pyenv install 3.10.10
    pyenv install 3.11.0
    ```

    `pyenv-win` lädt die entsprechenden Installer herunter und installiert Python in seinem eigenen Verzeichnis.

  * **Alle installierten Python-Versionen auflisten:**

    ```bash
    pyenv versions
    ```

    Die aktuell aktive Version wird mit einem Sternchen (`*`) markiert.

  * **Eine globale Python-Version festlegen:**
    Dies setzt die Standard-Python-Version für Ihr gesamtes System (sofern `pyenv` korrekt in Ihrem PATH ist).

    ```bash
    pyenv global 3.10.10
    ```

    Überprüfen Sie:

    ```bash
    python --version
    ```

  * **Eine lokale (projektbezogene) Python-Version festlegen:**
    Wechseln Sie in Ihr Projektverzeichnis und legen Sie eine Version fest. `pyenv` erstellt dann eine `.python-version`-Datei in diesem Verzeichnis.

    ```bash
    cd mein_projekt
    pyenv local 3.9.13
    ```

    Wenn Sie nun in diesem Verzeichnis sind, wird `python` auf 3.9.13 verweisen.

  * **Eine Python-Version für die aktuelle Shell-Sitzung festlegen:**
    Diese Einstellung ist temporär und überschreibt globale/lokale Einstellungen für die aktuelle Shell.

    ```bash
    pyenv shell 3.11.0
    ```

  * **Die installierten Versionen deinstallieren:**

    ```bash
    pyenv uninstall 3.9.13
    ```

### 2.3. Integration mit Virtual Environments (venvs)

`pyenv-win` kann auch nahtlos mit Python Virtual Environments verwendet werden, die Sie mit `python -m venv` erstellen.

1.  Stellen Sie sicher, dass Sie die gewünschte Python-Version mit `pyenv` global oder lokal eingestellt haben.
    ```bash
    pyenv global 3.10.10
    ```
2.  Erstellen Sie Ihre venv wie gewohnt:
    ```bash
    python -m venv mein_venv
    ```
    (`python` zeigt hier auf die Version, die Sie mit `pyenv` ausgewählt haben).
3.  Aktivieren Sie die venv:
    ```bash
    .\mein_venv\Scripts\activate
    ```
    Jetzt sind Sie in einer virtuellen Umgebung, die auf einer spezifischen `pyenv`-verwalteten Python-Version basiert.

-----

**Fazit:**

  * **`py` (Python Launcher for Windows):** Ideal, wenn Sie Python-Versionen manuell installieren und dann einfach Skripte oder interaktive Shells mit spezifischen Versionen starten möchten. Erfordert, dass Sie Python-Versionen über ihre jeweiligen Installer hinzufügen.
  * **`pyenv-win`:** Die umfassendere Lösung für Entwickler, die häufig zwischen Python-Versionen wechseln müssen. Es automatisiert die Installation und Verwaltung von Python-Versionen und bietet eine mächtige Schnittstelle über die Kommandozeile.

Wählen Sie die Methode, die am besten zu Ihrem Workflow passt. Für die meisten fortgeschrittenen Entwickler ist `pyenv-win` die flexiblere und effizientere Wahl.

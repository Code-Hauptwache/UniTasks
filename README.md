# UniTasks

Dieses Repository dient dazu, meine Universitätsaufgaben und -projekte zu speichern und zu verwalten.

## Einrichtung eines Git-Repositorys über das Linux-Terminal

Wenn du ein Linux-Betriebssystem verwendest, kannst du Git verwenden, um deine Projekte zu verwalten und mit diesem Repository zu interagieren. Hier sind die grundlegenden Schritte:

### 1. Git installieren (falls nicht bereits vorhanden)

Stelle sicher, dass Git auf deinem System installiert ist. Wenn es nicht installiert ist, kannst du es mit deinem Paketmanager installieren. Zum Beispiel, wenn du Ubuntu oder Debian verwendest, kannst du den folgenden Befehl verwenden:

```bash
sudo apt-get install git
```

### 2. Git konfigurieren

Konfiguriere Git mit deinem GitHub-Benutzernamen und E-Mail-Adresse:

```bash
git config --global user.name "Dein GitHub-Benutzername"
git config --global user.email "deine.email@example.com"
```

### 3. Repository klonen

Um dieses Repository zu klonen, navigiere in das Verzeichnis, in dem du es speichern möchtest, und führe den folgenden Befehl aus:

```bash
git clone https://github.com/dein-benutzername/Universitaetsaufgaben-Repository.git

```

### 4. Dateien bearbeiten und ändern

Bearbeite und ändere deine Universitätsaufgaben in deinem lokalen Verzeichnis.

### 5. Änderungen commiten

Führe den folgenden Befehl aus, um Änderungen, die du gemacht hast, in deinem lokalen Repository zu committen:

```bash
git add .
git commit -m "Eine aussagekräftige Commit-Nachricht hier"
```

### 6. Änderungen pushen

Um deine Änderungen auf dieses GitHub-Repository hochzuladen, verwende den folgenden Befehl:

```bash
git push origin main

```

Nun sollten deine Universitätsaufgaben sicher in diesem Repository gespeichert sein.

**Hinweis:** Achte darauf, dass du dein persönliches Zugriffstoken anstelle deines Passworts verwendest, wenn Git nach Anmeldeinformationen fragt.

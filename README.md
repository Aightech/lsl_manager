# lsl_manager
C++ programs that enables to launch (and build) different pluggings of the TNE projects from one simple GUI.

## Installation
### Ubuntu 18
#### Requirements
- QT5
#### Build
```bash
qmake lsl_manager.pro && make
```
#### Run
double click on "lsl_manager.desktop".

**Rq:** You can copy the file "lsl_manager.desktop" into your /usr/share/applications folder to get a shortcut.
```bash
sudo cp lsl_manager.desktop /usr/share/applications/
```

### Windows 10
#### Requirements
- add qmake of mingw64 to your environement variable path.
- QT5
#### Steps
run install.bat

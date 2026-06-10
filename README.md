# reference book

- book1: PROGRAMMING IN C, third Edition, Ashok N. Kamthane
- book2: 21st Century C, Ben Klemens


# Notes for windows

## Packages
- Windows Univesal C Runtime to support C17 WindowsUCRT.zip

# useful commands

```powershell
# load MS Compiler environment 

& 'C:\Program Files\Microsoft Visual Studio\18\Community\Common7\Tools\Launch-VsDevShell.ps1'

# calling the compiler

cl.exe

# calling the compiler while adding the debugging symbols
cl.exe /Zi main.c /link /DEBUG

# to display all warnings or with a warning level
cl.exe /Zi /Wall main.c /link /DEBUG
# turn of all warnings
cl.exe /Zi /W0 main.c /link /DEBUG
# Displays all level 3 plus informational warnings (Recommended).
cl.exe /Zi /W4 main.c /link /DEBUG

```




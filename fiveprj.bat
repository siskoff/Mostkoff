H:\Bcc7164\bin\ilink64.exe -Gn -aa -Tpe -s @h:\source\b32.bc > h:\source\link.log
IF ERRORLEVEL 1 GOTO LINKERROR
ECHO * Application successfully built * >> h:\source\link.log
GOTO EXIT
:LINKERROR
Echo Link Error >> h:\source\link.log
:EXIT

@echo off
SETLOCAL ENABLEDELAYEDEXPANSION
SET LinkName=lsl_manager
SET Esc_LinkDest=%%HOMEDRIVE%%%%HOMEPATH%%\Desktop\!LinkName!.lnk
SET Esc_LinkTarget=%~f1
SET cSctVBS=CreateShortcut.vbs
SET LOG=".\%~N0_runtime.log"
((
  echo Set oWS = WScript.CreateObject^("WScript.Shell"^) 
  echo sLinkFile = oWS.ExpandEnvironmentStrings^("!Esc_LinkDest!"^)
  echo Set oLink = oWS.CreateShortcut^(sLinkFile^) 
  echo oLink.TargetPath = oWS.ExpandEnvironmentStrings^("!Esc_LinkTarget!"^)
  echo oLink.IconLocation = "!%~dp0!docs\icon.ico"
  echo oLink.Save
)1>!cSctVBS!
cscript //nologo .\!cSctVBS!
::DEL !cSctVBS!
::)1>>!LOG! 2>>&1
echo Shortcut created
DEL !LOG! /f /q
DEL !cSctVBS! /f /q

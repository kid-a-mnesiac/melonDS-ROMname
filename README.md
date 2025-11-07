<h2 align="center"><b>melonDS-ROMname</b></h2>

melonDS-ROMname is a melonDS emulator fork. It shows the current ROM emulated in the window title. 
This version of melonDS is necessary for melonDS-RPC, the Discord Rich Presence for melonDS emulator.

### How to start the emulator

To start this modified version of the melonDS, please download both the source code (not the one found in the release, but rather the one you can download on the main page) and the release. Put the release .exe file in the same folder with the source code and it should run. The .exe needs the .dll dependencies to run.

### Main differences

The only way how this version of the emulator differs from the parent one is by adding the current ROM name in the window title. This was done by changing a few lines in the Window.cpp file, everything else was left untouched. 
This change is needed for the melonDS-RPC so that it can swiftly showcase the current game playing in the Discord RPC.

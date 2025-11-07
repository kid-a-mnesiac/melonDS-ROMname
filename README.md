<h2 align="center"><b>melonDS-ROMname</b></h2>

<b>melonDS-ROMname</b> is a <a href="https://github.com/melonDS-emu/melonDS">melonDS emulator</a> fork. This version of melonDS is necessary for <a href="https://github.com/kid-a-mnesiac/melonDS-RPC">melonDS-RPC</a>, the Discord Rich Presence for melonDS emulator.

## Why is melonDS-ROMname needed? 

melonDS-RPC fetches the window title, de-obfuscates it through a special script and displays the clean, de-obfuscated game title in your Discord RPC.
<br>Since the original version of melonDS does not showcase the current ROM emulated in its window title, it was almost impossible for the RPC script to accurately demonstrate the current game the user is playing.
<br>The .toml/.ini files that could have been possibly used for game detection are extremely unreliable – that's why I decided to modify the source code of the original melonDS to display the ROM name in the window title – it's the most reliable way of fetching the game title, as well as the fastest. 
<br>This small change allows melonDS-RPC to almost instantly change the RPC in accordance to the window title fetched.

## Requirements

Can run standalone for DS emulation, but if you want to use it for the Discord RPC you need this:

- Windows 10 or newer is recommended (Windows 7 might work but is not officially supported)
  
- Discord (desktop app)
  
- <a href="https://github.com/kid-a-mnesiac/melonDS-RPC">melonDS-RPC</a>

## Installation

To start this modified version of the melonDS, please download both the source code (not the one found in the release, but rather the one you can download on the main page) and the release.
<br>Put the release .exe file in the same folder with the source code and run the .exe. The .exe needs the .dll dependencies to run.

## Main differences

The only way how this version of the emulator differs from the parent one is by adding the current ROM name in the window title. This was done by changing a few lines in the <i>Window.cpp</i> file, everything else was left untouched. 
This change is needed for the melonDS-RPC so that it can display the current game in the Discord RPC.

## To-Do List

- somehow compile this so it's more compact

## Credits

Please support the creators of <a href="https://github.com/melonDS-emu/melonDS">melonDS emulator</a>.

<h2>⠀</h2>

<p align="center">Happy gaming to everyone!</p>

<p align="center"><img src="https://i.imgur.com/qkS7qXG.gif"></p>

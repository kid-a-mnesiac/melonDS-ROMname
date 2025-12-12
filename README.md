<h2 align="center"><b>melonDS-RPC</b></h2>

<b>melonDS-ROMname</b> is a fork of the <a href="https://github.com/melonDS-emu/melonDS">melonDS emulator</a>.
<br>This forked version is required for melonDS Discord Rich Presence, <a href="https://github.com/kid-a-mnesiac/melonDS-RPC">melonDS-RPC</a>.

## Why is melonDS-ROMname needed? 

melonDS-RPC fetches the window title, de-obfuscates it through a special script and displays the clean, de-obfuscated game title in your Discord RPC.
<br>Since the original version of melonDS does not showcase the current ROM emulated in its window title, it was almost impossible for the RPC script to accurately demonstrate the current game the user is playing.
<br>The .toml/.ini files that could have been possibly used for game detection are extremely unreliable – that's why I decided to modify the source code of the original melonDS to display the ROM name in the window title – it's the most reliable way of fetching the game title, as well as the fastest. 
<br>This small change allows melonDS-RPC to almost instantly change the RPC in accordance to the window title fetched.

## Requirements

- Windows 10 or newer
  
- Discord (desktop app)
  
- <a href="https://github.com/kid-a-mnesiac/melonDS-RPC">melonDS-ROMname</a>

## Installation

The installation is as simple as downloading the source code and running the melonDS.exe file. After that, run melonDS-ROMname. melonDS-RPC will automatically fetch the game name and display it in your Discord RPC. You don't have to have melonDS registered/detected for this to work.

## Credits

Please support the creators of <a href="https://github.com/melonDS-emu/melonDS">melonDS emulator</a>.

<h2>⠀</h2>

<p align="center">Happy gaming to everyone!</p>

<p align="center"><img src="https://i.imgur.com/XswSLOc.gif"></p>



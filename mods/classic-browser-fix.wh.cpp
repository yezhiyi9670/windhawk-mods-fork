// ==WindhawkMod==
// @id              classic-browser-fix
// @name            Fix browsers for Windows Classic theme
// @description     Forces the border from Aero Light theme to fix glitched border in Classic theme
// @version         1.2.2
// @author 			Anixx
// @github 			https://github.com/Anixx
// @include         msedge.exe
// @include         chrome.exe
// @include         chromium.exe
// @include         Skype.exe
// @include         steam.exe
// @include         brave.exe
// @include         chatgpt.exe

// @compilerOptions -luxtheme
// ==/WindhawkMod==

// ==WindhawkModReadme==
/*
**!Important!** This mod is outdated. If you are using the Windows Classic theme, you likely would prefer
the **Chromium Frame Blackout Fix** mod instead as it keeps the classic appearance of the border. It is
recommended to install that mod anyway.

This mod forces Aero Lite window borders on Chromium-based browsers and applications
MS Edge, Chrome, Chromium, Skype, Chatgpt and Steam app,
which fixes their glitches when using Windows Classic theme.

![Aero Lite](https://i.imgur.com/5enqSD8.png)

*/
// ==/WindhawkModReadme==

#include <uxtheme.h>

BOOL Wh_ModInit() {
    Wh_Log(L"Init");
    SetThemeAppProperties(STAP_ALLOW_CONTROLS); // Reported problems in File Picker without this flag.
    return TRUE;
}

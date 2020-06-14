# RTD2662
source code for RTD2662
* Downloaded from comments in http://tech.mattmillman.com/lcd/rovatools/
* Some more info and sources https://kolins.cz/share/index.php?folder=UlREMjY2Mg==

## How to change/add a panel
  * Copy `PNL_TTL_KD50G21.h` (5" TFT TTL) to new file in same directory
  * Add a new `#define` for the panel after `_PNL_TTL_KD50G21` in Panel.h
  * Change the `#define _PANEL_TYPE` right below it to your new panel
  * Add a new `#if(_PANEL_TYPE....#include "Panel\New_Panel.h"...#endif` right below that.

## How to edit EDID
  * Download HXD, AW EDID editor and Entech MonInfo
  * Extract the current EDID into a binary format using MonInfo (select the Active monitor and "Save As..." a binary file
  * You can use AW EDID editor to open and modify that file. AW also does registry EDID extraction but it isnt as easy to use!
  * Open the binary file with HXD, then Export it as a C file to get a pretty printed array
  * Paste that array into the `PNL_TTL_xxxx.h` file at `BYTE code tHDMI_EDID_DATA[] =...`
  * Recompile and load RTD binary
  * EDID's are cached heavily so change the model/manufacturer on each change to force a reload OR you can delete your OS cache (e.g. google for "windows 10 clear display cache")
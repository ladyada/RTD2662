# RTD2662
source code for RTD2662
* Downloaded from comments in http://tech.mattmillman.com/lcd/rovatools/
* Some more info and sources https://kolins.cz/share/index.php?folder=UlREMjY2Mg==

## How to compile
  * You must use uVision MDK51 Professional compiler, version 5 (free version is 32kb limited)
  * Open RTD2662.uvproj
  * Select Build->Clean Targets and then Build->Build Target
  * You should get output like
```
Program Size: data=167.6 xdata=745 code=105642
running oc51 on file ".\Output\RTD2662"...
BANKED OBJECT FILE CONVERTER  OC51 V3.10
COPYRIGHT KEIL ELEKTRONIK GmbH 1991 - 2002
GENERATING STANDARD (UN-BANKED) OBJECT FILES
  OBJECT FILE FOR BANK 0:  .\OUTPUT\RTD2662.B00
  OBJECT FILE FOR BANK 1:  .\OUTPUT\RTD2662.B01
creating hex file from ".\Output\RTD2662.B00"...
creating hex file from ".\Output\RTD2662.B01"...
User command #1: Merge128K.bat
C:\Users\ladyada\Dropbox\RTD266x\RTD2662_firmware>if not exist ".\BIN" mkdir .\BIN 
C:\Users\ladyada\Dropbox\RTD266x\RTD2662_firmware>copy output\RTD2662.H00 BIN\RTD2662.H00 
        1 file(s) copied.
C:\Users\ladyada\Dropbox\RTD266x\RTD2662_firmware>copy output\RTD2662.H01 BIN\RTD2662.H01 
        1 file(s) copied.
C:\Users\ladyada\Dropbox\RTD266x\RTD2662_firmware>CreateBin.exe BIN\Flash.bin BIN\RTD2662.H00 BIN\RTD2662.H01 
Create BIN V1.3
Copyright by KX.Craate file:C:\Users\ladyada\Dropbox\RTD266x\RTD2662_firmware\BIN\Flash.bin.Size:1e041
".\Output\RTD2662" - 0 Error(s), 16 Warning(s).
```
The generated firmware image output is in `BIN\Flash.bin` You can now load that into your RTD2662 Flash memory

## How to load firmware
  * We will load through the I2C interface. You will need a USB-to-I2C adapter. The Adafruit FT232H <https://www.adafruit.com/product/2264> and Adafruit MCP2221A breakouts <https://www.adafruit.com/product/4471> both work well. You'll also want a Stemma QT to header cable, either <https://www.adafruit.com/product/4397> or <https://www.adafruit.com/product/4209>
  * Set up the FT232H or MCP2221 to be Python-Blinka-ified by following either guide: <https://learn.adafruit.com/circuitpython-on-any-computer-with-ft232h> or <https://learn.adafruit.com/circuitpython-libraries-on-any-computer-with-mcp2221>
  * Verify that you have Python 3 and the Blinka library, there are some verification steps in the libraries.
  * pip install the CircuitPython RT266x programmer library <https://github.com/adafruit/Adafruit_CircuitPython_RTD266X_Prog>
  * Connect the Stemma QT cable: Black goes to RTD ground. Blue goes to RTD SDA. Yellow goes to RTD SCL. Sometimes the I2C port is available on the VGA connector - check your board documentation. Make sure if you have the FT232H it is flipped to I2C mode.
  * Run the `write_flash.py` example in that library: `python3 write_flash.py FLASH.BIN`
  * You will see output like
```
Found device!
JEDEC id 0xEF3013
Found FLASH  {'name': 'W25X40', 'jedec': 15675411, 'sizeK': 512, 'page size': 256, 'block sizeK': 64}
Writing firmware from file C:\Users\ladyada\Dropbox\RTD266x\RTD2662_firmware\BIN\Flash.bin
Erasing....
Done!
Writing address $0...OK!
Writing address $100...OK!
Writing address $200...OK!
Writing address $300...OK!
```
  * If you get `RuntimeError: Bad CRC - Data is 47, RTD says 21` run it again
  * Programming should take about 1 or 2 minutes.
  * Hard cycle *both* power and HDMI cable connections - you have to force reboot and force-reconnect for HDMI configuration

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
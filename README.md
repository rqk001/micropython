Building and deploying DWM1001-MDEK version
-------------------------------------------

1. Install JLink tools

```
  sh> wget https://www.segger.com/downloads/jlink/JLink_Linux_x86_64.deb
  sh> sudo dpkg -i ./JLink_Linux_x86_64.deb
```

  If anything goes wrong, please refer to https://www.segger.com/downloads/jlink

2. Get the source from https://github.com 

...
  sh> git clone -b dwm1001-mdek git@github.com:rqk001/micropython.git dwm1001
  sh> cd dwm1001
  sh> make -C mpy-cross
  sh> make submodules
  sh> cd ports/nrf
  sh> make BOARD=DWM1001-MDEK
...

  This should create a directory build-DWM1001-MDEK with files:

...
  sh> ls -l build-DWM1001-MDEK/firmware.*

    -rwxrwxr-x 1 rqk rqk 191088 Nov 30 19:03 build-DWM1001-MDEK/firmware.bin
    -rwxrwxr-x 1 rqk rqk 388712 Nov 30 19:03 build-DWM1001-MDEK/firmware.elf
    -rw-rw-r-- 1 rqk rqk 537529 Nov 30 19:03 build-DWM1001-MDEK/firmware.hex
    -rw-rw-r-- 1 rqk rqk 149617 Nov 30 19:03 build-DWM1001-MDEK/firmware.map
...

3. Flash firmware onto the board

  Connect a tag to the computer with USB cable and run:

...
  sh> lsusb
...

  In the USB device listing there should be a line looking like:

....
    ...
    Bus 003 Device 048: ID 1366:0105 SEGGER J-Link
    ...
....
  Run:  

...
  sh>JFlashLiteExe
...
  In a dialog window, set Target device to NRF52832_XXAA and Click OK button

  In the next dialog window, Click "Erase Chip" button

  Click "..." button and pick one of firmware.{bin,hex} files in
    `build-DWM1001-MDEK' directory

  Click "Program Device" button

4. Bring a new Micropython node up

  - Disconnect USB cable from a tag
  - Reconnect USB cable to a tag
  - Run a terminal emulator of your choice, i.e.

...
  sh> minicom -D /dev/ttyACM0
...
  Press Enter several times until you see a Micropython REPL prompt

...
  >>>
...

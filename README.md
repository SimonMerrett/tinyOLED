# tinyOLED
A [WIP] basic SSD1306 OLED driver for ATtiny 0 and 1 series chips using megaTinyCore
![GitHub Logo](/images/tiny402_128x32_test.gif)

V0.2 adds TinyMegaI2CMaster by @technoblogy, which is a very lightweight I2C library and saves over 1kB of memory in the example sketch, compared to the standard Wire library in Arduino/megaTinyCore. Standard Wire library is still available if you comment out `#define TINYWIRE` at the top of `tinyOLED.h`.

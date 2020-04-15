/* VERY rough test sketch for a few functions from the library.
*
*/

#include <tinyOLED.h>
#include <Wire.h>

unsigned long startPixelY = 15; // the start point pixel height for the graphing line

void setup() {
  // put your setup code here, to run once:
  delay(100); // wait for oled to power up? was getting rotated display 180 degrees before
  oled.begin();
}

void loop() {
  oled.fill(0xFF); //fill screen with color
  delay(1000);
  oled.clear(); //all black
  delay(1000);
  startPixelY = 15; // reset the pixel start height 
  for (uint8_t i = 1; i < 64; i++) // for half the width of the screen
  {
    startPixelY = startPixelY + random(3) - 1;
    oled.drawPixel(startPixelY, i); // draw a pixel at the defined position
  }
  delay(1000);
  oled.clear(); //all black

  //usage: oled.setCursor(X IN PIXELS, Y IN ROWS OF 8 PIXELS STARTING WITH 0);
  oled.setCursor(50, 1); //middle of screen
  oled.setFont(FONT6X8);
  oled.print("OLED!");
  oled.setCursor(55, 2); //row below
  oled.println("test"); //println will move the cursor 8 or 16 pixels down (based on the front) and back to X=0
  //  oled.print("test test test test test"); //lines auto wrap
  delay(1000);
}

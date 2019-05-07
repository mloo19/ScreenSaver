/*
  ScreenSaver.ino
  Marisa Loo
 
 Example file using the The Meggy Jr Simplified Library (MJSL)
  from the Meggy Jr RGB library for Arduino
   
 Blink a damned LED.
   
   
 
 Version 1.25 - 12/2/2008
 Copyright (c) 2008 Windell H. Oskay.  All right reserved.
 http://www.evilmadscientist.com/
 
 This library is free software: you can redistribute it and/or modify
 it under the terms of the GNU General Public License as published by
 the Free Software Foundation, either version 3 of the License, or
 (at your option) any later version.
 
 This library is distributed in the hope that it will be useful,
 but WITHOUT ANY WARRANTY; without even the implied warranty of
 MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 GNU General Public License for more details.
 
 You should have received a copy of the GNU General Public License
 along with this library.  If not, see <http://www.gnu.org/licenses/>.
 	  
 */

 
 
 
 

/*
 * Adapted from "Blink,"  The basic Arduino example.  
 * http://www.arduino.cc/en/Tutorial/Blink
 */

#include <MeggyJrSimple.h>    // Required code, line 1 of 2.

int color;

void setup()                    // run once, when the sketch starts
{
  MeggyJrSimpleSetup();      // Required code, line 2 of 2.
  color = 1;
}

void loop()                     // run over and over again
{
  drawOne();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();                 // Erase drawing

  drawTwo();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();

  drawThree();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();
  
  drawFour();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();
  
  drawFive();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();
  
  drawSix();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();
 
  drawSeven();
  DisplaySlate();                  // Write the drawing to the screen.  
  delay(1000);
  ClearSlate();
}

void drawOne()
{
  for (int i = 0; i < 8; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      DrawPx(i, j, Blue);
    }
  }
  
  for (int i = 0; i < 8; i++)
  {
    for (int j = 3; j < 8; j++)
    {
      DrawPx(i, j, DimAqua);
    }
   }
}

void drawTwo()
{
  drawOne();
  DrawPx(0, 3, Red);
  DrawPx(1, 3, Orange);
  DrawPx(2, 3, Green);
  DrawPx(3, 3, Violet);
}

void drawThree()
{
  drawTwo();
  DrawPx(0, 4, Red);
  DrawPx(1, 5, Red);
  DrawPx(1, 4, Orange);
  DrawPx(2, 4, Green);
}

void drawFour()
{
  drawThree();
  DrawPx(2, 6, Red);
  DrawPx(3, 6, Red);
  DrawPx(2, 5, Orange);
  DrawPx(3, 5, Orange);
  DrawPx(3, 4, Green);
}

void drawFive()
{
  drawFour();
  DrawPx(4, 6, Red);
  DrawPx(4, 5, Orange);
  DrawPx(4, 4, Green);
  DrawPx(4, 3, Violet);
}

void drawSix()
{
  drawFive();
  DrawPx(5, 6, Red);
  DrawPx(6, 5, Red);
  DrawPx(5, 5, Orange);
  DrawPx(5, 4, Green);
}

void drawSeven()
{
  drawSix();
  DrawPx(7, 4, Red);
  DrawPx(7, 3, Red);
  DrawPx(6, 4, Orange);
  DrawPx(6, 3, Orange);
  DrawPx(5, 3, Green);
}

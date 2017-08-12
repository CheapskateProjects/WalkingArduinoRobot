/*
  Walking Arduino Robot

  A simple project to use 4 micro servo motors attached to arduino as a walking robot. 

  Servo signals are connected to pins 9-12

  created   Aug 2017
  by CheapskateProjects

  ---------------------------
  The MIT License (MIT)

  Copyright (c) 2017 CheapskateProjects

  Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

  The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#include <Servo.h>

Servo servo1; // front left 
Servo servo2; //rear left
Servo servo3; // front right
Servo servo4; // rear right

int middle = 90;
int endPoint = 80;
int stepDelay = 400;

void setup()
{
  servo1.attach(9); 
  servo2.attach(10);
  servo3.attach(11);
  servo4.attach(12);
}

void loop() {
  servo1.write(middle);
  servo2.write(middle);
  servo3.write(middle);
  servo4.write(middle);
  delay(stepDelay);

  servo1.write(middle - endPoint);
  delay(stepDelay);
  servo3.write(middle + endPoint);
  delay(stepDelay);
  servo2.write(middle - endPoint);
  delay(stepDelay);
  servo4.write(middle + endPoint);
  delay(stepDelay);
}


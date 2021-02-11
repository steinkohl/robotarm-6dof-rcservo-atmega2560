#include <Arduino.h>
#include <Servo.h>
#include <RobotArm.h>

Servo servo1;
Servo servo2a;
Servo servo2b;
Servo servo3;
Servo servo4;
Servo servo5;
Servo servo6;

int pos = 0;
bool dir = true;

void setup() 
{
  Serial.begin(115200);

  servo1.attach(2);
  servo2a.attach(3);
  servo2b.attach(4);
  servo3.attach(5);
  servo4.attach(6);
  servo5.attach(7);
  servo6.attach(8);
}

/*void loop() {
  int pos;
  for (pos = 60; pos <= 120; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    servo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 120; pos >= 60; pos -= 1) { // goes from 180 degrees to 0 degrees
    servo4.write(pos);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
}*/


void loop()
{
  if (dir)
  {
    pos++;
    if (pos >= 90) dir = false;
  }
  else
  {
    pos--;
    if (pos <= 0) dir = true;
  }
  
  // name     min max
  // servo1   0   180
  // servo2   0   115
  // servo2b   
  // servo3   0   105
  // servo4   0   180
  // servo5   0   170
  // servo6   0   180

  servo1.write(pos);
  servo2a.write(115);
  servo2b.write(180-115); 
  servo3.write(pos);
  servo4.write(pos);
  servo5.write(pos);
  servo6.write(pos);

  delay(30);
}
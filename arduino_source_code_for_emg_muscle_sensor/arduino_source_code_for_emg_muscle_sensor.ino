#include <Servo.h>

// Declare finger servos
Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

// threshold to trigger servo activation
const int threshValue = 100;

// servo position
int pos = 0;

void setup()
{
  // Link pins to servos
  thumb.attach(1);
  index.attach(2);
  middle.attach(3);
  ring.attach(4);
  pinky.attach(5);
}

void loop()
{
  // read in muscle sensor value
  int value = analogRead(A3);

  // if less than threshhold value, reset (or relax hand)
  if(value < threshValue)
  {
    pos = 0;
    thumb.write(pos);
    index.write(pos);
    middle.write(pos);
    ring.write(pos);
    pinky.write(pos);
    delay(5);
  }
  // if greater than threshold value, contract hand
  else
  {
    
    pos = 100;
    thumb.write(pos);
    index.write(pos);
    middle.write(pos);
    ring.write(pos);
    pinky.write(pos);
    delay(5);                  
  }
}
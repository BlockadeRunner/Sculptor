#include <Servo.h>

// Declare finger servos
Servo thumb;
Servo index;
Servo middle;
Servo ring;
Servo pinky;

// threshold to trigger servo activation
const int threshValue = 400;

// servo position
int pos = 0;

void setup()
{
  Serial.begin(9600);
  // Link pins to servos
  thumb.attach(13);
  index.attach(12);
  middle.attach(11);
  ring.attach(10);
  pinky.attach(9);

  pinMode(8, INPUT_PULLUP);
}

void loop()
{
  // read in muscle sensor value
  int value = analogRead(A3);
  Serial.println(value);

  // if less than threshhold value, reset (or relax hand)
  if(value < threshValue && digitalRead(8) != 0)
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
    Serial.println("Servos Active!");
    pos = 180;
    thumb.write(pos);
    index.write(pos);
    middle.write(pos);
    ring.write(pos);
    pinky.write(pos);
    delay(5);                  
  }
}
#define LEFT1 0 //direction ?
#define LEFT2 1 //speed ?
#define RIGHT1 2 //direction ?
#define RIGHT2 3 //speed ?

#include <Wire.h>
#include "src/Adafruit_PWMServoDriver/Adafruit_PWMServoDriver.h"

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x43);

void setup() {
  
  pwm.begin();
  stop();
}

void loop() {
  //when going forward the lower the 1st number seems to make it go faster
  //both 1st numbers should be the same, and a zero for the 2nd number
  pwm.setPWM(LEFT1, 1000, 0);  //left forward
  pwm.setPWM(LEFT2, 1000, 0);  //full speed   
  delay(3000);
  stop();
  pwm.setPWM(RIGHT1, 1000, 0); //right forward
  pwm.setPWM(RIGHT2, 1000, 0); //full speed
  delay(3000);
  stop();
  //when going backward the high numbers make it go faster
  //Motor1 should set the 1st number, and Motor2 should set the 2nd number
  //both numbers should be the same, and the opposite number should be zero.
  pwm.setPWM(LEFT1, 3000, 0); //left backward
  pwm.setPWM(LEFT2, 0, 3000);
  delay(3000);
  stop();
  pwm.setPWM(RIGHT1, 3000, 0); //right backward
  pwm.setPWM(RIGHT2, 0, 3000);
  delay(3000);
  stop();
  while(1);
  
}

void stop() {
  pwm.setPWM(LEFT1, 0, 4096);   //off
  pwm.setPWM(LEFT2, 0, 4096);   //off
  pwm.setPWM(RIGHT1, 0, 4096);   //off
  pwm.setPWM(RIGHT2, 0, 4096); //off
  
}

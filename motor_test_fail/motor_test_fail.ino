#define LEFT1 0 //direction ?
#define LEFT2 1 //speed ?
#define RIGHT1 2 //direction ?
#define RIGHT2 3 //speed ?

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x43);

void setup() {
  
  pwm.begin();
  stop();
}

void loop() {
  pwm.setPWM(LEFT1, 1000, 0);  //left forward
  pwm.setPWM(LEFT2, 1000, 0);  //full speed   
  delay(3000);
  stop();
  pwm.setPWM(RIGHT1, 1000, 0); //right forward
  pwm.setPWM(RIGHT2, 1000, 0); //full speed
  delay(3000);
  stop();
  pwm.setPWM(LEFT1, 1000, 0); //left backward
  pwm.setPWM(LEFT2, 0, 1000);
  delay(3000);
  stop();
  pwm.setPWM(RIGHT1, 1000, 0); //right backward
  pwm.setPWM(RIGHT2, 0, 1000);
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

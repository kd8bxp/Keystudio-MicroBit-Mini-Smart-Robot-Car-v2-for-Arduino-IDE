#define RED 6
#define GREEN 5
#define BLUE 4

#include <Wire.h>
#include <Adafruit_PWMServoDriver.h>

Adafruit_PWMServoDriver pwm = Adafruit_PWMServoDriver(0x43);

void setup() {
  
  pwm.begin();
    //pwm.setPWMFreq(1600);  // This is the maximum PWM frequency

  pwm.setPWM(RED, 4096, 0);   //blue off
  pwm.setPWM(GREEN, 4096, 0);   //green off
  pwm.setPWM(BLUE, 4096, 0);   //red off
}

void loop() {
  pwm.setPWM(BLUE, 4096, 0);  //off
  pwm.setPWM(RED, 4096, 0);  //off     
  //delay(2000);
  pwm.setPWM(RED, 0, 4096);  //on     
  delay(2000);
  pwm.setPWM(RED, 4096, 0);  //off
  pwm.setPWM(GREEN, 4096, 0);  //off     
  //delay(2000);
  pwm.setPWM(GREEN, 0, 4096);  //on     
  delay(2000);
  pwm.setPWM(GREEN, 4096, 0);  //off
  pwm.setPWM(BLUE, 4096, 0);  //off     
  //delay(2000);
  pwm.setPWM(BLUE, 0, 4096);  //on     
  delay(2000);
  pwm.setPWM(BLUE, 4096, 0);  //off
  pwm.setPWM(RED, 4096, 0);  //off  
  for (uint16_t i=0; i<4096; i +=8) {
    
      pwm.setPWM(BLUE, 0, (i + (4096/16)*BLUE) % 4096 ); //fade down
     // pwm.setPWM(BLUE, (i + (4096/16)*BLUE) % 4096, 0 );
    delay(20);
    }
}

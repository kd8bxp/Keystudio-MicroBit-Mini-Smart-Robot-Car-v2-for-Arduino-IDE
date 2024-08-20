# Archived Aug 20, 2024

I no longer own either the robot, or a Micro:Bit controller. This project was for the original Micro:bit v1.  I never finished this project, it is left for historical reasons. No support will be provided. 
It will most likely still work if you have the correct hardware, and you are welcome to continue to work on this project if you like. 

# Keystudio Micro:Bit Mini Smart Robot Car for the Arduino IDE

This is a incomplete project, I'll probably never finish it, provided as-is.  
Please share any progress you may make on this project, if you work on it. :-)   

https://wiki.keyestudio.com/Ks0426_keyestudio_Micro:bit_Mini_Smart_Robot_Car_Kit_V2  

What works:  
Front LEDs - thou they could be better, and may require some more messing with.  
Motors - was able to drive the motors, but didn't finish - the motors current run at full speed.  
Speaker/Buzzer - works (really the only thing that does for sure).  
Photoresistor - works, but no sketch is using it.  
NewPing - Ultrasonic works, using the NewPing simple example. (Although the NewPing library says that it is not compatible with the Micro:bit, it does work).  
What needs worked on:  
IR sensors, IR remote, better motor control.  

What may never work:  
Neopixels on pin 5 - I've tried both Adafruit Neopixel Library, and FastLED with no joy.  

Feel free to update or do with this as you will.  

## Installation

You will need to install the Micro:bit board into the Arduino IDE, following the steps here:  
https://learn.adafruit.com/use-micro-bit-with-arduino  
and here: 
https://github.com/sandeepmistry/arduino-nRF5  

Linux Users will also need to update udev rules if you have already done so:
(although not specific for this board, these rules do work):
https://github.com/RedBearLab/nRF51822-Arduino/issues/73  

@bapowell writes on Sep 4, 2016  
 "   I had the same problem (under Ubuntu 14.04). After much googling, I found this: openocd.udev, which shows the following udev rules for the CMSIS-DAP device:
        # mbed CMSIS-DAP
ATTRS{idVendor}=="0d28", ATTRS{idProduct}=="0204", MODE="664", GROUP="plugdev"
KERNEL=="hidraw*", ATTRS{idVendor}=="0d28", ATTRS{idProduct}=="0204", MODE="664", GROUP="plugdev"  
       After ensuring that my userid was a member of the plugdev group, I created a new udev rules file, /etc/udev/rules.d/98-blenano.rules, with these rules; then reloaded with $ sudo udevadm control --reload-rules, plugged in the MK20 device, and it worked."    
Linux Users may also need to install:  
gcc-arm-none-eabi from your package manager, and will want to follow closely the setup instructions from Sandeepmistry.  

When uploading a sketch make sure you also have selected a "softdevice" S110 seems to work nicely.  IF you forget, you may run into problems uploading a new sketch, in which case you'll need to put a Micro:Bit hex file on the device and that should fix the problem.  


## Libraries Required

NewPing: https://github.com/eliteio/Arduino_New_Ping  
Adafruit Micro:Bit Library: https://github.com/adafruit/Adafruit_Microbit  
Arduino-BLEPerpheral Library: https://github.com/sandeepmistry/arduino-BLEPeripheral  

Experimental, but useful: Sparkfun's Mag3110 compass library - https://github.com/sparkfun/SparkFun_MAG3110_Breakout_Board_Arduino_Library  

## Libraries

Because the Arduino IDE has been getting pretty bad handling libraries, I've included the libraries used in the src directory of the sketch. These libraries may have been slightly modified to work from the sketch directory, and do not include the examples.  


## Things To Do

LOTS OF STUFF, most of which I'll never get to doing, but please if you make any changes, update me here.  


## Contributing

1. Fork it!
2. Create your feature branch: `git checkout -b my-new-feature`
3. Commit your changes: `git commit -am 'Add some feature'`
4. Push to the branch: `git push origin my-new-feature`
5. Submit a pull request

## Support Me

If you find this or any of my projects useful or enjoyable please support me.  
Anything I do get goes to buy more parts and make more/better projects.  
https://www.patreon.com/kd8bxp  
https://ko-fi.com/lfmiller  
https://www.paypal.me/KD8BXP  

## Other Projects

https://www.youtube.com/channel/UCP6Vh4hfyJF288MTaRAF36w  
https://kd8bxp.blogspot.com/  


## Credits

Copyright (c) 2020 LeRoy Miller

## License

This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses>

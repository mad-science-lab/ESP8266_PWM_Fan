# ESP8266_PWM_Fan
Simple Arduino sketch to controls a 4-wire 12v fan from an esp8266 board

## Hardware
* esp8266 board
* 12v 4 wire fan
* 12v power supply

### Setup 
* Fan positive and ground connected to 12v power supply
* Ground from power supply conneted to esp ground
* Pin D8 (GPIO15) connected to the fans PWM

## Software
Adjust "fanSpead" between 1 and 100 to control the spead of the fan.

## Warning 
Working and playing with electricity can be dangerous. You can damage components, get shocked, or die. I am in no way responsible for any losses or damages you may encounter by reading or implementing any of the information provided. Please be careful and double-check your wiring before plugging anything in, and never change your wiring while your circuit is powered. By using this information, you are accepting personal responsibility for your actions.    


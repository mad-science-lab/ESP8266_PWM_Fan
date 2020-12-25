/*
 * Hardware
 *  esp8266 board
 *  12v 4 wire fan
 *  12v power supply
 *  
 * Setup 
 *  Fan positive and ground connected to 12v power supply
 *  Ground from power supply conneted to esp ground
 *  Pin D8 (GPIO15) connected to the fans PWM
 * 
 * Adjust fanSpead between 1 and 100
 * 
 */

int fanPin = 15;

void setup() {
  Serial.begin(115200);

  pinMode(fanPin, OUTPUT);                             // sets the pin as outputs:
  analogWriteRange(100);                               // range 1 - 100 for the fan
  analogWriteFreq(10000);
}

void controlFan (int fanSpeed) {

  analogWrite(fanPin, fanSpeed);                       // set the fan speed

                  Serial.print("Fan Speed: \t\t");
                  Serial.print(fanSpeed);
                  Serial.println("%");  
}

void loop() {

  int fanSpeed = random(20, 100);                      // pick a random number for fan speed
  controlFan(fanSpeed);                                // Call the fan control function; update fan speed
  delay(30000);                                        

}

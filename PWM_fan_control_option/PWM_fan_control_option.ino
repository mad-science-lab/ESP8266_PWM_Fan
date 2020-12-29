/*
 * Hardware
 *  esp8266 board
 *  2n2222 transitor 
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

int fanPin = 16;
int offPin = 14;
int i;  

void setup() {
  delay(2000);
  Serial.begin(115200);
  delay(2000);
  Serial.println("Hello World!");  

  pinMode(fanPin, OUTPUT);                             // sets the pin as outputs:
  analogWriteRange(100);                               // range 1 - 100 for the fan
  analogWriteFreq(20000);                              //analogWriteFreq(10000);

//5000 = 200us(microseconds)
//10000 = 100us

  pinMode(offPin, OUTPUT);
}

void controlFan (int fanSpeed) {

  if (fanSpeed < 10){                                 // turn fan off if dutycycle is <
      digitalWrite(offPin, LOW);
                  Serial.println("Fan OFF");
  } else {
      analogWrite(fanPin, fanSpeed);                   // set the fan speed
      delay(100);
      digitalWrite(offPin, HIGH);                      // turn fan on
                  Serial.print("Fan Speed: \t\t");
                  Serial.print(fanSpeed);
                  Serial.println("%");  
  }
}

void loop() {
  for(i = 0; i <= 100; i = i + 25) {
    Serial.print("i = "); Serial.println(i);          // print the pwm value 
    controlFan(i);     
  delay(5000);
  }
}

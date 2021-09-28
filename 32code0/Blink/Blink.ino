int led = 6;           // the input pin is 6
int brightness = 255;    // the brightness of the LED  

void setup() {
  pinMode(led, OUTPUT);
}

// allows LED switching back and forth
void loop() {
  analogWrite(led, brightness);
  brightness = brightness -5;
  
  if (brightness <= 0) {
    brightness = 255;
  }
  delay(30);
}

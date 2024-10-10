#include <Arduino.h>
void setup() {
  Serial.begin(115200); 
  Serial.println("setup"); 
  analogReadResolution(12); 
}
void loop() {
  int ldrValue = analogRead(LDR); 
  Serial.print(">ADC Value: ");
  Serial.println(ldrValue);  

  delay(1000); 
}

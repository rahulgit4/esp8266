int adc_value=0;
void setup() {
  Serial.begin(115200);

}

void loop() {
  adc_value=analogRead(A0);
  Serial.println(adc_value);
  delay(100);

}

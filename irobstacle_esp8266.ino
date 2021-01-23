int adc_value=0;
void setup() {
  pinMode(16,OUTPUT);
  Serial.begin(115200);

}

void loop() {
  adc_value=analogRead(A0);
  Serial.println(adc_value);
  if(adc_value>30)
  {
    digitalWrite(16,HIGH);
  }
  else
  {
    digitalWrite(16,LOW);
  }
  delay(100);

}

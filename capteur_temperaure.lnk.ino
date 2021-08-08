void setup() {
  Serial.begin(9600);

}

void loop() {
  float valeur_A4 = analogRead(A4);
  float temperature = (5*valeur_A4/1023)*100;
  Serial.println(temperature);

  delay(400);

}

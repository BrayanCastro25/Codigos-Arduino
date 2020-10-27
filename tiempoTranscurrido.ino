unsigned long tiempo2, tiempo1;
int tiempo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tiempo1 = millis();
  delay(1000); // Tramo de código que requiere contabilizar el tiempo.
  tiempo2 = millis();
  tiempo = tiempo2 - tiempo1;
  Serial.println(tiempo);
}

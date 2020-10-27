unsigned long tiempo2, tiempo1;
int tiempo;

void setup() {
  Serial.begin(9600);
}

void loop() {
  tiempo1 = millis();
  delay(1000);
  tiempo2 = millis();
  tiempo = tiempo2 - tiempo1;
  Serial.println(tiempo);
}

void setup() {
  Serial.begin(9600); // Tu sme inicializovali sériovú komunikáciu, rýchlosť 9600 bitov za sekundu
  pinMode(3, INPUT); // Ľavé tlačidlo (dopredu)
  pinMode(2, INPUT); // Pravé tlačidlo (brzda)
}

void loop() {
  bool forwardButton = !digitalRead(3); // Čítanie stavu ľavého tlačidla
  bool brakeButton = !digitalRead(2);   // Čítanie stavu pravého tlačidla

  // Posielame údaje vo formáte: "forwardButton, brakeButton", údaje sa vypisujú na konzole
  Serial.print(forwardButton);
  Serial.print(",");
  Serial.println(brakeButton);
}
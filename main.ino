// Created By Jakub Malhotra
// Created On September 2023
// Bink With Variable

int blinkTime = 1000;

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(blinkTime); // Wait for 1000 millisecond(s)
  
  blinkTime = blinkTime + 1000;//adds 1000ms to wait time
}

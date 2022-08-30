#define button 8 // Connect arduino pin 8 to 20K resistor at the Base terminal



void setup() {
  // put your setup code here, to run once:
pinMode(button, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(button, HIGH);
  delay(100);
  digitalWrite(button, LOW);
  delay(100);
}

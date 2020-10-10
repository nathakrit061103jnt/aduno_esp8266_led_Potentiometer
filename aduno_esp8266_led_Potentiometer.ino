int LED1 = D1;
void setup() {
  // initialize serial communication at 9600 bits per second:
  pinMode(D1, OUTPUT);
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  delay(500);        // delay in between reads for stability

  digitalWrite(LED1, HIGH);   // turn the LED on (HIGH is the voltage level)
  analogWrite(LED1, sensorValue); 

}

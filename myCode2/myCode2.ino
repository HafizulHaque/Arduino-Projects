
void setup() {
  Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int val = digitalRead(2);
  if(val==1){
    digitalWrite(12, HIGH);
    digitalWrite(13, LOW);
  }
  else{
    digitalWrite(12, LOW);
    digitalWrite(13, HIGH);
  }
  Serial.println(val);
  delay(100);
}

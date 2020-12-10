int trigPin = 11;
int echoPin = 12;
int output = 13;
long duration, distance;

void setup() {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(output, OUTPUT);
}

void loop() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  pinMode(echoPin, INPUT);
  duration = pulseIn(echoPin, HIGH);
  distance = (duration/2)/29.1;

  if(distance < 10){
    digitalWrite(output, HIGH);
  }else{
    digitalWrite(output, LOW);
  }

  Serial.print(distance);
  Serial.println(" centimeters");
  delay(250);

}

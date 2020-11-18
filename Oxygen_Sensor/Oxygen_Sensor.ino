#define echoPin 2 // attach pin D2 Arduino to pin Echo of HC-SR04
#define trigPin 3 //attach pin D3 Arduino to pin Trig of HC-SR04

// defines variables
unsigned long duration; // variable for the duration of sound wave travel
float distance; // variable for the distance measurement
float Speed;

void setup() {
  pinMode(trigPin, OUTPUT); // Sets the trigPin as an OUTPUT
  pinMode(echoPin, INPUT); // Sets the echoPin as an INPUT
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  Serial.println("Ultrasonic Sensor HC-SR04 Test"); // print some text in Serial Monitor
}
void loop() {
  // Clears the trigPin condition
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  // Sets the trigPin HIGH (ACTIVE) for 10 microseconds
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(20);
  digitalWrite(trigPin, LOW);
  // Reads the echoPin, returns the sound wave travel time in microseconds
  duration = pulseIn(echoPin, HIGH);
  // Calculating the speed and distance 
   distance = duration * 0.0343;
   Speed = 3.64/(duration*0.000001);
  // Displays on the Serial Monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.print("cm, Duration: ");
  Serial.print(duration);
  Serial.print(", Speed: ");
  Serial.print(Speed);
  Serial.println(" m/s");
  delay(500);
}

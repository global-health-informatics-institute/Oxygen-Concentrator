
int leftFeed=6;
int rightFeed=2;
int rightWaste=4;
int leftWaste=5;
int equalizer=3;

int sensorPin = A0;    // Select input pin for the potentiometer
int sensorValue = 0;   // Variable stores value coming from the sensor


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(leftFeed,OUTPUT);
  pinMode(rightFeed,OUTPUT);
  pinMode(rightWaste,OUTPUT);
  pinMode(leftWaste,OUTPUT);
  pinMode(equalizer,OUTPUT);
  
  digitalWrite(leftFeed,HIGH);
  digitalWrite(leftWaste,HIGH);
  digitalWrite(rightFeed,HIGH);
  digitalWrite(rightWaste,HIGH);
  digitalWrite(equalizer,LOW);
  delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:


  /*sensorValue = analogRead(sensorPin);   // Read sensor
  float sensorVoltage = sensorValue*(5.0/1023.0);
  float kPa = (sensorVoltage-0.2)/0.009;
  float PSI = kPa * 0.145037738;

  Serial.print("Sensor Volatage ");
  Serial.print( sensorVoltage);
  Serial.print("/ ");
  Serial.print( kPa);
  Serial.print("kPa ");
  Serial.print(PSI);
  Serial.println("PSI");
  delay(1000);       // Wait 400 milliseconds

  if (sensorVoltage >= 0.5) 
   {
     (ledPin, HIGH);
     delay(500);
     digitalWrite(bluPin, LOW);
    delay(1000);
   } 
   else
   {
     digitalWrite(bluPin, HIGH);
     delay(500);
    digitalWrite(ledPin, LOW);
     delay(1000);
  } */

  digitalWrite(leftFeed,HIGH);
  digitalWrite(leftWaste,LOW);
  digitalWrite(rightFeed,LOW);
  digitalWrite(rightWaste,HIGH);
  digitalWrite(equalizer,LOW);
  delay(8000);
  
  digitalWrite(leftFeed,HIGH);
  digitalWrite(leftWaste,LOW);
  digitalWrite(rightFeed,LOW);
  digitalWrite(rightWaste,LOW);
  digitalWrite(equalizer,HIGH);
  delay(1000);
  
  digitalWrite(leftFeed,LOW);
  digitalWrite(leftWaste,LOW);
  digitalWrite(rightFeed,HIGH);
  digitalWrite(rightWaste,LOW);
  digitalWrite(equalizer,HIGH);
  delay(1000);
  
  digitalWrite(leftFeed,LOW);
  digitalWrite(leftWaste,HIGH);
  digitalWrite(rightFeed,HIGH);
  digitalWrite(rightWaste,LOW);
  digitalWrite(equalizer,LOW);
  delay(8000);
  
  digitalWrite(leftFeed,LOW);
  digitalWrite(leftWaste,LOW);
  digitalWrite(rightFeed,HIGH);
  digitalWrite(rightWaste,LOW);
  digitalWrite(equalizer,HIGH);
  delay(1000);
  
  digitalWrite(leftFeed,HIGH);
  digitalWrite(leftWaste,LOW);
  digitalWrite(rightFeed,LOW);
  digitalWrite(rightWaste,LOW);
  digitalWrite(equalizer,HIGH);
  delay(1000);

}


int leftFeed=6;
int rightFeed=2;
int rightWaste=4;
int leftWaste=5;
int equalizer=3;
//int ledPin = 11;
//int bluPin = 12;
//int lfLed = 6;
//int rfLed = 2;
//int rwLed = 4;
//int lwLed = 5;
//int eqLed = 3;



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
  //pinMode (ledPin, OUTPUT);
  //pinMode (bluPin, OUTPUT);
  //pinMode (lfLed, OUTPUT);
  //pinMode (rfLed, OUTPUT);
  //pinMode (rwLed, OUTPUT);
  //pinMode (lwLed, OUTPUT);
  //pinMode (eqLed, OUTPUT);
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
  } 
digitalWrite(leftFeed,LOW);
digitalWrite(rightWaste,LOW);
Serial.println("LF AND RW VALVE OFF");
digitalWrite(lfLed, LOW);
digitalWrite(rwLed, LOW);
delay(10000);*/

digitalWrite(equalizer,LOW);
digitalWrite(leftFeed,LOW);
digitalWrite(rightWaste,HIGH);
Serial.println("RIGHT WASTE VALVE ON");
//digitalWrite(eqLed, LOW);
//digitalWrite(lfLed, LOW);
//digitalWrite(rfLed, HIGH);
delay(2000);

Serial.println("");
Serial.println("*************************");

digitalWrite(equalizer,LOW);
digitalWrite(rightFeed,LOW);
digitalWrite(leftFeed,HIGH);
digitalWrite(rightWaste,HIGH);
Serial.println("RW AND  LF VALVE ON");
//digitalWrite(eqLed, LOW);
//digitalWrite(rfLed, LOW);
//digitalWrite(lfLed, HIGH);
//digitalWrite(rwLed, HIGH);
delay(2000);

Serial.println("");
Serial.println("*************************");

digitalWrite(leftWaste,LOW);
digitalWrite(rightFeed,LOW);
digitalWrite(leftFeed,HIGH);
digitalWrite(rightWaste,HIGH);
digitalWrite(equalizer,HIGH);
Serial.println("LF RW EQ VALVE ON");
//digitalWrite(lwLed, LOW);
//digitalWrite(rfLed, LOW);
//digitalWrite(eqLed, HIGH);
//digitalWrite(rwLed, HIGH);
//digitalWrite(lfLed, HIGH);
delay(10000);

Serial.println("");
Serial.println("*************************");

digitalWrite(equalizer,LOW);
digitalWrite(rightFeed,LOW);

digitalWrite(leftFeed,HIGH);
digitalWrite(rightWaste,HIGH);
digitalWrite(leftWaste,HIGH);
Serial.println("LW RW LF VALVE ON");
//digitalWrite(eqLed, LOW);
//digitalWrite(rfLed, LOW);
//digitalWrite(lwLed, HIGH);
//digitalWrite(lfLed, HIGH);
//digitalWrite(rwLed, HIGH);
delay(2000);

Serial.println("");
Serial.println("*************************");

digitalWrite(equalizer,LOW);
digitalWrite(leftFeed,LOW);
digitalWrite(rightWaste,HIGH);
digitalWrite(equalizer,HIGH);
digitalWrite(rightFeed,HIGH);
Serial.println("RW EQ RF VALVE ON");
//digitalWrite(eqLed, LOW);
//digitalWrite(lfLed, LOW);
//digitalWrite(rwLed, HIGH);
//digitalWrite(eqLed, HIGH);
//digitalWrite(rfLed, HIGH);
delay(2000);

}

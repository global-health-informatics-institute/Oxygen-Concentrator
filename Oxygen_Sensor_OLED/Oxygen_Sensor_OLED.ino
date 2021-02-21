#include <Wire.h>
// Include Adafruit Graphics & OLED libraries
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>

// Reset pin not used but needed for library
#define OLED_RESET 4
Adafruit_SSD1306 display(OLED_RESET);

byte variable[80];
byte index = 0;
byte incomingByte, LowerByte, UpperByte;
int oxygen1, oxygen2;
float flow1, flow2, flowrate = 0;

// unsigned int Reading[12], Flip[12];
bool stringComplete = false;  // whether the string is complete

void setup()
{
  int error;

  Serial.begin(9600, SERIAL_8N1);
  
  // See http://playground.arduino.cc/Main/I2cScanner
  Wire.begin();
  // initialize OLED with I2C addr 0x3C
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);
  
} // setup()
void displayOxygenFlow(){
  while(!Serial.available()); // wait for a character
  incomingByte = Serial.read();
  if (incomingByte == 0x16) {
      // Clear the display
      display.clearDisplay();
      //Set the color - always use white despite actual display color
      display.setTextColor(WHITE);
      //Set the font size
      display.setTextSize(1);
      //Set the cursor coordinates
      display.setCursor(35,0);
      display.print("From OpenO2");
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
      // Get purity
      while(!Serial.available()); // wait for a character
      UpperByte = Serial.read();
      while(!Serial.available()); // wait for a character
      LowerByte = Serial.read();
      oxygen1 = (UpperByte * 256) ;
      oxygen2 = LowerByte;
      display.setCursor(0,10); 
      display.print("Oxygen:    "); 
      display.print((oxygen1+oxygen2)/10);
      display.print(" %");
      Serial.print((oxygen1+oxygen2)/10);  
      Serial.print(", "); 
      
      // Get flow rate
      while(!Serial.available()); // wait for a character
      UpperByte = Serial.read();
      while(!Serial.available()); // wait for a character
      LowerByte = Serial.read();
      flow1 = UpperByte * 256 ;
      flow2 = LowerByte;
      flowrate = (flow1+flow2)/10;
      display.setCursor(0,20);
      display.print("  Flow:    ");
      display.print(flowrate);
      display.print(" lpm");
      Serial.println(flowrate);
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
      while(!Serial.available()); // wait for a character
      incomingByte = Serial.read();
    }
}
void loop() {
  displayOxygenFlow(); 
  display.display();
} // loop()   

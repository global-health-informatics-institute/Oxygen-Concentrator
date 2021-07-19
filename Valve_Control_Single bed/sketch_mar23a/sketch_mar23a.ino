
int rightFeed=4;
int feed=3;
int waste=3;
int valve_loop_count=10;
char STATE='F';
int Loop;

byte variable[80];
byte index = 0;
byte incomingByte, LowerByte, UpperByte;
float oxygen1, oxygen2;
bool stringComplete = false; 
  
void setup() {
  Serial.begin(9600);
  pinMode(rightFeed,OUTPUT);
 digitalWrite(rightFeed,LOW);
 }

void loop() {
  // put your main code here, to run repeatedly:
    
   // for (feed=9;feed<=12;feed++){
    // for(waste=9;waste<=feed;waste++){
      for (Loop=1;Loop<=600;Loop++){
         UPDATE_VALUES();
        //Get_Purity();
        //Serial.print(valve_loop_count);
        //Serial.println(STATE);
        delay(500);
      }  
  // }
  //}
}  

void UPDATE_VALUES(){
  if (STATE=='F'){
    if (valve_loop_count >0)
      valve_loop_count =  valve_loop_count-1;
    else {
      digitalWrite(rightFeed,HIGH);
      valve_loop_count=waste*2;
      STATE='W';
    }
  } else if (STATE=='W'){
    if (valve_loop_count >0)
      valve_loop_count =  valve_loop_count-1;
    else {
      digitalWrite(rightFeed,LOW);
      valve_loop_count=feed*2;
      STATE='F';
    }
  }
}


/*void Get_Purity(){
  while(!Serial.available()); // wait for a character
    incomingByte = Serial.read();
  if (incomingByte == 0x16) {
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
    Serial.print("Oxygen purity=");      
    Serial.print((oxygen1+oxygen2)/10,1);      
    Serial.println(" %");
  }
}?*/

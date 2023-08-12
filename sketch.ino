



//////////// input on and off //////
#define ledred 2
#define ledyellow 4
#define ledgreen 5
void setup() {
Serial.begin(115200);
pinMode(ledred, OUTPUT);
pinMode(ledyellow, OUTPUT);
pinMode(ledgreen, OUTPUT);
}
void loop() {
   if(Serial.available()){
      String input = Serial.readStringUntil('\n');
      if(input == "red"){
        digitalWrite(ledred, 1);
        digitalWrite(ledyellow,0);
        digitalWrite(ledgreen,0);
        Serial.println("ledred is turn on");
      }
      else if(input == "yellow"){
        digitalWrite(ledyellow, 1);
        digitalWrite(ledred,0);
        digitalWrite(ledgreen,0);
        Serial.println("ledyellow is turn on");
      }
      else if(input == "green"){
        digitalWrite(ledgreen,1);
        digitalWrite(ledyellow,0);
        digitalWrite(ledred,0);
        Serial.println("ledgreen is turn on");
      }
      else if(input == "traffic"){
        digitalWrite(ledgreen,1);
        delay(3000);
        digitalWrite(ledgreen,0);

        digitalWrite(ledyellow,1);
        delay(1000);
        digitalWrite(ledyellow,0);
        delay(1000);
        digitalWrite(ledyellow,1);
        delay(1000);
        digitalWrite(ledyellow,0);
        delay(1000);
        digitalWrite(ledyellow,1);
        delay(1000);
        digitalWrite(ledyellow,0);
        delay(1000);
        

        digitalWrite(ledred,1);
        Serial.println("Stop please!!!!!!!!");
        delay(5000);
        digitalWrite(ledred,0);
        
      }
    }
}

 ///// low and hight//////
// #define ledRed 2

// void setup(){
// Serial.begin(115200);
// pinMode(ledRed, OUTPUT);
// }
// void loop(){
// for(int count=0; count < 255; count+=51){
// Serial.println(count);
// analogWrite(ledRed, count);
// delay(2000);
// }
// for(int count=255; count > 0; count-=51){
// Serial.println(count);
// analogWrite(ledRed, count);
// delay(2000);
// }
// }




///////////// digital///////////
// void setup() {
// pinMode(ledRed, OUTPUT);
// pinMode(ledBlue, OUTPUT);
// Serial.begin(baudrate);
// }
// void loop() {
//   digitalWrite(ledRed, HIGH);
//   Serial.println("ledRed ON  ledBlue Of");
//   delay(1000);
//   digitalWrite(ledRed, LOW);

//   digitalWrite(ledBlue, HIGH);
//     Serial.println("ledRed Of  ledBlue On ");
//   delay(1000);
//   digitalWrite(ledBlue,LOW); 
// }

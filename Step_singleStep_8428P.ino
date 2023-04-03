#define SLEEP 5
#define AIN1 8
#define AIN2 9
#define BIN1 14
#define BIN2 15
#define DELAYHIGH 5000

void setup() {
  Serial.begin(115200);
   digitalWrite(SLEEP,LOW);
   pinMode(SLEEP,OUTPUT);
   digitalWrite(AIN1,LOW);
   pinMode(AIN1,OUTPUT);
   digitalWrite(AIN2,LOW);
   pinMode(AIN2,OUTPUT);
   digitalWrite(BIN1,LOW);
   pinMode(BIN1,OUTPUT);
   digitalWrite(BIN2,LOW);
   pinMode(BIN2,OUTPUT);
   }

void loop() {
 if (Serial.available()) {
      char c = Serial.read();
      if (c == 'f') {
        digitalWrite(SLEEP,HIGH);
        step();
        digitalWrite(SLEEP,LOW);                           
         }
      else if (c == 'r') {
         digitalWrite(SLEEP,HIGH);
         stepBack();
         digitalWrite(SLEEP,LOW);
         }
 }
   
}


void step(){
      digitalWrite(AIN1,HIGH);
      digitalWrite(AIN2,LOW);
      digitalWrite(BIN1,HIGH);
      digitalWrite(BIN2,LOW);
      delayMicroseconds(DELAYHIGH);
     
      digitalWrite(AIN1,LOW);
      digitalWrite(AIN2,HIGH);
      digitalWrite(BIN1,HIGH);
      digitalWrite(BIN2,LOW);
      delayMicroseconds(DELAYHIGH);
      
      digitalWrite(AIN1,LOW);
      digitalWrite(AIN2,HIGH);
      digitalWrite(BIN1,LOW);
      digitalWrite(BIN2,HIGH);
      delayMicroseconds(DELAYHIGH);
      
      digitalWrite(AIN1,HIGH);
      digitalWrite(AIN2,LOW);
      digitalWrite(BIN1,LOW);
      digitalWrite(BIN2,HIGH);
      delayMicroseconds(DELAYHIGH);
}


void stepBack(){
      digitalWrite(AIN1,HIGH);
      digitalWrite(AIN2,LOW);
      digitalWrite(BIN1,LOW);
      digitalWrite(BIN2,HIGH);
      delayMicroseconds(DELAYHIGH);

      digitalWrite(AIN1,LOW);
      digitalWrite(AIN2,HIGH);
      digitalWrite(BIN1,LOW);
      digitalWrite(BIN2,HIGH);
      delayMicroseconds(DELAYHIGH);
      
      digitalWrite(AIN1,LOW);
      digitalWrite(AIN2,HIGH);
      digitalWrite(BIN1,HIGH);
      digitalWrite(BIN2,LOW);
      delayMicroseconds(DELAYHIGH);
      
      digitalWrite(AIN1,HIGH);
      digitalWrite(AIN2,LOW);
      digitalWrite(BIN1,HIGH);
      digitalWrite(BIN2,LOW);
      delayMicroseconds(DELAYHIGH);
     

      

      

}

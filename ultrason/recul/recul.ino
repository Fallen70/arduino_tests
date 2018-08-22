//www.elegoo.com
//2016.12.08

int trig = 12;
int echo = 11;
long lecture_echo;
long cm;
 
int duration = 500;  // 500 miliseconds
 int beep;
void setup() {
   Serial.begin(9600);
   pinMode( trig, OUTPUT );
   digitalWrite( trig, LOW );
   pinMode( echo, INPUT);
}
 
void loop() {
   beep = 0;  
   digitalWrite( trig, HIGH );
   delayMicroseconds(10);
   digitalWrite(trig, LOW );
   lecture_echo = pulseIn( echo, HIGH );
   cm = lecture_echo / 58;
   Serial.print("Distance : ");
   Serial.println(cm);
   if ( cm <= 30 && cm > 20 ) {
     beep = 500;
   }
   if ( cm <= 20 && cm > 10 ) {
      beep = 250;
   }
   if ( cm <= 10 && cm > 0 ) {
      beep = 125;
   }
  
   if ( cm <= 30 ) {
     tone(8, 440, beep);
   }
   delay(beep*2);

}






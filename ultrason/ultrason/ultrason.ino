//www.elegoo.com
//2016.12.08
int trig = 12;
int echo = 11;


long lecture_echo;
long cm;

void setup() {
   Serial.begin(9600);
   pinMode( trig, OUTPUT );
   digitalWrite( trig, LOW );
   pinMode( echo, INPUT);
   
}

void loop() {
   digitalWrite( trig, HIGH );
   delayMicroseconds(10);
   digitalWrite(trig, LOW );
   lecture_echo = pulseIn( echo, HIGH );
   cm = lecture_echo / 58;
   Serial.print("Distance : ");
   Serial.println(cm);
   delay(1000);
}


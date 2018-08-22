//www.elegoo.com
//2016.12.12

/************************
Exercise the motor using
the L293D chip
************************/

#define ENABLEG 11
#define DIRAG 10
#define DIRBG 9

#define ENABLED 5
#define DIRAD 3
#define DIRBD 4


int i;
 
void setup() {
  //---set pin direction
  pinMode(ENABLEG,OUTPUT);
  pinMode(ENABLED,OUTPUT);
  pinMode(DIRAG,OUTPUT);
  pinMode(DIRBG,OUTPUT);
  pinMode(DIRAD,OUTPUT);
  pinMode(DIRBD,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println("PWM full then slow");
  //---PWM example, full speed then slow
  analogWrite(ENABLEG,255); //enable on
  analogWrite(ENABLED,255); //enable on
  digitalWrite(DIRAG,HIGH); //one way
  digitalWrite(DIRBG,LOW);
  digitalWrite(DIRAD,HIGH); //one way
  digitalWrite(DIRBD,LOW);

  delay(2000);
}
   


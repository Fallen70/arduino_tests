//www.elegoo.com
//2016.12.9

int lightPin = 0;
int resultPin = 5;

void setup()
{
  
  Serial.begin(9600);
  pinMode(resultPin, OUTPUT);
}

void loop() 
{
  int reading  = analogRead(lightPin);
  int result = 255;
  if  ( reading <= 400 ) {
    result = 0;
  }

  analogWrite(resultPin, result);
  Serial.print( reading );
 Serial.println(  "" );
  
}




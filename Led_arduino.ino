// Variables

int pinLED = 13 ; 

int delay_time_pinpin =  40 ; 

int delay_time_pin = 300; 

int final_delay = 50;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pinLED,HIGH);
  delay(delay_time_pinpin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pinpin);


   digitalWrite(pinLED,HIGH);
  delay(delay_time_pinpin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pinpin);
  
   digitalWrite(pinLED,HIGH);
  delay(delay_time_pinpin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pinpin);
  
  digitalWrite(pinLED,HIGH);
  delay(delay_time_pin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pin);

   
  digitalWrite(pinLED,HIGH);
  delay(delay_time_pin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pin);

   
  digitalWrite(pinLED,HIGH);
  delay(delay_time_pin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pin);
  
   
  digitalWrite(pinLED,HIGH);
  delay(delay_time_pinpin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pinpin);

   digitalWrite(pinLED,HIGH);
  delay(delay_time_pinpin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pinpin);

   digitalWrite(pinLED,HIGH);
  delay(delay_time_pinpin);
  digitalWrite(pinLED,LOW);
  delay(delay_time_pinpin);

  delay(final_delay);
}

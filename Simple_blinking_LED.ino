/*Simple Blinking LED.Turns on an LED on for one second,
 then off for one second, repeatedly.*/
 
int LEDOUT=7;
void setup() {
//initilize the digital pin as output.
pinMode(LEDOUT,OUTPUT);
}

  // the loop routine runs over and over again forever:
void loop() {

digitalWrite(LEDOUT,HIGH);// turnThe LED on
delay(1000);   // wait a second.
digitalWrite(LEDOUT,LOW); //turn the LED off
delay(1000); //wait a second.

}

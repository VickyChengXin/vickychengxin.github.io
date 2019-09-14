/// Blink with for loop
//
int LED = 13; // LED connected to digital pin 13
int i; // Variable to hold our random value
void setup()
{
pinMode(LED, OUTPUT); // sets the digital
// pin as output
}
void loop()
{
// set I to 1; while i is less that 100 increment i by one
for(int i = 1;i <=50000; i++){
digitalWrite(LED, HIGH); // turns the LED on
delay(i); // set delay based on the value of i
digitalWrite(LED, LOW); // turns the LED off
delay(i); // set delay based on the value of i
}
}

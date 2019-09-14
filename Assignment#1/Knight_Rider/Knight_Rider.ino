/* Knight Rider 1
 * --------------
 *
 * Basically an extension of Blink_LED.
 *
 *
 * (cleft) 2005 K3, Malmo University
 * @author: David Cuartielles
 * @hardware: David Cuartielles, Aaron Hallborg
 */

int pin2 = 2;
int pin3 = 3;
int pin4 = 4;
int pin5 = 5;
int pin6 = 6;
int pin7 = 7;
int timer = 100;

void setup(){
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  pinMode(pin4, OUTPUT);
  pinMode(pin5, OUTPUT);
  pinMode(pin6, OUTPUT);
  pinMode(pin7, OUTPUT);
}

void loop() {
   digitalWrite(2, HIGH);
   delay(200);
   digitalWrite(2, LOW);
   delay(200);

   digitalWrite(3, HIGH);
   delay(200);
   digitalWrite(3, LOW);
   delay(200);

   digitalWrite(4, HIGH);
   delay(200);
   digitalWrite(4, LOW);
   delay(200);

   digitalWrite(5, HIGH);
   delay(200);
   digitalWrite(5, LOW);
   delay(200);

   digitalWrite(6, HIGH);
   delay(200);
   digitalWrite(6, LOW);
   delay(200);

   digitalWrite(7, HIGH);
   delay(200);
   digitalWrite(7, LOW);
   delay(200);

   digitalWrite(6, HIGH);
   delay(200);
   digitalWrite(6, LOW);
   delay(200);

   digitalWrite(5, HIGH);
   delay(200);
   digitalWrite(5, LOW);
   delay(200);

   digitalWrite(4, HIGH);
   delay(200);
   digitalWrite(4, LOW);
   delay(200);

   digitalWrite(3, HIGH);
   delay(200);
   digitalWrite(3, LOW);
   delay(200);

   digitalWrite(2, HIGH);
   delay(200);
   digitalWrite(2, LOW);
   delay(200);
}

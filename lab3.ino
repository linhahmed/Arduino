// this program written by R. Kundagrami and edited by Dr. J. Leclerc at the Univeristy of Houston Department of Mechanical Engineering

int inByte = 0; // sets up the variable that will store incoming data from serial (keyboard)
const int ledPin = 13; // sets pin 10 as the pin to which the LED light is attached
const int time_base = 200; // sets a dot to 100 milliseconds
const int dash = 3*time_base; // sets a dash to 300 milliseconds

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600); // sets the serial keyboard to 9600 speed
pinMode(ledPin,OUTPUT);} // sets the LED pin to OUTPUT mode

void loop() {
  // put your main code here, to run repeatedly:

int inByte = 0; // resets serial variable to zero each time so Morse code only blinks once
 if (Serial.available() > 0){ // checks if there is any incoming data from the serial (keyboard)
  inByte = Serial.read();} // if yes, stores the incoming serial data into the inByte variable

// Morse code for a (dot dash) 
if (inByte == 'a'){ // checks if letter a was typed on serial
digitalWrite(ledPin,HIGH); // turns light on
delay(time_base); // delays for the time of a dot (100 milliseconds)
digitalWrite(ledPin,LOW); // turns off light
delay(time_base); // waits for time of a dot (Morse code specifies time between parts of a letter to be one dot)
digitalWrite(ledPin,HIGH); // turns on light
delay(dash); // delays for the time of a dash (3 times dot)
digitalWrite(ledPin,LOW); // turns off light
delay(3*time_base);} // waits for 3 times dot time (Morse code specifies the time between two letters to be 3 dots)

// Morse code for b (dash dot dot dot)
if (inByte == 'b'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for c (dash dot dash dot)
if (inByte == 'c'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for d (dash dot dot)
if (inByte == 'd'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

//Morse code for e (dot)
if (inByte == 'e') {
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for f (dot dot dash dot)
if (inByte == 'f'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for g (dash dash dot)
if (inByte == 'g'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for h (dot dot dot dot)
if (inByte == 'h'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for i (dot dot)
if (inByte == 'i'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for j (dot dash dash dash)
if (inByte == 'j'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for k (dash dot dash)
if (inByte == 'k'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for l (dot dash dot dot)
if (inByte == 'l'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for m (dash dash)
if (inByte == 'm'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for n (dash dot)
if (inByte == 'n'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for o (dash dash dash)
if (inByte == 'o'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for p (dot dash dash dot)
if (inByte == 'p'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for q (dash dash dot dash)
if (inByte == 'q'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for r (dot dash dot)
if (inByte == 'r'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for s (dot dot dot)
if (inByte == 's'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for t (dash)
if (inByte =='t'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for u (dot dot dash)
if (inByte =='u'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for v (dot dot dot dash)
if (inByte == 'v'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for w (dot dash dash)
if (inByte == 'w'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for x (dash dot dot dash)
if (inByte == 'x'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for y (dash dot dash dash)
if (inByte == 'y'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}


// Morse code for z (dash dash dot dot)
if (inByte == 'z'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for a space (delay of seven dots)
if (inByte == ' '){
digitalWrite(ledPin,LOW);
delay(7*time_base);} // keeps the light off for seven dots, as specified by Morse code

// Morse code for 1 (dot dash dash dash dash)
if (inByte == '1'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for two (dot dot dash dash dash)
if (inByte == '2'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 3 (dot dot dot dash dash)
if (inByte == '3'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 4 (dot dot dot dot dash)
if (inByte == '4'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 5 (dot dot dot dot dot)
if (inByte == '5'){
  digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 6 (dash dot dot dot dot)
if (inByte == '6'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 7 (dash dash dot dot dot)
if (inByte == '7'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 8 (dash dash dash dot dot)
if (inByte == '8'){
   digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(time_base);
 digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 9 (dash dash dash dash dot)
if (inByte == '9'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(time_base);
digitalWrite(ledPin,LOW);
delay(3*time_base);}

// Morse code for 0 (dash dash dash dash dash)
if (inByte == '0'){
  digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(time_base);
digitalWrite(ledPin,HIGH);
delay(dash);
digitalWrite(ledPin,LOW);
delay(3*time_base);}
}

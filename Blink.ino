// BLINK FIRST NAME IN MORSE CODE WITH BUILT-IN LED ON ARDUINO NANO 33 IoT
// Name: Chris 
// Task: 1.1P

void setup() 
{
  //initialize digital pin LED_BUILTIN as OUTPUT
  pinMode(LED_BUILTIN, OUTPUT);
}

// the loop function runs over and over again forever
void loop() 
{
  // My first name = Chris
  // (-.-.) (....) (.-.) (..) (...)
  letterC();
  letterH();
  letterR();
  letterI();
  letterS();
  digitalWrite(LED_BUILTIN, LOW);
}

void line()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(800);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);                       // wait for half a second
}

void dot()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(300);                       // wait for half a second
  digitalWrite(LED_BUILTIN, LOW);    // turn the LED off 
  delay(500);                       // wait for half a second
}

void letterC()  // (-.-.)
{
  line();
  dot();
  line();
  dot();
  delay(800);
}

void letterH()  // (....)
{
  dot();
  dot();
  dot();
  dot();
  delay(800);
}

void letterR()  // (.-.)
{
  dot();
  line();
  dot();
  delay(800); 
}

void letterI()  // (..)
{
  dot();
  dot();
  delay(800);
}

void letterS() // (...)
{
  dot();
  dot();
  dot();
  delay(800);
}

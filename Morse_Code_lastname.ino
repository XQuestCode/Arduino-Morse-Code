/* The length of a dot is 1 unit
   The length of a dash is 3 units
   The space between parts of the same letter is 1 unit
   The space between parts of the same letter is 1 unit
   the space between words is 7 units
   Morse code of my name is:
   P: * - * -
   A: * -
   R: * - *
   M: - -
   A: * -
   R: * - *
*/
int unit = 500;  //unit
int time2 = 500;
void setup() {
  // put your setup code here, to run once:
pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
// P
switchON(unit*1);
switchON(unit*3);
switchON(unit*3);
switchON(unit*1);
delay(unit*2);             //3 unit needs to be delayed as letter changed (1 in the switchOn function, two in this patch)
// A
switchON(unit*1);
switchON(unit*3);
delay(unit*2);
// R
switchON(unit*1);
switchON(unit*3);
switchON(unit*1);
delay(unit*2);
// M
switchON(unit*3);
switchON(unit*3);
delay(unit*2);
// A
switchON(unit*1);
switchON(unit*3);
delay(unit*2);
// R
switchON(unit*1);
switchON(unit*3);
switchON(unit*1);
delay(unit*2);
}
void switchON(int time)
{
digitalWrite(LED_BUILTIN,HIGH);
delay(time);
digitalWrite(LED_BUILTIN,LOW);
delay(time2);
}

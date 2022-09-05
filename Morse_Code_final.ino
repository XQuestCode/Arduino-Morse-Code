//Coded by: Aditya Parmar
//XQuest Codes
/* The length of a dot is 1 unit
   The length of a dash is 3 units
   The space between parts of the same letter is 1 unit
   The space between parts of the same letter is 1 unit
   the space between words is 7 units
*/

int unit = 500;  //unit
int time2 = 500;  // for the short delay
//Enter your name below: 
String name = "ADITYA";      //your name

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for (int i = 0; i < name.length(); i++) {
    func(name[i]);
  }
}
void switchON(int time)
{
  digitalWrite(LED_BUILTIN, HIGH);
  delay(time);
  digitalWrite(LED_BUILTIN, LOW);
  delay(time2);
}

void func(char L) {
  if (L == 'A') {
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }
  if (L == 'B')
  {
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 1);
    delay(unit * 2);
  }
  if (L == 'C')
  {
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }
  if (L == 'B')
  {
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'E')
  {
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'F')
  {
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'G')
  {
    switchON(unit * 3);
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'H')
  {
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'I')
  {
    switchON(unit * 1);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'J')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 3);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'K')
  {
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'L')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'M')
  {
    switchON(unit * 3);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'N')
  {
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'O')
  {
    switchON(unit * 3);
    switchON(unit * 3);
    switchON(unit * 3);
    delay(unit * 2);
  }


  if (L == 'P')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'Q')
  {
    switchON(unit * 3);
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'R')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'S')
  {
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'T')
  {
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'U')
  {
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'V')
  {
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'W')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'X')
  {
    switchON(unit * 3);
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 1);
    delay(unit * 2);
  }

  if (L == 'Y')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    switchON(unit * 3);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'J')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }

  if (L == 'Z')
  {
    switchON(unit * 1);
    switchON(unit * 3);
    delay(unit * 2);
  }
}
//Coded by: Aditya Parmar
//XQuest Codes

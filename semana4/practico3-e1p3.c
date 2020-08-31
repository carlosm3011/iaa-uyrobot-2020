int pinR = 0;

int pinG = 0;

int pinB = 0;

int randomStateR = 0;
int randomStateG = 0;
int randomStateB = 0;
int randomDelay = 0;

int counter;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

void loop()
{
  pinB = 10;
  pinG = 9;
  pinR = 11;

  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  
  for (counter = 0; counter < 10; ++counter) {
    randomStateR = random(0, 255 + 1);
    randomStateG = random(0, 255 + 1);
    randomStateB = random(0, 255 + 1);
    analogWrite(9, randomStateG);
    analogWrite(10, randomStateB);
    analogWrite(11, randomStateR);

    randomDelay = random(100, 600);
    delay(randomDelay); // Wait for 1000 millisecond(s)

  }
  
}

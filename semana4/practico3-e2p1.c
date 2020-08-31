int botonR = 0;

int botonB = 0;

int botonG = 0;

void setup()
{
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(7, INPUT);
  pinMode(6, INPUT);
  pinMode(5, INPUT);
}

void loop()
{
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  digitalWrite(11, LOW);
  while (1 == 1) {
    botonR = digitalRead(7);
    if (botonR == 1) {
      digitalWrite(11, HIGH);
    } else {
      digitalWrite(11, LOW);
    }
    botonB = digitalRead(6);
    if (botonB == 1) {
      digitalWrite(10, HIGH);
    } else {
      digitalWrite(10, LOW);
    }
    delay(500); // Wait for 500 millisecond(s)
    botonG = digitalRead(5);
    if (botonG == 1) {
      digitalWrite(9, HIGH);
    } else {
      digitalWrite(9, LOW);
    }
    delay(500); // Wait for 500 millisecond(s)
  }
}

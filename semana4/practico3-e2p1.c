int botonR = 0;
int botonB = 0;
int botonG = 0;

int pinB = 0;
int pinG = 0;
int pinR = 0;

int pinBotonR = 0;
int pinBotonG = 0;
int pinBotonB = 0;


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
  // Estado inicial
  pinB = 10;
  pinG = 9;
  pinR = 11;
  
  pinBotonR = 7;
  pinBotonB = 6;
  pinBotonG = 5;

  digitalWrite(pinB, LOW);
  digitalWrite(pinR, LOW);
  digitalWrite(pinG, LOW);
  
  while (1 == 1) {
    botonR = digitalRead(pinBotonR);
    if (botonR == 1) {
      digitalWrite(pinR, HIGH);
    } else {
      digitalWrite(pinR, LOW);
    }
    botonB = digitalRead(pinBotonB);
    if (botonB == 1) {
      digitalWrite(pinB, HIGH);
    } else {
      digitalWrite(pinB, LOW);
    }
    delay(500); // Wait for 500 millisecond(s)
    botonG = digitalRead(pinBotonG);
    if (botonG == 1) {
      digitalWrite(pinG, HIGH);
    } else {
      digitalWrite(pinG, LOW);
    }
    delay(500); // Wait for 500 millisecond(s)
  }
}

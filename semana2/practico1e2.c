#define PIN_ROJO 13
#define PIN_VERDE 8
#define PIN_AMA 12

void setup()
{
  pinMode(PIN_ROJO, OUTPUT);
  pinMode(PIN_VERDE, OUTPUT);
  pinMode(PIN_AMA, OUTPUT);
}

void prenderSemaforo(int *s)
{
  digitalWrite(PIN_ROJO, LOW);
  digitalWrite(PIN_AMA, LOW);
  digitalWrite(PIN_VERDE, LOW);
  
  digitalWrite(PIN_ROJO, s[0]);
  digitalWrite(PIN_AMA, s[1]);
  digitalWrite(PIN_VERDE, s[2]);
  
  delay(s[3]);
}

void loop()
{
  // Un estado del semaforo es un array rojo,amarillo,verde
  int estado1[4] = {HIGH, LOW, LOW, 2000};
  int estado2[4] = {LOW, LOW, HIGH, 2000};
  int estado3[4] = {LOW, HIGH, LOW, 800};
 
  prenderSemaforo(estado1);
  
  prenderSemaforo(estado2);
  
  prenderSemaforo(estado3);
  
}

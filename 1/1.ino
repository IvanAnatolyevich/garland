#define Z 50
#define LED PORTD
#define K PORTB

void setup()
{
  DDRB = 0b00000000;  // PB0..PB7 — входы
  DDRD = 0b11111111;  // PD0..PD7 — выходы
  LED = 0b00000000;   // выключаем светодиоды
  K = 0b11111111;     // включаем подтягивающие резисторы на PORTB
}

void loop()
{
  if (PINB == 0b11111110) // нажат PB0
  {
    LED = 0b11111111;
    delay(Z);
    LED = 0b00000000;
    delay(Z);
  }
  else
  {
    LED = 0b00000000;
  }

  if (PINB == 0b11111101) // нажат PB1
  {
    LED = 0b00000001;
    delay(Z);
    LED = 0b00000011;
    delay(Z);
    LED = 0b00000111;
    delay(Z);
    LED = 0b00001111;
    delay(Z);
    LED = 0b00011111;
    delay(Z);
    LED = 0b00111111;
    delay(Z);
    LED = 0b01111111;
    delay(Z);
    LED = 0b11111111;
    delay(Z);
  }
  else
  {
    LED = 0b00000000;
  }
}

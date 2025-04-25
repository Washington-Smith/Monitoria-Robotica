#include <Servo.h>

Servo myservo;
int seguirLed = 10;
int pararLed = 11;

void setup()
{
    pinMode(seguirLed, OUTPUT);
    pinMode(pararLed, OUTPUT);
    myservo.attach(9);
}

void loop()
{
    seguir();
    parar();
}

void seguir()
{
    digitalWrite(seguirLed, HIGH);
    digitalWrite(pararLed, LOW);
    myservo.write(90);
    delay(3000);
}

void parar()
{
    digitalWrite(seguirLed, LOW);
    digitalWrite(pararLed, HIGH);
    myservo.write(180);
    delay(3000);
}
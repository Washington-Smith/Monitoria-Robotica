
int pinLed = 11;

void setup()
{
    pinMode(pinLed, OUTPUT);
}

void loop()
{
    analogWrite(pinLed, 90);
    delay(2000);
    analogWrite(pinLed, 255);
    delay(2000);
}
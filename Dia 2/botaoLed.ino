const int ledPin = 3;
const int buttonPin = 10;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(buttonPin, INPUT_PULLUP);
}

void loop()
{
    int estadoBotao = digitalRead(buttonPin);

    if (estadoBotao == LOW)
    {
        digitalWrite(ledPin, HIGH);
    }
    else
    {
        digitalWrite(ledPin, LOW);
    }
}

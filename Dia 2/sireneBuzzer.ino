const int buzzerPin = 11;

void setup()
{
    pinMode(buzzerPin, OUTPUT);
}

void loop()
{

    for (int freq = 500; freq <= 1000; freq += 10)
    {
        tone(buzzerPin, freq);
        delay(30);
    }

    for (int freq = 1000; freq >= 500; freq -= 10)
    {
        tone(buzzerPin, freq);
        delay(30);
    }
}

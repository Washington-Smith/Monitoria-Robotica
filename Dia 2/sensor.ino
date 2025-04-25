const int sensorPin = 2;
const int ledPin = 8;
const int buzzerPin = 9;

void setup()
{
    pinMode(sensorPin, INPUT);
    pinMode(ledPin, OUTPUT);
    pinMode(buzzerPin, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    int leitura = digitalRead(sensorPin);

    if (leitura == LOW)
    {
        digitalWrite(ledPin, HIGH);
        digitalWrite(buzzerPin, HIGH);
        Serial.println("Linha detectada!");
    }
    else
    {
        digitalWrite(ledPin, LOW);
        digitalWrite(buzzerPin, LOW);
    }

    delay(100);
}

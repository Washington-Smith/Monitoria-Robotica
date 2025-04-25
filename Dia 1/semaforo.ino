// Definindo os pinos dos LEDs
int ledVermelho = 8;
int ledAmarelo = 9;
int ledVerde = 10;

void setup()
{
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledVerde, OUTPUT);
}

void loop()
{
    sinalVermelho();
    sinalAmarelo();
    sinalVerde();
}

void sinalVermelho()
{
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, LOW);
    delay(5000);
}
void sinalVerde()
{
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(3000);
}
void sinalAmarelo()
{
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledVerde, LOW);
    delay(2000);
}
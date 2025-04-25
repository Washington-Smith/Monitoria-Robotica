#include <Servo.h>

Servo myservo;

void setup()
{
    myservo.attach(11);
    Serial.begin(9600);
}

void loop()
{
    myservo.write(45);
    delay(2000);

    myservo.write(90);
    delay(2000);

    myservo.write(180);
    delay(2000);
}

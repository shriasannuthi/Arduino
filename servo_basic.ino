#include<Servo.h>
Servo shriasServo;

int servoPin =9;

void setup()
{
    shriasServo.attach(servoPin);

}
void loop()
{
    for (int i=0;i<=180; i=i+20)
    {
        shriasServo.write(i);
        delay(1000);
    }
}
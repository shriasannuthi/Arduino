#include<Servo.h>
Servo shriasServo;

int servoPin=9;
int distPin=0;

void setup()
{
    shriasServo.attach(servoPin);
}
void loop()
{
    int dist= analogRead(distPin);
    int pos = map(dist,0,1023,0,180);
    shriasServo.write(pos);
      
}

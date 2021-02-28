#include<SPI.h>

int SS=10;
void setup() 
{
  //Set SS Pin Directions
  //Others are Handled Automatically
  pinMode(SS,OUTPUT);

  //INitialize 
  SPI.begin();
}

void setLed(int reg, int level)
{
  digitalWrite(SS,LOW);
  SPI.transfer(reg);
  SPI.transfer(level);
  digitalWrite(SS,HIGH);
}

void loop()
{
  for(int i=0;i<=2;i++)
  {
    for(int j=50;j<=255;j++)
    {
      setLed(i,j);
      delay(20);
    }
    delay(500);
     for(int j=250;j>=50;j--)
    {
      setLed(i,j);
      delay(20);
    }
  }
}
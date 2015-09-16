/*******************************************************************************
   Copyright (C), 2012-2015, MakeBlock

   FileName: MeFlameSensor.cpp

   Author:   Lawrence, MakeBlock
   Version: V1.0
   Date: 2015/8/14 
*******************************************************************************/
#include "MeOrion.h"

MeFlameSensor FlameSensor1(PORT_3);

void setup() 
{
  Serial.begin(115200);
}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(FlameSensor1.readSensor() == Fire)
  {
    Serial.println("Fire");
  }
  else if(FlameSensor1.readSensor() == NoFire)
  {
    Serial.println("NoFire");
  }
}

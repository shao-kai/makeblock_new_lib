/*******************************************************************************
   Copyright (C), 2012-2015, MakeBlock

   FileName: MeGasSensor.cpp

   Author:   Lawrence, MakeBlock
   Version: V1.0
   Date: 2015/8/14 
*******************************************************************************/
#include "MeOrion.h"

MeGasSensor GasSensor1(PORT_8);

void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  if(GasSensor1.readDigital() == Gas)
  {
    Serial.print("Gas:");
    Serial.println(GasSensor1.readAnalog());
  }
  else if(GasSensor1.readDigital() == NoGas)
  {
    Serial.print("NoGas");
    Serial.println(GasSensor1.readAnalog());
  }
  delay(200);
}

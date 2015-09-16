/**
 * \par Copyright (C), 2012-2015, MakeBlock
 * @file    MeHumitureSensorTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/07
 * @brief   Description: this file is sample code for humiture sensor device.
 *
 * Function List:
 *    1. void MeHumiture::update(void)
 *    2. uint8_t MeHumiture::getHumidity(void)
 *    3. uint8_t MeHumiture::getTemperature(void)
 *
 * \par History:
 * <pre>
 * <Author>     <Time>        <Version>      <Descr>
 * Mark Yan     2015/09/07    1.0.0          rebuild the old lib
 * </pre>
 */
#include "MeOrion.h"

MeHumiture humi(PORT_6);

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  humi.update();
  Serial.print("Humidity=");
  Serial.print( humi.getHumidity() );
  Serial.print(",Temperature=");
  Serial.println( humi.getTemperature() );
  //delay(200);
}


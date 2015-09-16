/**
 * \par Copyright (C), 2012-2015, MakeBlock
 * @file    PIRMotionSensorTest.ino
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/01
 * @brief   Description: this file is sample program for PIR Motion module.
 *
 * Function List:
 * 1. bool    MePIRMotionSensor::isHumanDetected();
 *
 * \par History:
 * <pre>
 * `<Author>`         `<Time>`        `<Version>`        `<Descr>`
 * Mark Yan         2015/07/24     1.0.0            Rebuild the old lib.
 * Rafael Lee       2015/09/10     1.0.0            Added some comments and macros.
 * </pre>
 */

/* Includes ------------------------------------------------------------------*/
#include "MeOrion.h"

/* Private variables ---------------------------------------------------------*/
MePIRMotionSensor myPIRsensor(PORT_8);


/* Private functions ---------------------------------------------------------*/
/**
 * \par Function
 *    setup
 * \par Description
 *    Run once, initialize serial port.
 * \param[in]
 *    None
 * \par Output
 *    None
 * \return
 *    None.
 * \par Others
 *    None
 */
void setup()
{
  Serial.begin(9600);
}

/**
 * \par Function
 *    loop
 * \par Description
 *    Run continuously, print if human is detected.
 * \param[in]
 *    None
 * \par Output
 *    None
 * \return
 *    None.
 * \par Others
 *    None
 */
void loop()
{
  if(myPIRsensor.isHumanDetected() )
  {
    Serial.println("People Detected");
  }
  delay(100);
}

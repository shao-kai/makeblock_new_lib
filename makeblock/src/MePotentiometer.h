/**
 * \par Copyright (C), 2012-2015, MakeBlock
 * \class   MePotentiometer
 * \brief   Driver for Me PIR Motion Sensor module.
 * @file    MePotentiometer.h
 * @author  MakeBlock
 * @version V1.0.0
 * @date    2015/09/09
 * @brief   Header for MePotentiometer.cpp.
 *
 * \par Copyright
 * This software is Copyright (C), 2012-2015, MakeBlock. Use is subject to license \n
 * conditions. The main licensing options available are GPL V2 or Commercial: \n
 *
 * \par Open Source Licensing GPL V2
 * This is the appropriate option if you want to share the source code of your \n
 * application with everyone you distribute it to, and you also want to give them \n
 * the right to share who uses it. If you wish to use this software under Open \n
 * Source Licensing, you must contribute all your source code to the open source \n
 * community in accordance with the GPL Version 2 when your application is \n
 * distributed. See http://www.gnu.org/copyleft/gpl.html
 *
 * \par Description
 *
 * \par Method List:
 *
 *    1. void     MePotentiometer::setpin(uint8_t potentiometerPin); 
 *    2. uint16_t MePotentiometer::read(); 
 *    3. static   MePotentiometer::volatile uint8_t _potentiometerPin;
 *
 * \par History:
 * <pre>
 * `<Author>`         `<Time>`        `<Version>`        `<Descr>`
 * Mark Yan         2015/07/24     1.0.0            Rebuild the old lib.
 * Rafael Lee       2015/09/09     1.0.0            Added some private variables and methods.
 * </pre>
 */

#ifndef MePotentiometer_H
#define MePotentiometer_H

#include <stdint.h>
#include <stdbool.h>
#include <arduino.h>
#include "MeConfig.h"

#ifdef ME_PORT_DEFINED
#include "MePort.h"
#endif // ME_PORT_DEFINED

#ifndef ME_PORT_DEFINED
class MePotentiometer
#else // !ME_PORT_DEFINED
class MePotentiometer : public MePort
#endif  // !ME_PORT_DEFINED
{
public:
#ifdef ME_PORT_DEFINED
  MePotentiometer();
  MePotentiometer(uint8_t port);
#endif  // ME_PORT_DEFINED

  void setpin(uint8_t potentiometerPin);
  uint16_t read(void);
private:
  static volatile uint8_t _potentiometerPin;
};
#endif // MePotentiometer_H

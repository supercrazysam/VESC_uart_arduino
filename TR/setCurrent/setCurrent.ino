/*
  Name:    setCurrent.ino
  Created: 19-08-2018
  Author:  SolidGeek
  Description: This is a very simple example of how to set the current for the motor
*/

#include "VescUart.h"

/** Initiate VescUart class */
VescUart UART_L;
VescUart UART_R;

float current = 1.0; /** The current in amps */

void setup() {
  Serial1.begin(115200);
  Serial2.begin(115200);

  while (!Serial1) {;}
  while (!Serial2) {;}

  UART_L.setSerialPort(&Serial1);
  UART_R.setSerialPort(&Serial2);
}

void loop() {
  
  /** Call the function setCurrent() to set the motor current */
  //UART.setCurrent(current);
   UART_L.setDuty( 0.5);
   UART_R.setDuty(-0.5);
  // UART.setBrakeCurrent(current);
  
}

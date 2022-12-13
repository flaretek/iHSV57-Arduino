#include "Arduino.h"
#include "Serial.h"
#include "ModbusClientRTU.h"
#include "iHSV57.h"


ModbusClientRTU modbus(Serial2);
iHSV57 motor(modbus);

void setup(){
    motor.setTorque(1);
}

void loop(){
    delay(100);
}
#pragma once
#include "Arduino.h"
#include "ModbusClientRTU.h"

class iHSV57 {
public:
  iHSV57(ModbusClientRTU &client);

  void setTorque(int torque);

private:
  ModbusClientRTU &_client;
  uint32_t _requestIndex;
}
#include "Arduino.h"
#include "ModbusClientRTU.h"

class iHSV57 {
public:
  iHSV57(ModbusClientRTU& client) : _client(client) {}

  void setTorque(int torque) {
    ModbusMessage message;
    message.registerAddress = 0x01FE;
    message.registerValue = torque;
    _client.addRequest(message, _requestIndex++);
  }

private:
  ModbusClientRTU& _client;
  uint32_t _requestIndex = 0;
}

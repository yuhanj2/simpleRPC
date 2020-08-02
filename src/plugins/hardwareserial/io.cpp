#include "io.h"


void HardwareSerialIO::begin(HardwareSerial& hs) {
  _hs = &hs;
}

size_t HardwareSerialIO::available(void) {
  return (size_t)_hs->available();
}

size_t HardwareSerialIO::read(uint8_t* buffer, size_t size) {
  return _hs->readBytes((char*)buffer, size);
}

size_t HardwareSerialIO::write(uint8_t* buffer, size_t size) {
  return _hs->write((uint8_t const*)buffer, size);
}

#pragma once

#include "esphome.h"
#include "esphome/components/uart/uart.h"

namespace esphome {
namespace webasto {

class Webasto : public Component, public uart::UARTDevice {
 public:
  Webasto(uart::UARTComponent *parent);

  void setup() override;
  void loop() override

  void HeatOn();
  void HeatOn(uint8_t t_on_mins);
  void VentOn();
  void VentOn(uint8_t t_on_mins);
  void Off();
};

}  // namespace webasto
}  // namespace esphome

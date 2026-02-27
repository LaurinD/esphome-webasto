#pragma once

#include "esphome.h"

namespace esphome {
namespace webasto {

static const char *const TAG = "Webasto";

class Webasto : public Component, public uart::UARTDevice {

 public:
  Webasto(uart::UARTComponent *parent);

  void setup() override;
  void loop() override;

  void HeatOn();
  void HeatOn(uint8_t t_on_mins);
  void VentOn();
  void VentOn(uint8_t t_on_mins);
  void Off();

 protected:
  uart::UARTComponent *_uart_comp;
};

}  // namespace webasto
}  // namespace esphome

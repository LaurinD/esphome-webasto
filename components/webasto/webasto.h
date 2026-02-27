#pragma once

#include "esphome.h"

namespace esphome {
namespace webasto {

static const char *const TAG = "webasto";

class Webasto : public Component, public uart::UARTDevice {

 public:
  Webasto(uart::UARTComponent *parent);

  void setup() override;
  void loop() override;

  // ===== Control =====
  void HeatOn();
  void HeatOn(uint8_t t_on_mins);
  void VentOn();
  void VentOn(uint8_t t_on_mins);
  void Off();

  // ===== States =====
  struct state_50_03_t {
    bool heat_request=false;
    bool vent_request=false;
    bool combustion_fan=false;
    bool glowplug=false;
    bool fuel_pump=false;
    bool nozzle_heating=false;
  } state_50_03;

  struct state_50_04_t {
    float glowplug=0;
    float fuel_pump=0;
    float combustion_fan=0;
  } state_50_04;

  struct state_50_05_t {
    float temperature=0;
    float voltage=0;
    float glowplug_resistance=0;
  } state_50_05;

  struct state_50_06_t {
    float working_hours=0;
    float operating_hours=0;
    uint16_t start_counter=0;
  } state_50_06;

  struct state_50_07_t {
    uint8_t op_state=0;
  } state_50_07;

 protected:
  uart::UARTComponent *uart_;

  void SendBreak();
  bool tx_msg2(uint8_t* dat, uint8_t len);
  bool rx_msg2(uint8_t* dat, uint8_t len);

  void KeepAlive();

  void get_state_50_03();
  void get_state_50_04();
  void get_state_50_05();
  void get_state_50_06();
  void get_state_50_07();
};

}  // namespace webasto
}  // namespace esphome

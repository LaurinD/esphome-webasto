#include "webasto.h"

namespace esphome {
namespace webasto {

Webasto::Webasto(uart::UARTComponent *parent)
    : uart::UARTDevice(parent) {
  _uart_comp = parent;
}

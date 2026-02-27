#include "webasto.h"

static const char *const TAG = "Webasto";

Webasto::Webasto(ESP32ArduinoUARTComponent *parent) : UARTDevice(parent), _uart_comp(parent) {
    last_ok_rx = millis() - 30000;
}

// ----- Methoden-Implementierung -----

void Webasto::itob(uint8_t x, char *buf) { /* kopiere deinen bisherigen itob Code */ }

void Webasto::SendBreak() { /* kopiere bisherigen SendBreak Code */ }

uint8_t Webasto::checksum(uint8_t *buf, uint8_t len) { /* kopiere bisherigen checksum Code */ }

bool Webasto::tx_msg2(uint8_t* dat, uint8_t len) { /* kopiere tx_msg2 Code */ }

bool Webasto::rx_msg2(uint8_t* dat, uint8_t len) { /* kopiere rx_msg2 Code */ }

void Webasto::VentOn(uint8_t t_on_mins) { /* kopiere VentOn Code */ }
void Webasto::VentOn() { VentOn(1); }
void Webasto::HeatOn(uint8_t t_on_mins) { /* kopiere HeatOn Code */ }
void Webasto::HeatOn() { HeatOn(1); }
void Webasto::Off() { /* kopiere Off Code */ }

void Webasto::KeepAlive() { /* kopiere KeepAlive Code */ }

void Webasto::get_state_50_03() { /* kopiere get_state_50_03 Code */ }
void Webasto::get_state_50_04() { /* kopiere get_state_50_04 Code */ }
void Webasto::get_state_50_05() { /* kopiere get_state_50_05 Code */ }
void Webasto::get_state_50_06() { /* kopiere get_state_50_06 Code */ }
void Webasto::get_state_50_07() { /* kopiere get_state_50_07 Code */ }

void Webasto::setup() {}
void Webasto::loop() { /* kopiere loop() Code */ }

#include "rf96.h"

void Rf96::initialize(SPISettings spi_setting) {
    this->setting = spi_setting;

    this->writeReg(0x01, 0x00);
    delay(10);
    this->writeReg(0x01, 0x81);
    delay(10);
}

uint8_t Rf96::readRegister(uint8_t reg) {
    SPI.beginTransaction(setting);
    digitalWrite(this->pin, LOW);
    SPI.transfer(reg & 0x7F);
    uint8_t val = SPI.transfer(0x00);
    digitalWrite(this->pin, HIGH);
    SPI.endTransaction();
    return val;
}

void Rf96::writeReg(uint8_t reg, uint8_t data) {
    
    SPI.beginTransaction(this->setting);
    digitalWrite(this->pin, LOW);

    SPI.transfer(reg | 0x80);
    SPI.transfer(data);
      
    digitalWrite(this->pin, HIGH);
    SPI.endTransaction();
      
}

void Rf96::setBitsReg(uint8_t reg, uint8_t mask){
    uint8_t val = this->readRegister(reg);
    writeReg(reg, val | mask);
}

void Rf96::clearBitsReg(uint8_t reg, uint8_t mask) {
    uint8_t val = readRegister(reg);
    writeReg(reg, val & ~mask);
}

void Rf96::setFrequency(uint32_t frequency) {
    uint32_t frf = (frequency * (1 << 19)) / 32000000;
  
    writeReg(REG_FR_MSB, (frf >> 16) & 0xFF);
    writeReg(REG_FR_MID, (frf >> 8) & 0xFF);
    writeReg(REG_FR_LSB, frf & 0xFF);
}

void Rf96::setCSPin(uint16_t pin) {
    this->pin = pin;
}

void Rf96::setInterruptPin(uint16_t pin) {
    this->interruptPin = pin;
}
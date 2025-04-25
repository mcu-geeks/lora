#ifndef RF96_H
#define RF96_H

#include <stdint.h>
#include <SPI.h>
#include <Arduino.h>

#define REG_OP_MODE                 0x01
#define REG_FIFO                    0x00
#define REG_MODEM_CONFIG_1          0x1D
#define REG_MODEM_CONFIG_2          0x1E
#define REG_IRQ_FLAGS               0X12
#define REG_RX_NB_BYTES             0x13
#define REG_FIFO_ADDR_PTR           0x0D
#define REG_FIFO_RX_CURRENT_ADDR    0x10
#define REG_FR_MSB                  0x06
#define REG_FR_MID                  0x07
#define REG_FR_LSB                  0x08

#define LORA_MODE                   B10000000
#define MODE_SLEEP                  B00000000
#define MODE_STANDBY                B00000001
#define MODE_RECEIVE_CONT           B00000101

class Rf96 {
public:
    SPISettings setting;
    uint16_t pin;
    uint16_t interruptPin;
    void initialize(SPISettings spi_setting);
    void writeReg(uint8_t reg, uint8_t data);
    uint8_t readRegister(uint8_t reg);
    void setBitsReg(uint8_t reg, uint8_t mask);
    void clearBitsReg(uint8_t reg, uint8_t mask);
    void setCSPin(uint16_t pin);
    void setInterruptPin(uint16_t pin);
    void setFrequency(uint32_t freq);
    
    
};

#endif 

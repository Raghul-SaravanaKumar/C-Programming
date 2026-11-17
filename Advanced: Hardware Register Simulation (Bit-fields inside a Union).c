#include <stdio.h>
#include <stdint.h>

// Simulating an 8-bit hardware status register
union StatusRegister {
    uint8_t fullByte; // Access all 8 bits at once
    struct {
        uint8_t powerOn    : 1; // Bit 0 (1 bit)
        uint8_t errorFlag  : 1; // Bit 1 (1 bit)
        uint8_t mode       : 2; // Bits 2-3 (2 bits)
        uint8_t reserved   : 4; // Bits 4-7 (4 bits)
    } bits;
};

int main() {
    union StatusRegister reg;
    
    // Clear the entire register
    reg.fullByte = 0x00;

    // Set individual hardware flags using the struct
    reg.bits.powerOn = 1;
    reg.bits.mode = 3;      // Binary 11
    reg.bits.errorFlag = 0;

    // Read the result as a single hexadecimal byte
    printf("Register Hex Value: 0x%02X\n", reg.fullByte);

    // Simulate receiving a raw byte from hardware (e.g., 0x07 -> Binary 0000 0111)
    reg.fullByte = 0x07; 
    printf("\nAfter receiving 0x07 from hardware:\n");
    printf("Power On:   %u\n", reg.bits.powerOn);
    printf("Error Flag: %u\n", reg.bits.errorFlag);
    printf("Mode:       %u\n", reg.bits.mode);

    return 0;
}

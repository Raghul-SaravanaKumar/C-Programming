#include <stdio.h>
#include <stdint.h>

union FloatInspector {
    float number;
    uint32_t rawBits;
    uint8_t bytes[4];
};

int main() {
    union FloatInspector inspector;
    inspector.number = -12.5f;

    printf("Float Value: %.2f\n", inspector.number);
    printf("IEEE 754 Hex Representation: 0x%08X\n", inspector.rawBits);

    // Inspect individual bytes in memory to check CPU Endianness
    printf("Memory Bytes (Lowest address to Highest): ");
    for (int i = 0; i < 4; i++) {
        printf("%02X ", inspector.bytes[i]);
    }
    printf("\n");

    // Check Endianness
    if (inspector.bytes[0] == 0x00) {
        printf("System Architecture: Little-Endian (Least significant byte stored first)\n");
    } else {
        printf("System Architecture: Big-Endian (Most significant byte stored first)\n");
    }

    return 0;
}

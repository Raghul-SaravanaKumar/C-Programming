#include <stdio.h>
#include <string.h>

// Enum to track what type of data the union currently holds
enum DataType { INT_TYPE, FLOAT_TYPE, STRING_TYPE };

// Tagged Union
struct SmartVariable {
    enum DataType type; // The "tag"
    union {
        int iVal;
        float fVal;
        char strVal[20];
    } data;
};

void printSmartVar(struct SmartVariable var) {
    switch (var.type) {
        case INT_TYPE:
            printf("Integer: %d\n", var.data.iVal);
            break;
        case FLOAT_TYPE:
            printf("Float:   %.2f\n", var.data.fVal);
            break;
        case STRING_TYPE:
            printf("String:  %s\n", var.data.strVal);
            break;
    }
}

int main() {
    struct SmartVariable v1, v2, v3;

    // Store an integer
    v1.type = INT_TYPE;
    v1.data.iVal = 42;

    // Store a float
    v2.type = FLOAT_TYPE;
    v2.data.fVal = 99.95;

    // Store a string
    v3.type = STRING_TYPE;
    strcpy(v3.data.strVal, "Hello World");

    // Safely read the values using the tag
    printSmartVar(v1);
    printSmartVar(v2);
    printSmartVar(v3);

    return 0;
}

#include <stdio.h>
#include <string.h>

// Enum to keep track of which union member is active
enum PaymentType {
    CASH,
    CARD,
    UPI
};

// Struct containing a tag and an anonymous union
struct Transaction {
    int transactionId;
    float amount;
    enum PaymentType type; // Tag

    union {
        int cashReceiptNo;        // Used if type == CASH
        long long cardNumber;     // Used if type == CARD
        char upiId[40];           // Used if type == UPI
    } details;
};

// Function passing struct by pointer for efficiency
void printTransaction(const struct Transaction *t) {
    printf("ID: %d | Amount: Rs. %.2f | Mode: ", t->transactionId, t->amount);

    switch (t->type) {
        case CASH:
            printf("CASH (Receipt #%d)\n", t->details.cashReceiptNo);
            break;
        case CARD:
            printf("CARD (Card No: %lld)\n", t->details.cardNumber);
            break;
        case UPI:
            printf("UPI (ID: %s)\n", t->details.upiId);
            break;
    }
}

int main() {
    struct Transaction t1, t2, t3;

    // 1. Cash Transaction
    t1.transactionId = 5001;
    t1.amount = 450.00;
    t1.type = CASH;
    t1.details.cashReceiptNo = 9912;

    // 2. Card Transaction
    t2.transactionId = 5002;
    t2.amount = 2999.50;
    t2.type = CARD;
    t2.details.cardNumber = 4111222233334444LL;

    // 3. UPI Transaction
    t3.transactionId = 5003;
    t3.amount = 150.75;
    t3.type = UPI;
    strcpy(t3.details.upiId, "user@okaxis");

    printTransaction(&t1);
    printTransaction(&t2);
    printTransaction(&t3);

    return 0;
}

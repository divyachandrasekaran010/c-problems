Credit Card Fraud Burst Detector (While Loop)
input
6
20000 55000 60000 70000 30000 80000
Output
Fraud Triggered At Attempt: 4
High-Value Transactions: 4

#include <stdio.h>
int main() {
    int N;
    scanf("%d", &N);
    int amount;
    int i = 0;
    int highValueCount = 0;
    int consecutive = 0;
    int fraudAttempt = -1;
    while(i < N) {
        scanf("%d", &amount);
        if(amount >= 50000) {
            highValueCount++;
            consecutive++;

            if(consecutive == 3 && fraudAttempt == -1) {
                fraudAttempt = i + 1; // attempt number
            }
        } else {
            consecutive = 0;
        }
        i++;
    }
    if(fraudAttempt == -1)
        printf("Fraud Triggered At Attempt: Not Triggered\n");
    else
        printf("Fraud Triggered At Attempt: %d\n", fraudAttempt);
    printf("High-Value Transactions: %d\n", highValueCount);
    return 0;
}
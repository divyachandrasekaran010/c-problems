Warehouse Shipment Delay Detector (While Loop)
Using a while loop, calculate total delay and count delayed days (>2 hours).
Test Cases
Input
5
1 3 0 4 2
Output
Total Delay: 10
Delayed Days: 2

#include <stdio.h>
int main() {
    int N, i = 0, total = 0, delayed = 0;
    scanf("%d", &N);
    int delay;
    while(i < N) {
        scanf("%d", &delay);
        total += delay;
        if(delay > 2)
            delayed++;
        i++;
    }
    printf("Total Delay: %d\n", total);
    printf("Delayed Days: %d\n", delayed);
    return 0;
}
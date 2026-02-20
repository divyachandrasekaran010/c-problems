Warehouse Capacity Overflow Detector
Simulate item storage and count days when capacity was exceeded.
Input
100
4
30 40 50 10
Output
Remaining Capacity: -30
Overflow Days: 1

#include<stdio.h>

int main() {
    int capacity, n, items;
    int overflowDays = 0;

    scanf("%d", &capacity);
    scanf("%d", &n);

    for(int i = 0; i < n; i++) {
        scanf("%d", &items);
        capacity -= items;

        if(capacity < 0) {
            overflowDays++;
        }
    }

    printf("Remaining Capacity: %d\n", capacity);
    printf("Overflow Days: %d", overflowDays);

    return 0;
}

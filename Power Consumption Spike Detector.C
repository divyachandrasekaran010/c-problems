Power Consumption Spike Detectors
Find total power usage and count spike hours (>5 units).
Test Cases
Input
5
3 6 4 8 2
Output
Total Units: 23
Spike Hours: 2

#include<stdio.h>
int main() {
    int n, units;
    int totalUnits = 0, spikeHours = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &units);
        totalUnits += units;

        if(units > 5) {
            spikeHours++;
        }
    }
    printf("Total Units: %d\n", totalUnits);
    printf("Spike Hours: %d", spikeHours);
    return 0;
}

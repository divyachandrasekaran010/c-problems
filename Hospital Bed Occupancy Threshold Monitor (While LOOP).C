Hospital Bed Occupancy Threshold Monitor (While
Loop)
Using a while loop, calculate the final occupied beds and count how many times occupancy
exceeded 90% of capacity.
Test Cases
Input
100
6
20 30 -10 25 -5 40
Output
Final Occupied Beds: 100
Critical Hours: 1

#include <stdio.h>
int main() {
    int capacity, N;
    scanf("%d%d", &capacity, &N);
    int change, occupied = 0, critical = 0, i = 0;
    while(i < N) {
        scanf("%d", &change);
        occupied += change;
        if(occupied > 0.9 * capacity)
            critical++;
        i++;
    }
    printf("Final Occupied Beds: %d\n", occupied);
    printf("Critical Hours: %d\n", critical);
    return 0;
}
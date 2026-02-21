Smart Meter Power Surge Analyzer (While Loop)
Using a while loop, find the highest power usage and count surge hours (>5 kW).
Test Cases
Input
6
3 6 4 8 2 7
Output
Max Usage: 8
Surge Hours: 3

#include <stdio.h>
int main() {
    int N, i = 0, max = 0, surge = 0;
    scanf("%d", &N);
    int power;
    while(i < N) {
        scanf("%d", &power);
        if(power > max)
            max = power;
        if(power > 5)
            surge++;
        i++;
    }
    printf("Max Usage: %d\n", max);
    printf("Surge Hours: %d\n", surge);
    return 0;
}
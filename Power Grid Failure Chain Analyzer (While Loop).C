Power Grid Failure Chain Analyzer (While Loop)
Test Cases
Input
100
6
80 90 120 70 130 60
Output
Safe Hours: 4
Failure Count: 2
Input
150
4
100 120 140 160
Output
Safe Hours: 3
Failure Count: 1


#include <stdio.h>
int main() {
    int capacity, N;
    scanf("%d%d", &capacity, &N);
    int load, safe = 0, fail = 0, i = 0;
    while(i < N) {
        scanf("%d", &load);
        if(load > capacity)
            fail++;
        else
            safe++;
        i++;
    }
    printf("Safe Hours: %d\n", safe);
    printf("Failure Count: %d\n", fail);
    return 0;
}
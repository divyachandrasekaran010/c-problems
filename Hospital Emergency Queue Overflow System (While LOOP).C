Hospital Emergency Queue Overflow System (WhileLoop)
Test Cases
Input
50
4
10 20 30 15
Output
Treated Patients: 50
Rejected Patients: 25
Input
100
3
30 40 20
Output
Treated Patients: 90
Rejected Patients: 0

#include <stdio.h>
int main() {
    int capacity, N;
    scanf("%d%d", &capacity, &N);
    int arrive, treated = 0, rejected = 0, i = 0;
    while(i < N) {
        scanf("%d", &arrive);
        if(treated + arrive <= capacity)
            treated += arrive;
        else {
            rejected += (treated + arrive - capacity);
            treated = capacity;
        }
        i++;
    }
    printf("Treated Patients: %d\n", treated);
    printf("Rejected Patients: %d\n", rejected);
    return 0;
}
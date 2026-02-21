Using a while loop, count inactive weeks and decide dropout risk.Test Cases
Input
6
5 0 2 0 0 4
Output
Inactive Weeks: 3
Risk Status: High


#include <stdio.h>
int main() {
    int N, i = 0, inactive = 0;
    scanf("%d", &N);
    int hours;
    while(i < N) {
        scanf("%d", &hours);
        if(hours == 0)
            inactive++;
        i++;
    }
    printf("Inactive Weeks: %d\n", inactive);
    printf("Risk Status: %s\n", (inactive >= 3) ? "High" : "Low");
    return 0;
    
}
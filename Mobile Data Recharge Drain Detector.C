
Simulate data usage and count successful usage days before data runs out.
Test Cases
Input
10
4
2 3 4 2
Output
Remaining Data: 1
Successful Days: 3
#include<stdio.h>
int main() {
    int totalData, n, usage;
    int i, successfulDays = 0;
    scanf("%d", &totalData);
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &usage);
        if(totalData >= usage) {
            totalData -= usage;
            successfulDays++;
        } else {
            break;  
        }
    }
    printf("Remaining Data: %d\n", totalData);
    printf("Successful Days: %d", successfulDays);
    return 0;
}
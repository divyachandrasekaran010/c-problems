Using a while loop, count successful and cancelled orders and determine risk status.
Test Cases
Input
6
1 0 0 1 0 1
Output
Successful: 3
Cancelled: 3
Status: Safe

#include<stdio.h>
int main() {
    int n, i = 0;
    int order;
    int success = 0, cancel = 0;
    scanf("%d", &n);
    while(i < n) {
        scanf("%d", &order);
        if(order == 1) {
            success++;
        }
        else if(order == 0) {
            cancel++;
        }

        i++;
    }
    printf("Successful: %d\n", success);
    printf("Cancelled: %d\n", cancel);
    if(cancel > success) {
        printf("Status: Risk");
    }
    else {
        printf("Status: Safe");
    }
    return 0;
}
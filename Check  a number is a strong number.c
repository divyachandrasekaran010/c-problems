Check whether a number is a strong number:

#include <stdio.h>

int main() {
    int n, temp, r, sum = 0, fact, i;
    printf("input:");
    scanf("%d", &n);
    

    for(temp = n; temp > 0; temp = temp / 10) {
        r = temp % 10;   
        fact = 1;

        for(i = 1; i <= r; i++) {
            fact = fact * i;  
        }

        sum = sum + fact;
    }

    if(sum == n)
        printf(" output:yes");
    else
        printf("output:No");

    return 0;
}

Calculate remaining cash after all withdrawals and count how many times the balance went
below ₹5,000.
Input Format
Integer initialCash
Integer N
N integers (withdrawal amounts)
Output Format
Remaining Cash
Risk Count
Test Cases
Input
20000
4
3000 4000 5000 2000
Output
Remaining Cash: 6000
Risk Count: 1

#include<stdio.h>
int main(){
    int initialCash, n, withdrawal, i;
    int count = 0;
    scanf("%d", &initialCash);
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &withdrawal);
        initialCash -= withdrawal;
        if(initialCash < 5000){
            count++;
        }
    }
    printf("Remaining Cash: %d\n", initialCash);
    printf("Risk Count: %d", count);
    return 0;
}

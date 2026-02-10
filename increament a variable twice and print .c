Increment a variable twice and print result.
Test Case 1
Input: 5
Output: 7
Test Case 2
Input: 0
Output: 2
Test Case 3
Input: 10
Output: 12

program:
#include<stdio.h>
int main(){
    int a;
    printf("Input:");
    scanf("%d",&a);
    printf("%d",++a,++a);
    return  0;
}
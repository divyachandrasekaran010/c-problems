Print the difference of two integers using -.
Test Case 1
Input: 8 3
Output: 5
Test Case 2
Input: 10 5
Output: 5
Test Case 3
Input: 15 10
Output: 5

program:
#include<stdio.h>
int main(){
    int a,b;
    printf("Input:");
    scanf("%d %d",&a,&b);
    int diff=a-b;
    printf("%d",diff);
    return  0;
}
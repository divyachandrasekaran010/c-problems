Print the sum of two integers using +.
Test Case 1
Input: 5 5
Output: 10
Test Case 2

Input: 3 7
Output: 10
Test Case 3
Input: 8 2
Output: 10


program:
#include<stdio.h>
int main(){
    int a,b;
    printf("Input:");
    scanf("%d %d",&a,&b);
    int sum=a+b;
    printf("%d",sum);
    return  0;
}
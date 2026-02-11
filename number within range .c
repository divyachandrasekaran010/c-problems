Number Within Range
Input: 15 (range 10–20)
Output: Number is within range
Explanation: Check using logical AND.

program:

#include<stdio.h>
int main(){
    int num;
    printf("Input:");
    scanf("%d",&num);
    if(num>=10&&num<=20){
        printf("Number is within range");
    }
    else{
        printf("number is not within range");
    }
}
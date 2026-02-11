Find Greater of Two Numbers
Input: 10 20
Output: 20 is greater
Explanation: Compare two numbers using if-else.


#include<stdio.h>
int main(){
    int a,b;
    printf("Input:");
    scanf("%d %d",&a,&b);
    if(a>b){
        printf("%d is greater",a);
    }
    else
        {
        printf("%d is greater value",b);
    }
}
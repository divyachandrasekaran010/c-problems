Print two integers in one line
Test Case 1
Output: 5 10
Test Case 2
Output: 20 30

program:
#include<stdio.h>
int main(){
    int a=5,b=10;
    int c=20,d=30;
    printf("%d %d\n",a,b);
    printf("%d %d",c,d);
    return 0;
}
Print a floating-point number
Test Case 1
Output: 3.5
Test Case 2
Output: 7.25

program:
#include<stdio.h>
int main(){
    float a=3.5;
    float b=7.25;
    printf("%.1f\n",a);
    printf("%.2f",b);
    return 0;
}
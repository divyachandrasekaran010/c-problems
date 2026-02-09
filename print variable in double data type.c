Print double variable
Test Case 1
Output: 12.345
Test Case 2
Output: 99.999

program:
#include<stdio.h>
int main(){
    double a=12.345;
    double b=99.999;
    printf("%.3lf\n%.3lf",a,b);
    return 0;
}
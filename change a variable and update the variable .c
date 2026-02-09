Change variable value and print updated value
Test Case 1
Output: 20
Test Case 2
Output: 100

program:
#include<stdio.h>
int main(){
    int a=10;
    int update_value=20;
    a=update_value;
    printf("%d\n",a);
   int b=50;
   int b2=100;
   b=b2;
   printf("%d",b);
  return 0;
}
Factorial Using Function
Test Cases:
1. Input: 5
Output: 120
2. Input: 0
Output: 1
3. Input: 3
Output: 6


#include <stdio.h>
int factorial(int n)
{
int i, fact = 1;
for(i = 1; i <= n; i++)
fact = fact * i;
return fact;
}
int main()
{
int N;
scanf("%d", &N);
printf("%d", factorial(N));
return 0;
}
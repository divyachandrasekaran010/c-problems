GCD of Two Numbers Using Function

Test Cases:
1. Input: 12 18
Output: 6
2. Input: 5 10
Output: 5
3. Input: 7 3
Output: 1


#include <stdio.h>
int gcd(int a, int b)
{
while(b != 0)
{
int temp = b;
b = a % b;
a = temp;
}
return a;
}
int main()
{
int A, B;
scanf("%d %d", &A, &B);
printf("%d", gcd(A, B));
return 0;
}
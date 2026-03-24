Reverse a Number Using Function

Test Cases:
1. Input: 123
Output: 3
2. Input: 400
Output: 4
3. Input: 9
Output: 9

#include <stdio.h>
int reverseNumber(int n)
{
int rev = 0;
while(n > 0)
{
rev = rev * 10 + n % 10;
n /= 10;
}
return rev;
}
int main()
{
int N;
scanf("%d", &N);
printf("%d", reverseNumber(N));
return 0;
}
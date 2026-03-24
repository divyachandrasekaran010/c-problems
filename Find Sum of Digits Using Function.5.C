Find Sum of Digits Using Function
Test Cases:
1. Input: 123
Output: 6
Explanation: 1+2+3
2. Input: 405
Output: 9
Explanation: 4+0+5
3. Input: 9
Output: 9
Explanation: Single digit

#include <stdio.h>
int sumDigits(int n)
{
int sum = 0;
while(n > 0)
{
sum += n % 10;
n /= 10;
}
return sum;
}
int main()
{
int N;
scanf("%d", &N);
printf("%d", sumDigits(N));
return 0;
}
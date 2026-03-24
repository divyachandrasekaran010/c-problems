Count Digits in a Number Using Function
Test Cases:
1. Input: 1234
Output: 4
2. Input: 9
Output: 1
3. Input: 1000
Output: 4

#include <stdio.h>
int countDigits(int n)
{
int count = 0;
if(n == 0)
return 1;
while(n > 0)
{
count++;
n /= 10;
}
return count;
}
int main()
{
int N;
scanf("%d", &N);
printf("%d", countDigits(N));
return 0;
}
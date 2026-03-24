Check Prime Number Using Function
Test Cases:
1. Input: 7
Output: Prime
2. Input: 10
Output: Not Prime
3. Input: 2
Output: Prime

#include <stdio.h>
int isPrime(int n)
{
int i;
if(n <= 1)
return 0;
for(i = 2; i < n; i++)
{
if(n % i == 0)
return 0;
}
return 1;
}
int main()
{

int N;
scanf("%d", &N);
if(isPrime(N))
printf("Prime");
else
printf("Not Prime");
return 0;
}
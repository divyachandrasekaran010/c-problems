Armstrong Number Using Function

Test Cases:
1. Input: 153
Output: Armstrong
2. Input: 370
Output: Armstrong
3. Input: 123
Output: Not Armstrong

#include <stdio.h>
int isArmstrong(int n)
{
int temp = n, sum = 0, rem;
while(temp > 0)
{
rem = temp % 10;
sum += rem * rem * rem;
temp /= 10;
}
if(sum == n)
return 1;
else
return 0;
}
int main()
{
int N;
scanf("%d", &N);
if(isArmstrong(N))
printf("Armstrong");
else
printf("Not Armstrong");
return 0;
}
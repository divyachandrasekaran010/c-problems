Check Palindrome Number Using Function
Test Cases:
1. Input: 121
Output: Palindrome
2. Input: 123
Output: Not Palindrome
3. Input: 7
Output: Palindrome

#include <stdio.h>
int reverse(int n)
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
if(N == reverse(N))
printf("Palindrome");
else
printf("Not Palindrome");
return 0;
}
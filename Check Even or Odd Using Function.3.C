Check Even or Odd Using Function

Test Cases:
1. Input: 4
Output: Even
Explanation: Divisible by 2
2. Input: 9
Output: OddCheck Even or Odd Using Function
Explanation: Not divisible by 2
3. Input: 0
Output: Even
Explanation: Zero is even

#include <stdio.h>
void checkEvenOdd(int n)
{
if(n % 2 == 0)
printf("Even");
else
printf("Odd");
}
int main()
{
int N;
scanf("%d", &N);
checkEvenOdd(N);
return 0;
}
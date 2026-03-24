Find Power of a Number Using Function (Loop)

Test Cases:
1. Input: 2 3
Output: 8
Explanation: 2×2×2
2. Input: 5 1
Output: 5
3. Input: 3 0
Output: 1

#include <stdio.h>
int power(int a, int b)
{
int result = 1;
for(int i = 1; i <= b; i++)
result = result * a;
return result;
}
int main()

{
int A, B;
scanf("%d %d", &A, &B);
printf("%d", power(A, B));
return 0;
}
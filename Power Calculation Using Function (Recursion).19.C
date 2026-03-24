Power Calculation Using Function (Recursion)

Test Cases:
1. Input: 2 3
Output: 8
2. Input: 5 0
Output: 1
3. Input: 3 2
Output: 9
#include <stdio.h>
int power(int a, int b)
{
if(b == 0)
return 1;
else
return a * power(a, b-1);
}
int main()
{
int A, B;

scanf("%d %d", &A, &B);
printf("%d", power(A, B));
return 0;
}
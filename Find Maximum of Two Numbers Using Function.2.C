Find Maximum of Two Numbers Using Function

Test Cases:
1. Input: 10 20
Output: 20
Explanation: 20 is greater than 10
2. Input: 45 15
Output: 45
Explanation: First number is larger
3. Input: 7 7
Output: 7
Explanation: Both numbers are equal


#include <stdio.h>
int findMax(int a, int b)
{
if(a > b)
return a;
else
return b;
}
int main()
{
int A, B;

scanf("%d %d", &A, &B);
printf("%d", findMax(A, B));
return 0;
}
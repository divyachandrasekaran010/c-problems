Sum of N Natural Numbers Using Function

Test Cases:
1. Input: 5
Output: 15
2. Input: 10
Output: 55
3. Input: 1
Output: 1

#include <stdio.h>
int sumNatural(int n)
{
return n * (n + 1) / 2;
}
int main()

{
int N;
scanf("%d", &N);
printf("%d", sumNatural(N));
return 0;
}
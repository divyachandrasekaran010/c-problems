Fibonacci Series Using Function
Test Cases:
1. Input: 5
Output: 0 1 1 2 3
2. Input: 1
Output: 0
3. Input: 7
Output: 0 1 1 2 3 5 8

#include <stdio.h>
void fibonacci(int n)
{
int a = 0, b = 1, c;
for(int i = 1; i <= n; i++)
{
printf("%d ", a);
c = a + b;
a = b;
b = c;
}
}
int main()
{
int N;

scanf("%d", &N);
fibonacci(N);
return 0;
}
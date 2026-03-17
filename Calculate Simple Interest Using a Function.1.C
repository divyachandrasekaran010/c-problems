Calculate Simple Interest Using a Function

Test Cases:
1. Input: 1000 5 2
Output: 100.00
Explanation: (1000×5×2)/100 = 100
2. Input: 1500 4 1
Output: 60.00
Explanation: Interest calculated for 1 year
3. Input: 2000 3 3
Output: 180.00
Explanation: Interest increases with time


#include <stdio.h>
float simpleInterest(int P, int R, int T)
{
float SI;
SI = (P * R * T) / 100.0;
return SI;
}
int main()
{
int P, R, T;
float result;
scanf("%d %d %d", &P, &R, &T);
result = simpleInterest(P, R, T);
printf("%.2f", result);
return 0;
}
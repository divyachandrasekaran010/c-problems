Calculate Area of Circle Using Function
Test Cases:
1. Input: 7
Output: 153.86
Explanation: 3.14×7×7
2. Input: 5
Output: 78.50
Explanation: Standard formula used
3. Input: 1
Output: 3.14
Explanation: Minimum radius

#include <stdio.h>
float areaCircle(int r)
{
return 3.14 * r * r;
}
int main()
{

int R;
scanf("%d", &R);
printf("%.2f", areaCircle(R));
return 0;
}
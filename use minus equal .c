Use -= operator.
Test Case 1
Input: 10 5
Output: 5
Test Case 2
Input: 20 10

Output: 10
Test Case 3
Input: 5 5
Output: 0



#include <stdio.h>
int main() {
    int a,b;
    printf("input:",a,b);
    scanf("%d %d",&a,&b);
    a-=b;
    printf("%d",a);
    return 0;
}
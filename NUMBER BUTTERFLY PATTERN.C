NUMBER BUTTERFLY PATTERN
Enter a number: 4
1      1
12    21
123  321
12344321

#include <stdio.h>
int main()
{
    int i, j, n,s;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        for(s = 1; s<= 2*(n-i); s++)
        {
            printf(" ");
        }
        for(j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }
    return 0;
}
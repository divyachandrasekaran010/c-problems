Digit Counter in Product IDs

Description
 Digits: 0–9 only.
Test Cases
Input: venky123 → 3
 Input: 2026Year → 4
 Input: NoDigits → 0


#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= '0' && str[i] <= '9')
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}
Space Counter in Delivery Address

Test Cases
Input: No 10 Street
 Output: 2
 Explanation: Between words.
Input: Chennai Tamil Nadu → 2
Input: India → 0

#include <stdio.h>
int main()
{
    char str[100];
    int i = 0, count = 0;
    fgets(str, sizeof(str), stdin);
    while(str[i] != '\0')
    {
        if(str[i] == ' ')
            count++;

        i++;
    }
    printf("%d", count);
    return 0;
}

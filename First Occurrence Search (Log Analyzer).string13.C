First Occurrence Search (Log Analyzer)
Test Cases
Input: hello, l → 2
 Input: venky, v → 0
 Input: world, z → -1

#include <stdio.h>

int main()
{
    char str[100], ch;
    int i, pos = -1;

    scanf("%s", str);
    scanf(" %c", &ch);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ch)
        {
            pos = i;
            break;
        }
    }

    printf("%d", pos);

    return 0;
}

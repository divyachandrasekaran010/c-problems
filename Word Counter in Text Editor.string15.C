Word Counter in Text Editor
Test Cases
Input: I love C → 3
 Input: ChatGPT is powerful → 3
 Input: Hello → 1

#include <stdio.h>

int main()
{
    char str[100];
    int i, count = 0;

    fgets(str, sizeof(str), stdin);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }

    printf("%d", count + 1);

    return 0;
}
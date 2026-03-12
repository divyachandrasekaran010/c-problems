Manual String Copy (Memory Backup Tool)
Test Cases
Input: Hello → Hello
 Input: AI → AI
 Input: CopyTest → CopyTest

#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i;

    scanf("%s", str1);

    for(i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }

    str2[i] = '\0';

    printf("%s", str2);

    return 0;
}
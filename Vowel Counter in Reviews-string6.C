Vowel Counter in Reviews

Test Cases
Input: Amazing → 4
 Explanation: A,a,i → 4
Input: Sky → 0
Input: Education → 5

#include <stdio.h>
int main() {
    char str[100];
    int i = 0, count = 0;
    scanf("%s", str);
    while(str[i] != '\0') {
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' ||
           str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
            count++;
           }
        i++;
    }
    printf("%d", count);
    return 0;
}
Consonant Counter in Speech Analysis
Test Cases
Input: hello
 Output: 3
 Explanation: h,l,l
Input: AI
 Output: 0

#include <stdio.h>
#include <ctype.h>
int main() {
    char str[100];
    int i = 0, count = 0;

    printf("Enter text: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        char ch = tolower(str[i]);

        if(isalpha(ch)) {
            if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u') {
                count++;
            }
        }

        i++;
    }

    printf("%d", count);

    return 0;
}
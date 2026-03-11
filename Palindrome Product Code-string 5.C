Palindrome Product Code

Test Cases
Input: madam → Palindrome
 Input: level → Palindrome
 Input: product → Not Palindrome

#include <stdio.h>
int main() {
    char str[100];
    int i = 0, len = 0, flag = 1;
    scanf("%s", str);
    while(str[i] != '\0') {
        len++;
        i++;
    }
    for(i = 0; i < len/2; i++) {
        if(str[i] != str[len-i-1]) {
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
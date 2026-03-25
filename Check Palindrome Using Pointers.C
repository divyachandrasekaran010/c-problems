Check Palindrome Using Pointers

#include <stdio.h>
int main() {
    char str[100];
    char *start, *end;
    int length = 0, flag = 1;
    scanf("%s", str);
    while(str[length] != '\0') {
        length++;
    }
    start = str;
    end = str + length - 1;
    while(start < end) {
        if(*start != *end) {
            flag = 0;
            break;
        }
        start++;
        end--;
    }
    if(flag == 1)
        printf("YES");
    else
        printf("NO");

    return 0;
}


Count Vowels in String Using Pointers

#include <stdio.h>
int main() {
    char str[100];
    char *ptr;
    int count = 0;
    fgets(str, sizeof(str), stdin);

    ptr = str;
    while (*ptr != '\0') {
        if (*ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u' ||
            *ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U') {
            count++;
        }
        ptr++;  // move pointer
    }
    printf("%d", count);
    return 0;
}






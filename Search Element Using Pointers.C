Search Element Using Pointers
#include <stdio.h>
int main() {
    int n, arr[100], x;
    int *ptr;
    int pos = -1;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &x);
    ptr = arr;
    for(int i = 0; i < n; i++) {
        if(*(ptr + i) == x) {
            pos = i + 1;
            break;
        }
    }
    printf("%d", pos);

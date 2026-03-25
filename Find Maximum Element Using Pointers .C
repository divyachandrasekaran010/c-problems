Find Maximum Element Using Pointers 

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[100];
    int *ptr;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    int max = *ptr;
    for(int i = 1; i < n; i++) {
        if(*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }
    printf("%d", max);
    return 0;
}
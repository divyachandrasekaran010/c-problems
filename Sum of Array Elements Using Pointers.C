Sum of Array Elements Using Pointers
#include <stdio.h>
int main() {
    int n, arr[100];
    int *ptr;
    int sum = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    ptr = arr;
    for(int i = 0; i < n; i++) {
        sum += *(ptr + i);
    }
    printf("%d", sum);
    return 0;
}

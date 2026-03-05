Count Peak Traffic Hours
TEST CASE 
1)7 → 1 3 2 4 1 5 1 → 3
2)5 → 1 2 3 4 5 → 0
3)6 → 5 10 5 10 5 10 → 2

#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 1; i < n-1; i++) {
        if(arr[i] > arr[i-1] && arr[i] > arr[i+1])
            count++;
    }
    printf("%d", count);
    return 0;
}
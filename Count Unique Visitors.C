 Count Unique Visitors

TEST CASE 
1) 6 → 1 2 2 3 3 4 → 4
2)4 → 5 5 5 5 → 1
3)5 → 7 8 9 7 8 → 3

#include <stdio.h>
int main() {
    int n, count = 0;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        int flag = 0;
        for(int j = 0; j < i; j++) {
            if(arr[i] == arr[j]) {
                flag = 1;
                break;
            }
        }
        if(!flag)
            count++;
    }
    printf("%d", count);
    return 0;
}
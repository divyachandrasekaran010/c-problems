First Repeating Transaction ID
TEST CASE 
1)6 → 10 5 3 4 3 5 → 5
2)4 → 1 2 3 4 → -1 
3)5 → 9 8 7 8 9 → 9

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("%d", arr[i]);
                return 0;
            }
        }
    }
    printf("-1");
    return 0;
}


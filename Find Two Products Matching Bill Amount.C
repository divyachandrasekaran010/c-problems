Find Two Products Matching Bill Amount

TEST CASE 
1)5 → 2 4 6 8 10, Sum=14 → 4 10
2)4 → 1 2 3 4, Sum=10 → No pair
3)3 → 5 5 5, Sum=10 → 5 5

#include <stdio.h>
int main() {
    int n, target;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &target);
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target) {
                printf("%d %d", arr[i], arr[j]);
                return 0;
            }
        }
    }
    printf("No pair");
    return 0;
}
Expense Balance Point (Equilibrium Index)
TEST CASE 
1)5 → 1 3 5 2 2 → 2
2)3 → 1 2 3 → -1
3)1 → 10 → 0

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int total = 0, left = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(int i = 0; i < n; i++) {
        total -= arr[i]; // right sum
        if(left == total) {
            printf("%d", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1");
    return 0;
}
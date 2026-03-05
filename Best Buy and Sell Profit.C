Best Buy and Sell Profit
TEST CASE 
1)6 → 7 1 5 3 6 4 → 5
2)4 → 9 8 7 6 → -1
3)5 → 1 2 3 4 5 → 4

#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int min = arr[0];
    int maxProfit = INT_MIN;
    for(int i = 1; i < n; i++) {
        if(arr[i] - min > maxProfit)
            maxProfit = arr[i] - min;
        if(arr[i] < min)
            min = arr[i];
    }
    printf("%d", maxProfit);
    return 0;
}
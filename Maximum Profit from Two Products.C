Maximum Profit from Two Products
Test Case 1
Input
 5 → -10 -3 5 6 -2
 Output
 30

#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    int max1 = INT_MIN, max2 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if(arr[i] > max2) {
            max2 = arr[i];
        }
        if(arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if(arr[i] < min2) {
            min2 = arr[i];
        }
    }
    int product1 = max1 * max2;
    int product2 = min1 * min2;
    if(product1 > product2)
        printf("%d", product1);
    else
        printf("%d", product2);
    return 0;
}
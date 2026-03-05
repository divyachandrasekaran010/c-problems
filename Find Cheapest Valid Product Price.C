 Find Cheapest Valid Product Price

TEST CASE 
1)5 → -1 3 2 0 5 → 2
2)3 → -5 -2 -1 → No positive
3)4 → 1 2 3 4 → 1

#include <stdio.h>
#include <limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int min = INT_MAX;
    int found = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        if(arr[i] > 0 && arr[i] < min) {
            min = arr[i];
            found = 1;
        }
    }
    if(found)
        printf("%d", min);
    else
        printf("No positive");
    return 0;
}
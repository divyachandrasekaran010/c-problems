Verify Unique Product Codes
TEST CASE 
1)4 → 1 2 3 4 → Yes
2)5 → 1 2 3 2 4 → No
3)3 → 7 8 9 → Yes

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++) {
        for(int j = i+1; j < n; j++) {
            if(arr[i] == arr[j]) {
                printf("No");
                return 0;
            }
        }
    }
    printf("Yes");
    return 0;
}
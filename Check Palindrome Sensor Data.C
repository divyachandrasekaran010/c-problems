Check Palindrome Sensor Data
TEST CASE 
1)5 → 1 2 3 2 1 → Yes
2)4 → 1 2 3 4 → No
3)1 → 9 → Yes

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int flag = 1;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n/2; i++) {
        if(arr[i] != arr[n-1-i]) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}
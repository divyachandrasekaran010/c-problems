 Move Cancelled Orders to End
TEST CASE 
1)5 → 0 1 0 3 0 → 1 3 0 0 0
2)3 → 1 2 3 → 1 2 3
3)4 → 0 0 5 6 → 5 6 0 0

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int index = 0;
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(int i = 0; i < n; i++)
        if(arr[i] != 0)
            arr[index++] = arr[i];
    while(index < n)
        arr[index++] = 0;
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
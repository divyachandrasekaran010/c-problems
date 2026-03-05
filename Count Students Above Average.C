Count Students Above Average
TEST CASE 
1)5 → 1 2 3 4 5 → 2
2)4 → 10 10 10 10 → 0
3)3 → 40 60 80 → 1

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int sum = 0, count = 0;
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    float avg = (float)sum / n;
    for(int i = 0; i < n; i++)
        if(arr[i] > avg)
            count++;
    printf("%d", count);
    return 0;
}
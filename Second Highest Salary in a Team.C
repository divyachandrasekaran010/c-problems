Second Highest Salary in a Team
Test Cases
1. 5 → 4000 9000 1000 7000 3000
Largest = 9000, Second = 7000 → Output: 7000
2. 4 → 10000 10000 5000 2000
Highest repeated, next distinct = 5000 → Output: 5000
3. 3 → 2000 3000 1000
Largest = 3000, Second = 2000 → Output: 2000

#include <stdio.h>
#include<limits.h>
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max = INT_MIN, second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > max){
            second = max;
            max = arr[i];
        }
        else if(arr[i] > second && arr[i] != max){
            second = arr[i];
        }
    }
    printf(" %d", second);
    return 0;
}
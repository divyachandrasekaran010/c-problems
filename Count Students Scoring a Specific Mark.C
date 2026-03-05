Count Students Scoring a Specific Mark
Test Cases
1. 5 → 50 60 50 40 50, X=50 → 3
2. 4 → 70 80 90 60, X=75 → 0
3. 3 → 10 10 10, X=10 → 3

#include <stdio.h>
int main(){
    int n,x,count=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&x);
    for(int i=0;i<n;i++)
        if(arr[i]==x)
            count++;
    printf("%d",count);
    return 0;
}
Rotate Left by K:
TEST CASE 
1)5 → 1 2 3 4 5, K=2 → 3 4 5 1 2
2)4 → 10 20 30 40, K=1 → 20 30 40 10
3)3 → 5 6 7, K=2 → 7 5 6

#include <stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(int i=k;i<n;i++)
        printf("%d ",arr[i]);
    for(int i=0;i<k;i++)
        printf("%d ",arr[i]);
    return 0;
}
Rotate Left by K
TEST CASE 
1)5 → 1 2 3 4 5, K=2 → 3 4 5 1 2
2)4 → 10 20 30 40, K=1 → 20 30 40 10

#include<stdio.h>
int main()
{
    int n,k,i;
    int arr[50],temp[50];
    printf("Enter size: ");
    scanf("%d",&n);
    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter K: ");
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        temp[i]=arr[i];
    }
    for(i=k;i<n;i++)
    {
        arr[i-k]=arr[i];
    }
    for(i=0;i<k;i++)
    {
        arr[n-k+i]=temp[i];
    }
    printf("Rotated array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
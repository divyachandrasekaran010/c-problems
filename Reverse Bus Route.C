Reverse Bus Route
TEST CASE 
1)5 → 1 2 3 4 5 → 5 4 3 2 1
2)3 → 10 20 30 → 30 20 10
3)4 → 5 6 7 8 → 8 7 6 5

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int i=0,j=n-1,temp;
    while(i<j){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}
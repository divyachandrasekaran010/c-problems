Replace with Future Maximum
TEST CASE 
1)5 → 16 17 4 3 5 → 17 5 5 5 -1
2)3 → 1 2 3 → 3 3 -1
3)4 → 8 6 4 2 → 6 4 2 -1

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int max=-1,temp;
    for(int i=n-1;i>=0;i--){
        temp=arr[i];
        arr[i]=max;
        if(temp>max)
            max=temp;
    }
    for(int i=0;i<n;i++)
        printf("%d ",arr[i]);
    return 0;
}

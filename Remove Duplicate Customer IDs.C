 Remove Duplicate Customer IDs
TEST CASE 
1)6 → 1 2 2 3 1 4 → 1 2 3 4
2)4 → 5 5 5 5 → 5
3)5 → 9 8 7 8 9 → 9 8 7

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n;i++){
        int flag=0;
        for(int j=0;j<i;j++){
            if(arr[i]==arr[j]){
                flag=1;
                break;
            }
        }
        if(!flag)
            printf("%d ",arr[i]);
    }
    return 0;
}
Verify Sorted Daily Sales
TEST CASE 
1)5 → 100 200 300 400 500 → Yes
2)4 → 100 300 200 400 → No
3)3 → 50 60 70 → Yes

#include <stdio.h>
int main(){
    int n,flag=1;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(int i=0;i<n-1;i++){
        if(arr[i] > arr[i+1]){
            flag=0;
            break;
        }
    }
    if(flag) printf("Yes");
    else printf("No");
    return 0;
}
Count Even and Odd Days
TEST CASE 
1)5 → 1 2 3 4 5 → Even:2 Odd:3
2)3 → 2 4 6 → Even:3 Odd:0
3)4 → 7 9 11 13 → Even:0 Odd:4

#include <stdio.h>
int main(){
    int n,even=0,odd=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2==0) even++;
        else odd++;
    }
    printf("Even:%d Odd:%d",even,odd);
    return 0;
}
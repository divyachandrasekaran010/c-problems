Maximum 2×2 Revenue Block

Test Case
Input
 3 3
 1 2 3
 4 5 6
 7 8 9
Output
 28
 
#include <stdio.h>
int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int max=0;
    for(int i=0;i<R-1;i++){
        for(int j=0;j<C-1;j++){
            int sum=a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
            if(sum>max) max=sum;
        }
    }
    printf("%d",max);
}
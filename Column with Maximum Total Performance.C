Column with Maximum Total Performance

Test Case
Input
 2 3
 1 2 3
 4 5 6
Output
 2

#include <stdio.h>
int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int maxSum=-999999,index=0;
    for(int j=0;j<C;j++){
        int sum=0;
        for(int i=0;i<R;i++)
            sum+=a[i][j];
        if(sum>maxSum){
            maxSum=sum;
            index=j;
        }
    }
    printf("%d",index);
}

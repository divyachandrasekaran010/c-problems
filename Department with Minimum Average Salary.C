Department with Minimum Average Salary
Test Case
Input
 2 3
 3000 4000 5000
 2000 2000 2000
Output
 1
 
#include <stdio.h>
int main(){
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    int minSum=1000000000,index=0;
    for(int i=0;i<R;i++){
        int sum=0;
        for(int j=0;j<C;j++)
            sum+=a[i][j];
        if(sum<minSum){
            minSum=sum;
            index=i;
        }
    }
    printf("%d",index);
}

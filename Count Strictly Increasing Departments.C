Count Strictly Increasing Departments

Test Case
Input
 3 4
 1 2 3 4
 2 2 3 4
 5 6 7 8
Output
 2


#include <stdio.h>
int main(){
    int R,C,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<R;i++){
        int inc=1;
        for(int j=1;j<C;j++){
            if(a[i][j] <= a[i][j-1]){
                inc=0;
                break;
            }
        }
        if(inc)
            count++;
    }
    printf("%d",count);
}
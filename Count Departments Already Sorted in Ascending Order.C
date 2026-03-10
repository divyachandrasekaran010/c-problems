 Count Departments Already Sorted in Ascending Order

Test Case
Input
 3 3
 1 2 3
 3 2 1
 4 5 6
Output
 2

#include <stdio.h>
int main() {
    int R,C,count=0;
    scanf("%d%d",&R,&C);
    int a[R][C];
    for(int i=0;i<R;i++)
        for(int j=0;j<C;j++)
            scanf("%d",&a[i][j]);
    for(int i=0;i<R;i++){
        int sorted=1;
        for(int j=0;j<C-1;j++){
            if(a[i][j] > a[i][j+1]){
                sorted=0;
                break;
            }
        }
        if(sorted)
            count++;
    }
    printf("%d",count);
}
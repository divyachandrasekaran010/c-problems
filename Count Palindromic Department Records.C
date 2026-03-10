Count Palindromic Department RecordsTest Case
Input
 3 3
 1 2 1
 3 4 5
 6 7 6
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
        int pal=1;
        for(int j=0;j<C/2;j++){
            if(a[i][j] != a[i][C-j-1]){
                pal=0;
                break;
            }
        }
        if(pal)
            count++;
    }
    printf("%d",count);
}
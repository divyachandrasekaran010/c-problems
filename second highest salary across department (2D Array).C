second highest salary across department (2D Array)

Test Cases
Inout
3 3 
4000 9000 1000
7000 3000 9000
2000 8000 5000
output
8000

 #include <stdio.h>
#include <limits.h>
int main() {
    int R,C;
    scanf("%d%d",&R,&C);
    int a[R][C];
    int max=INT_MIN, second=INT_MIN;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            scanf("%d",&a[i][j]);
            if(a[i][j]>max){
                second=max;
                max=a[i][j];
            }
            else if(a[i][j]>second && a[i][j]!=max){
                second=a[i][j];
            }
        }
    }
    printf("%d",second);
}